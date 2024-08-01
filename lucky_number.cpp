#include <iostream>
#include <vector>
using namespace std;
void findCombinations(const vector<int>& numbers, int lucky_number, vector<int>& combination, int index) {
    if (lucky_number == 0) {
        for (int num : combination) {
            cout << num << " ";
        }
        cout << endl;
        return;
    }
    if (lucky_number < 0) {
        return;
    }

    for (int i = index; i < numbers.size(); ++i) {
        combination.push_back(numbers[i]);
        findCombinations(numbers, lucky_number - numbers[i], combination, i);
        combination.pop_back();
    }
}

int main() {
    vector<int> numbers = {1,2,3,4,5,6,7,8,9};
    int lucky_number;
    cout<<"Enter your lucky number : ";
    cin>>lucky_number;
    vector<int> combination;

    cout << "Combinations lucky number " << lucky_number << " is :" << endl;
    findCombinations(numbers, lucky_number, combination, 0);

    return 0;
}
