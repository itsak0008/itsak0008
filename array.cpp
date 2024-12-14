#include<iostream>
using namespace std;

class employees{
    int id;
    int salary;
    public:
        void setdata(){
            salary = 122;
            cout<<"enter yoour id = ";
            cin>>id;
        }  
        void getdata(){
            cout<<"your id is "<<id<<endl;
        }
};

int main(){
    employees alok[4];
    for(int i=0;i<4;i++){
        alok[i].setdata();
        alok[i].getdata();
    }
    return 0;
}