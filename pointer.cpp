#include<iostream>
using namespace std;

int main(){
    // int A = 4;
    // int* ptr = &A;

    // int *p = new int(40);

    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    delete[] arr; /*delete operator used to del. address */

    // cout<<"value of ptr is : "<<*(ptr)<<endl;
    // cout<<"value of ptr is : "<<*p<<endl;
    // cout<<"value of ptr is : "<<&p<<endl;

   
    cout<<"value of arr[1] is : "<<arr[0]<<endl;
    cout<<"value of arr[1] is : "<<&arr[0]<<endl;
    cout<<"value of arr[2] is : "<<arr[1]<<endl;
    cout<<"value of arr[2] is : "<<&arr[1]<<endl;
    cout<<"value of arr[3] is : "<<arr[2]<<endl;
    cout<<"value of arr[3] is : "<<&arr[2]<<endl;
    return 0;
}