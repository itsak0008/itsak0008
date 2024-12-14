#include<iostream>
using namespace std;

int sum(int a , int b);
void g(void);



int main(){
    g();
    int w,p;
    cout<<"enter any number : "<<endl;
    cin>>w;
    cout<<"enter any number : "<<endl;
    cin>>p;
    cout<<"this addition of two number : "<<sum(w,p)<<endl;

    return 0;
}
int sum(int a , int b){
    int c=a+b;
    return c;
}
void g(){
    cout<<"hello world !"<<endl;
}