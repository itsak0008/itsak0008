#include<iostream>
using namespace std;

template <class T>
class harry{
    public:
    T data;
    harry(T a){
        data = a;
    }
    void display();
};

template <class T>
void harry<T>::display(){
        cout<<data;
    }
void func(int a){
    cout<<"i am first func()"<<a<<endl;
}
template <class T>
void func(T a){
    cout<<"i am templetised func()"<<a<<endl;
}
int main(){
    // harry<float> h(5.3);
    // harry<char> h('c');
    // harry<int> h(87);
    // cout<<h.data<<endl;
    // h.display();

    func(4);
    return 0;
}