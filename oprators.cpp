#include<iostream>
using namespace std;

int main(){
    int a = 4;
    int b = 6;

    cout<<"a & b = "<<(a & b) << endl;
    cout<<"a | b = "<<(a | b) << endl;
    cout<<"a ^ b = "<<(a ^ b) << endl;
    cout<<"~a = "<<~a << endl;

    
    cout<<(17 >> 1)<< endl;/* 17/2 = 8  */
    cout<<(17 >> 2)<< endl;/* 17/2*2 = 4 */
    cout<<(19 << 1)<< endl;/* 19*2 = 38 */
    cout<<(19 << 2)<< endl;/* 19*2*2 = 76 */

    return 0;
}