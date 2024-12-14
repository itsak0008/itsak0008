#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int *p  = &a;
    cout<<"this is address of &p :"<<&p<<endl;
    cout<<"this is address of *p :"<<*p<<endl;
    cout<<"this is address of a :"<<a<<endl;
    cout<<"this is address of &a :"<<&a<<endl;
    cout<<"this is address of &a :"<<p<<endl;
    
    return 0;
}
