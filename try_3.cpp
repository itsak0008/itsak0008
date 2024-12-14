#include <iostream>
using namespace std;

void findCombinations(const int numbers[], int n, int lucky_number, int combination[], int index, int length) {
    if (lucky_number == 0) {
        for (int i = 0; i < length; i++) {
            cout << combination[i] << " ";
        }
        cout << endl;
        return;
    }
    if (lucky_number < 0) return;

    for (int i = index; i < n; ++i) {
        combination[length] = numbers[i];
        findCombinations(numbers, n, lucky_number - numbers[i], combination, i, length + 1);
    }
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(numbers) / sizeof(numbers[0]);
    int lucky_number;

    cout << "Enter your lucky number: ";
    cin >> lucky_number;

    int combination[100];

    cout << "Combinations that sum to " << lucky_number << " are:" << endl;
    findCombinations(numbers, n, lucky_number, combination, 0, 0);

    return 0;
}
