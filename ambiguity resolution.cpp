#include<iostream>
using namespace std;

class base1{
    public:
    void greet(){
        cout<<"how are you !"<<endl;
    }
};
class base2{
    public:
    void greet(){
        cout<<"kaise ho !"<<endl;
    }
};
class drived : public base1, public base2{
    public:
    void greet(){
       // base1 :: greet();
        base2 :: greet();
    }
};
int main(){
       drived d;
       d.greet();
    return 0;
}