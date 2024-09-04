#include <iostream>
using namespace std;

missingnumber(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int index = abs(arr[i]);
        if (arr[index - 1] > 0)
        {
            arr[index - 1] *= -1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            cout << i + 1 << endl;
        }
    }
}

int main()
{

    int arr[] = {1, 3, 5, 3, 4};
    int n = sizeof(arr) / sizeof(int);

    missingnumber(arr, n);
    return 0;
}