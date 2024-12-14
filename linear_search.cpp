#include<iostream>
using namespace std;

bool linear_s(int arr[],int size,int key){
    
    for(int i = 0; i<size;i++ ){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int key;
    cout<<"enter any key in array :"<<endl;
    cin>>key;


    bool found = linear_s(arr,5, key);
    if(found){
        cout<<"key is found ";
        
    }else{
        cout<<"key is not found ";
    }
    return 0;
}