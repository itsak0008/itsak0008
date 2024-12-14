#include<iostream>
using namespace std;
//use of only isme int main value copy nhi karta direct a,b value pass hota hai 
inline int product(int a,int b){
    return a*b;
}

int main(){
    int a=3,b=5;
    cout<<"this is the product of a and b : "<<product(a,b)<<endl;
    cout<<"this is the product of a and b : "<<product(a,b)<<endl;
    cout<<"this is the product of a and b : "<<product(a,b)<<endl;
    cout<<"this is the product of a and b : "<<product(a,b)<<endl;
    cout<<"this is the product of a and b : "<<product(a,b)<<endl;
    cout<<"this is the product of a and b : "<<product(a,b)<<endl;
    cout<<"this is the product of a and b : "<<product(a,b)<<endl;
    return 0;
}