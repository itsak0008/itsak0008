#include<iostream>
using namespace std;

int main(){
   int n;
   int num=1;
   char ch = '*';
    cout<<"enter any number :";
    cin>>n;
    int i=1;
    while( i<=n ){
        int value = i;
        int j=1;
        while (j<=i)
        {
            cout<<value<<" ";
            // cout<<i<<" ";
            // i++;
            value--;
            j++;
        }
        cout<<endl;
        i++;
        
    }
   
    return 0;
}