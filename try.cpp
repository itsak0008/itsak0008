#include <iostream>
#include <vector>
using namespace std;

// int main(){
//     int lucky_number;
//     cout<<"Enter your lucky_number : ";
//     cin>>lucky_number;

//     int sum = 1;
//     int ct = 1;
//     // enter your lucky_number from 1 - 10
//     for (int i = 0; i < lucky_number; i++)
//     {
//         for (int j = 0; j < lucky_number - i -1; j++)
//         {
//             cout<<ct<<" ";
//         }
//         cout<<sum;
//         sum++;
//         cout<<endl;
//     }

//     return 0;
// }

int binary_search(vector<int> v, int size, int target)
{
    int start = 0;
    int end = size - 1;
    int result = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (v[mid] == target)
        {
            result = mid;
            end = mid - 1;
        }
        else if (v[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return result;
}
int main()
{
    vector<int> v{1, 2, 3, 4, 4, 4, 4, 5, 6, 7};
    int size = v.size();
    int target = 4;

    int result = binary_search(v, size, target);
    if (result != -1)
        cout << "First occurrence is at index: " << result << endl;
    else
        cout << "Target not found" << endl;
    return 0;
}