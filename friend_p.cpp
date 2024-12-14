#include<iostream>
using namespace std;

class complex
{
    int a;
    int b;
    friend complex setdatabysum(complex o1,complex o2);
public:
    void setdata(int a1,int b2){
        a = a1;
        b = b2;    
    }

    // friend complex setdatabysum(complex o1,complex o2);

    void printdata(){
        cout<<"complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
    complex setdatabysum(complex o1,complex o2){
        complex o3;
        o3.setdata((o1.a + o2.a),(o1.b + o2.b));
        return o3;
    }
int main(){
    complex c1,c2,sum;
    c1.setdata(3,6);
    c1.printdata();

    c2.setdata(4,9);
    c2.printdata();

    sum = setdatabysum(c1,c2);
    sum.printdata();
    return 0;
}