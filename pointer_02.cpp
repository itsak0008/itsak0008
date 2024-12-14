#include<iostream>
using namespace std;
class complex{
   int real, imaginary;
   public:
    void getdata(){
        cout<<"the real part is "<<real<<endl;
        cout<<"the imaginary part is "<<imaginary<<endl;
    }
    void setdata(int r,int i){
        real = r;
        imaginary = i;
    }
};
int main(){
    // complex c1;
    // complex *ptr = &c1;
    complex *ptr = new complex[4];
    ptr->setdata(1,23);
    (*ptr).getdata();
    return 0;
}