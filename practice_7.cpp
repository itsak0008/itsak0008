#include<iostream>
using namespace std;

class employess
{
    private :
       int a,b,c;
    public :
       int d,e;
       void setdata(int a1,int b1,int c1);
       void getdata(){
           cout<<"this is a ="<<a<<endl;
           cout<<"this is b ="<<b<<endl;
           cout<<"this is c ="<<c<<endl;
           cout<<"this is d ="<<d<<endl;
           cout<<"this is e ="<<e<<endl;

       } 

};
void employess :: setdata(int a1,int b1,int c1){
    a = a1;
    b = b1;
    c = c1;
}  

int main(){
    employess alok ;
    alok.d = 23;
    alok.e = 25;
    alok.setdata(1,2,3);
    alok.getdata();
    return 0;
}