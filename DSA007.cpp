#include<iostream>
using namespace std;

int minimum_value(int arr[], int n){
    int min = INT32_MAX;
    for(int i = 0; i<n ; i++){
        if(arr[i] < min){
        min = arr[i];
        }
    }
return min;
}
    
int maximum_value(int arr[], int n){
    int max = INT32_MIN;
    for(int i = 0; i<n ; i++){
        if(arr[i] > max){
        max = arr[i];
        }
    }
return max;
}


int main(){
    int size ;
    cout<<"enter size :";
    cin>>size;
    
    int arr[100];

    for(int i = 0;i<size; i++){
        cin>>arr[i];
    }
    cout<<"maximum number is :"<<maximum_value(arr,size)<<endl;
    cout<<"minimum number is :"<<minimum_value(arr,size)<<endl;
    return 0;
}