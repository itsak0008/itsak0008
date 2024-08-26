#include<iostream>
using namespace std;

binary_Number(int arr[],int size,int target){
    int start = 0;
    int end = size -1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }else if(target < arr[mid]){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
        mid = (start + end ) / 2;
        
    }
    return -1;
}

int main(){
    int arr[] = {1,3,5,7,9,11};
    int size = sizeof(arr)/sizeof(int);
    int target = 11;
    
    int findnumber = binary_Number(arr,size,target);

    if(findnumber == -1){
        cout<<"element not found !";
    }else{
        cout<<"element found at "<<findnumber<<" index"<<endl;
    }
    return 0;
}