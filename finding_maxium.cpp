#include <iostream>
#include <limits.h>
using namespace std;

void find_max(int arr[], int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    cout << "maxium number is : " << maxi;
}
int main()
{
   int arr[100];
   int n;
   cout<<"enter the size of array : ";
   cin>>n;
   cout<<"enter element for campar gretest number : "<<endl;
   for (int i = 0; i < n; i++)
   {
     cin>>arr[i];
   }
   
    // int arr[] = {1, 2, 3, 4, 32, 2, 54, 3, 2};

    find_max(arr, n);

    return 0;
}