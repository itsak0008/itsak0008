#include<iostream>
using namespace std;

class employees 
{
    int id;
    static int count;
    public :
        void setdata(void){
            cout<<"enter employees"<<endl;
            cin>>id;
            count++;
        }
        void getdata(void)
        {
            cout<<"this is employees id is "<<id<< "and this is number of count" <<count<<endl;
        }    
        static void getcount(void){    // this is static function in c++;
            cout<<"the value of count is : "<<count<<endl;
        }
};

int employees :: count;

int main(){
    employees alok,ashu,sid;
    alok.setdata();
    alok.getdata();
    employees :: getcount();


    ashu.setdata();
    ashu.getdata();
    employees :: getcount();

    sid.setdata();
    sid.getdata();
    employees :: getcount();
    return 0;
}