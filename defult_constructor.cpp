#include<iostream>
using namespace std;


class complex
{
    int a,b;
    public :
    complex(int ,int);

    void printnumber(){
         cout<<"your number is " << a << " + " << b << " i "<<endl;
    }

};
complex :: complex(int x,int y){
    a = x;
    b = y;
}

int main(){
    complex a(2,4);
    a.printnumber();

    complex b = complex(3,4);
    b.printnumber();
    return 0;
}