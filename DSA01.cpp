#include<iostream>
using namespace std;

int main(){
    // char ch=97 ;
    // cout<<ch;
    // int ch = 'a';
    // cout<<ch;
    char n;
    cout<<"enter any number :";
    cin>>n;
    for(char i=1;i<=122;i++){
        if(i>=97 && i<=122 ){
            if(n==i){
            cout<<"this is lowercase";
            }
        }else if(i>=65 && i<=90){
            if(n==i){
            cout<<"this is uppercase";
            }
        }else if (n==i){
            cout<<"numeric";
        }
    }


    return 0;
}