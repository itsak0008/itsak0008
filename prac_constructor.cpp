#include<iostream>
using namespace std;


class complex
{
    int a,b;
    public :
    complex(void);

    void printnumber(){
         cout<<"your number is " << a << " + " << b << " i "<<endl;
    }

};
complex :: complex(void){
    a = 10;
    b = 01;
}

int main(){
    complex s1, s2, s3;
    s1.printnumber();
    s2.printnumber();
    s3.printnumber();
    return 0;
}