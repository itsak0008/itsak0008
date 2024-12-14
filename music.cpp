#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

using namespace std;

struct Node
{
    char song[100];
    Node *next;
    Node *prev;
};

Node *top = nullptr;

void toFile(const char a[])
{
    ofstream f1("songs.txt", ios::app);
    if (!f1)
    {
        cerr << "Error opening file!" << endl;
        return;
    }
    f1 << a << endl;
    f1.close();
}

void addNode(Node *&first)
{
    char a[100];
    // Traverse to the end of the list
    while (first->next != nullptr)
    {
        first = first->next;
    }
    first->next = new Node;
    first->next->prev = first; // Correctly set the previous pointer
    first = first->next;       // Move to the new node
    cout << "\nEnter Song name: ";
    cin.getline(a, 100);
    strcpy(first->song, a);
    toFile(a);
    first->next = nullptr;
}

void printList(Node *first)
{
    cout << "\nPlaylist:\n";
    while (first != nullptr)
    {
        cout << first->song << endl;
        first = first->next;
    }
}

void deleteFile(const char a[])
{
    ifstream f1("songs.txt");
    ofstream f2("temp.txt");
    if (!f1 || !f2)
    {
        cerr << "Error opening file!" << endl;
        return;
    }

    string line;
    bool found = false;

    while (getline(f1, line))
    {
        if (line != a)
        {
            f2 << line << endl;
        }
        else
        {
            found = true;
        }
    }
    f1.close();
    f2.close();

    remove("songs.txt");
    rename("temp.txt", "songs.txt");

    if (!found)
    {
        cout << "There is no song with the name you entered." << endl;
    }
    else
    {
        cout << "Song has been deleted." << endl;
    }
}

void deleteNode(Node *&first, int pos)
{
    if (first == nullptr)
        return; // empty list

    Node *temp = first;

    if (pos == 0)
    { // delete first node
        first = first->next;
        if (first)
            first->prev = nullptr;
        delete temp;
        return;
    }

    for (int i = 0; temp != nullptr && i < pos; i++)
    {
        temp = temp->next;
    }

    if (temp == nullptr)
        return; // position is out of bounds

    // Unlink the node from the linked list
    if (temp->prev)
        temp->prev->next = temp->next;
    if (temp->next)
        temp->next->prev = temp->prev;

    deleteFile(temp->song);
    delete temp;
}

void search(Node *first)
{
    char song[100];
    cout << "\nEnter song to be searched: ";
    cin.getline(song, 100);
    while (first != nullptr)
    {
        if (strcmp(first->song, song) == 0)
        {
            cout << "# Song Found: " << first->song << endl;
            return;
        }
        first = first->next;
    }
    cout << "# Song Not Found" << endl;
}

void addPlaylist(Node *&start)
{
    ifstream f1("songs.txt");
    if (!f1)
    {
        cerr << "Error opening file!" << endl;
        return;
    }

    string line;
    while (getline(f1, line))
    {
        addNode(start);
        strcpy(start->song, line.c_str());
        start = start->next; // Move to the next node for the next addition
    }
    cout << "Playlist Added" << endl;
    f1.close();
}

void displayRecent(Node *top)
{
    cout << "\n# Recently Played Tracks:\n";
    while (top != nullptr)
    {
        cout << top->song << endl;
        top = top->next;
    }
}

void play(Node *first)
{
    char song[100];
    printList(first);
    cout << "\nChoose song you wish to play: ";
    cin.getline(song, 100);

    while (first != nullptr)
    {
        if (strcmp(first->song, song) == 0)
        {
            cout << "Now Playing: " << song << endl;
            // Add to recent songs
            Node *newRecent = new Node;
            strcpy(newRecent->song, song);
            newRecent->next = top;
            newRecent->prev = nullptr; // Set previous to null for the new top
            if (top != nullptr)
            {
                top->prev = newRecent;
            }
            top = newRecent;
            return;
        }
        first = first->next;
    }
    cout << "# Song Not Found" << endl;
}

int main()
{
    Node *start = new Node;
    start->next = nullptr;
    start->prev = nullptr;
    cout << "\t\t\t**WELCOME**\n";
    cout << "Enter your playlist name: ";
    cin.getline(start->song, 100);

    int choice;
    do
    {
        cout << "\n1. Add New Song\n2. Delete Song\n3. Display Playlist\n4. Search Song\n5. Play Song\n6. Recently Played\n7. Add From File\n8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // to clear the newline character from the input buffer

        switch (choice)
        {
        case 1:
            addNode(start);
            break;
        case 2:
        {
            int pos;
            cout << "Enter position of the song to delete: ";
            cin >> pos;
            cin.ignore();
            deleteNode(start, pos - 1);
            break;
        }
        case 3:
            printList(start);
            break;
        case 4:
            search(start);
            break;
        case 5:
            play(start);
            break;
        case 6:
            displayRecent(top);
            break;
        case 7:
            addPlaylist(start);
            break;
        case 8:
            exit(0);
        }
    } while (choice != 8);

    // Clean up memory
    while (start != nullptr)
    {
        Node *temp = start;
        start = start->next;
        delete temp;
    }
    while (top != nullptr)
    {
        Node *temp = top;
        top = top->next;
        delete temp;
    }

    return 0;
}
