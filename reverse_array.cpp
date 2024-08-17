#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int size;
    cout<<"enter the size of array : ";
    cin>>size;

    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    int start = 0;
    int end = size -1;
    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout<<"reverse of array is : "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}