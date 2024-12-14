#include<iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"enter any number "<<endl;
    cin>>n;

    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"this is not prime number!";
            break;
        }
    } 
       
         if(i==n){
            cout<<"this is prime number!";
    }


    return 0;
}