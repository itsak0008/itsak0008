#include<iostream>
using namespace std;

int main(){
    int row , col;
    cout<<"enter row : ";
    cin>>row;
    cout<<"enter col : ";
    cin>>col;

    for (int i = 0; i < row; i++)
    {
        if(i == 0 || i == row-1){
        for (int j = 0; j < col; j++)
        {
            cout<<"* ";
        }
        }else{
            cout<<"* ";
            for (int k = 0; k < col-2; k++)
            {
                cout<<" ";
            }
            cout<<"*";
        }
        
        cout<<endl;
    }
    
    return 0;
}