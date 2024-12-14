#include<iostream>
using namespace std;

class employee {
    int id;
    static int count;
    public:
    void setdata(void){
        cout<<"enter your id - "<<endl;
        cin>>id;
        count++;
    }
    void getdata(void){
        cout<<"this is employee id - "<<id<<endl<<"this  is employee number "<<count<<endl;
    }
    static int getcount(void){
        cout<<"this is value of count "<<count<<endl;
    }
};
int employee :: count; 

int main(){
    employee alok , rohan  , abhisek;
    alok.setdata();
    alok.getdata();
    alok.getcount();

    rohan.setdata();
    rohan.getdata();
    rohan.getcount();

    abhisek.setdata();
    abhisek.getdata();
    abhisek.getcount();
    return 0;
}