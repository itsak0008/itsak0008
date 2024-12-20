#include <iostream>
using namespace std;

// Function Parameter for 2D Array: Changed int arr[][] to int arr[][4] to specify the second dimension of the array.
// This is necessary for C++ to know the size of the second dimension.
bool binary_search(int arr[][4], int row, int col, int target)
{
    int start = 0;
    int end = row * col - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        int rowindex = mid / col;
        int colindex = mid % col;
        if (arr[rowindex][colindex] == target)
        {
            return true;
        }
        if (arr[rowindex][colindex] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return false;
}

int main()
{
    int arr[5][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}, {17, 18, 19, 20}};
    int row = 5;
    int col = 4;
    int target = 20;

    bool ans = binary_search(arr, row, col, target);
    if (ans)
    {
        cout << "found!";
    }
    else
    {
        cout << "Not Found";
    }
    return 0;
}
// hello
