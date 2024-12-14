// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     int num = 1;
//     char ch = '*';
//     cout << "enter any number :";
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int space = n - i;
//         while (space)
//         {
//             cout << " ";
//             space--;
//         }
//         int j = 1;
//         while (j <= i)
//         {
//             cout << ch;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }
#include <iostream>
using namespace std;

int main()
{
    int n;
    int num = 1;
    char ch = '*';
    cout << "enter any number :";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int space = i-1;
        while (space)
        {
            cout<<" "<<" ";
            space--;
        }
        
        int j=n ;
        while(j>=i){
            cout<<ch<<" ";
            j--;
        }
 
        int tp = n-i; 
        while (tp)
        {
            cout<<'*'<<" ";
            tp--;
        }
        int tspace = n-i;
        while (tspace)
        {
            cout<<" "<<" ";
            tspace--;
        }
        
        int jp=1 ;
        while(jp<=i){
            cout<<ch<<" ";
            jp++;
        }
 
        int tps = i-1; 
        while (tps)
        {
            cout<<'*'<<" ";
            tps--;
        }
        cout << endl;
        i++;
    }

    return 0;
}
