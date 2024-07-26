#include<iostream>
using namespace std;

int main(){
    int a = 4;
    int b = 2;
    /*(and) opreators  
       a  b | a&b
       0  0 | 0
       0  1 | 0
       1  0 | 0
       1  1 | 1
      (or) opreators 
       a  b | a|b
       0  0 | 0
       0  1 | 1
       1  0 | 1
       1  1 | 1
      (not) opreator
          b | a|b
          1 | 0
          0 | 1
      (xor) opreator
       a  b | a|b
       0  0 | 0
       0  1 | 1
       1  0 | 1
       1  1 | 0
       */

    cout<<"a & b = "<<(a&b)<<endl;
    cout<<"a | b = "<<(a|b)<<endl;
    cout<<" ~a = "<<~a<<endl;
    cout<<"a ^ b = "<<(a^b)<<endl;

    cout<< (17>>1)<<endl;/*right shift 17/2 ans-8*/
    cout<< (17>>2)<<endl;/*right shift 17/2*2 ans-4*/
    cout<< (21<<2)<<endl;/*lift shift 21*2*2 ans-84*/
    cout<< (19<<1)<<endl;/*lift shift 19*2 ans-38*/

  return 0;
}