// create  a array by using vector/dynamic array

#include <iostream>
#include <vector>
using namespace std;

int find_element(vector<int> arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int n;
    cout << "enter the size of array : ";
    cin >> n;
    vector<int> arr(n);

    cout << "enter element of array " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    int result = find_element(arr);
    cout << result;
    return 0;
}