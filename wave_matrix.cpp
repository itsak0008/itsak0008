#include <iostream>
#include <vector>
using namespace std;

void wavePrintMatrix(vector<vector<int>> v)
{
    int m = v.size();    // Number of rows
    int n = v[0].size(); // Number of columns
    for (int col = 0; col < n; col++)
    {
        if (col % 2 == 0)
        {
            // Traverse from top to bottom for even-indexed columns
            for (int j = 0; j < m; j++)
            {
                cout << v[j][col] << " ";
            }
        }
        else
        {
            // Traverse from bottom to top for odd-indexed columns
            for (int i = m - 1; i >= 0; i--)
            {
                cout << v[i][col] << " ";
            }
        }
    }
}

int main()
{
    vector<vector<int>> v{
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20}};
    wavePrintMatrix(v);
    return 0;
}
