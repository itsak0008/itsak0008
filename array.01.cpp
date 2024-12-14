#include<iostream>
using namespace std;

class complex
{
    int a;
    int b;
public:
    void setdata(int a1,int b2){
        a = a1;
        b = b2;    
    }
    void setdatabysum(complex o1,complex o2){
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printdata(){
        cout<<"complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

int main(){
    complex c1,c2,c3;
    c1.setdata(1,2);
    c1.printdata();

    c2.setdata(3,4);
    c2.printdata();

    c3.setdatabysum(c1,c2);
    c3.printdata();

    return 0;
}