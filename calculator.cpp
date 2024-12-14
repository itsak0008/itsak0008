#include<iostream>
#include<cmath>
using namespace std;

class simplecalculator{
    protected:
    float data1;
    float data2;
    public:
        void set_sum(int(a),int (b)){
            data1 = a;
            data2 = b;
        }
        void get_sum(void);
        void set_sub(int(a),int(b)){
            data1 = a;
            data2 = b;
        }
        void get_sub(void);
        void set_prod(float a,float b){
            data1 = a;
            data2 = b;
        }
        void get_prod(void);
        void set_div(float a,float b){
            data1 = a;
            data2 = b;
        }
        void get_div(void);
};
void simplecalculator :: get_sum(){
    cout<<"enter the number 1 number is : "<< data1 <<endl;
    cout<<"enter the number 2 number is : "<< data2 <<endl;
    cout<<"sum of two digit number is : "<< data1 + data2 <<endl;
}
void simplecalculator :: get_sub(){
    cout<<"enter the number 1 number is : "<< data1 <<endl;
    cout<<"enter the number 2 number is : "<< data2 <<endl;
    cout<<"sum of two digit number is : "<< data1 - data2 <<endl;
}
void simplecalculator :: get_prod(){
    cout<<"enter the number 1 number is : "<< data1 <<endl;
    cout<<"enter the number 2 number is : "<< data2 <<endl;
    cout<<"sum of two digit number is : "<< data1 * data2 <<endl;
}
void simplecalculator :: get_div(){
    cout<<"enter the number 1 number is : "<< data1 <<endl;
    cout<<"enter the number 2 number is : "<< data2 <<endl;
    cout<<"sum of two digit number is : "<< data1 / data2 <<endl;
}
class scientificcalculator{
    protected:
    float data1;
    float data2;
    public:
        void set_square(int a){
            data1=a;
        }
        void get_square(void);
        void set_squareroot(int a){
            data1 = a;
        }
        void get_squareroot(void);
        void set_exponent(int a,int b){
            data1 = a;
            data2 = b;
        }
        void get_exponent(void);
        void set_area_of_circle(int r){
            data1 = r;
        }
        void get_area_of_circle(void);

};
void scientificcalculator :: get_square(){
    cout<<"enter any number : "<< data1 <<endl;
    cout<<"square of number is : "<<pow(data1,2)<<endl;
}
void scientificcalculator :: get_squareroot(){
    cout<<"enter any number : "<< data1 <<endl;
    cout<<"squareroot of number is : "<<pow(data1,0.5)<<endl;
}
void scientificcalculator :: get_exponent(){
    cout<<"enter basecase any number : "<< data1 <<endl;
    cout<<"enter uppercase any number : "<< data2 <<endl;
    cout<<"exponent of number is : "<<pow(data1,data2)<<endl;
}
void scientificcalculator :: get_area_of_circle(void){
    cout<<"area of a circle is : "<<3.14*data1*data1<<endl;
}
class calculator : public simplecalculator,public scientificcalculator {
    public:
        void display_sum(){
            get_sum();
        }
        void display_sub(){
            get_sub();
        }
        void display_prod(){
            get_prod();
        }
        void display_div(){
            get_div();
        }
        void display_square(){
            get_square();
        }
        void display_squareroot(){
            get_squareroot();
        }
        void display_exponent(){
            get_exponent();
        }
        void displaysum_area_of_circle(){
            get_area_of_circle();
        }
};


int main(){
    calculator cal;
    cal.set_sum(12,12);
    cal.display_sum();
    cout<<endl;
    cal.set_square(5);
    cal.display_square();
    cout<<endl;
    cal.set_squareroot(4);
    cal.display_squareroot();
    cout<<endl;
    cal.set_exponent(2,3);
    cal.display_exponent();
    cout<<endl;
    cal.set_sub(12,5);
    cal.display_sub();
    cout<<endl;
    cal.set_prod(5,6);
    cal.display_prod();
    cout<<endl;
    cal.set_div(6,2);
    cal.display_div();
    cout<<endl;
    return 0;
}