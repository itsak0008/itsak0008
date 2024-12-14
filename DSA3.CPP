#include<iostream>
using namespace std;

int main(){
    int n,num=1;
    char ch = '*';
    cout<<"enter any number :";
    cin>>n;

    for(int row=1;row<=n;row++){
        int value = row;
        for(int col=1;col<=row;col++){
              cout<<value<<" ";
              value++;
            }
        cout<<endl;
        }
    return 0;
}