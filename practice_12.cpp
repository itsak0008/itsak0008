// multtilevel inheritence
#include<iostream>
using namespace std;

class student{
    protected:
    int roll_number;
    public:
    void set_roll_number(int);
    void get_roll_number(void);
};
void student :: set_roll_number(int r ){
    roll_number = r;
    }
void student :: get_roll_number(){
    cout<<"the roll number is : "<<roll_number<<endl;
    }
class exam : public student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float,float);
        void get_marks(void);
};
void exam :: set_marks(float m1 ,float m2 ){
    maths =  m1;
    physics = m2;
}
void exam :: get_marks(){
    cout<<"this is marks of maths "<<maths<<endl;
    cout<<"this is marks of physics "<<physics<<endl;
}
class result : public exam{
    float percentage;
    public:
        void display(){
            get_roll_number();
            get_marks();
            cout<<"your pursentage is " << (maths + physics)/2 <<endl;
        }
};
int main(){
    result alok;
    alok.set_roll_number(13731);
    alok.set_marks(94.0,90.0);
    alok.display();
    return 0;
}