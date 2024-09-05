#include <iostream>
#include <unordered_map>
using namespace std;

class solution {
public:
    int firstrepeated(int a[], int n) {
        unordered_map<int, int> hash;

        for (int i = 0; i < n; i++) {
            hash[a[i]]++;
        }

        for (int i = 0; i < n; i++) {
            if (hash[a[i]] > 1) {
                return a[i]; 
            }
        }
        return -1; 
    }
};

int main() {
    solution obj; 

    int arr[] = {1, 3, 5, 4, 3, 5, 6}; 
    int n = sizeof(arr) / sizeof(arr[0]); 

    int result = obj.firstrepeated(arr, n); 

    if (result != -1) {
        cout << "First repeated element is: " << result << endl;
    } else {
        cout << "No repeated elements found." << endl;
    }

    return 0;
}
