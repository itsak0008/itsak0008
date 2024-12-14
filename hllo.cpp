#include<iostream>
#include<cmath>
using namespace std;

class deposite{
    float final_amount;
    int initial_principal_bal;
    float rate;
    int time; 
    double cf;

    public:
    deposite(){};
    deposite(int p,float r,int t);
    void display();
};
deposite :: deposite(int p,float r,int t){
    initial_principal_bal = p;
    rate = r;
    time = t; 

        double A = p * ((pow((1 + r / 100), t)));
       int  interest =(p *t*r)/100;
       final_amount=interest+p;
      cf=p+A;

    }

void deposite ::  display(){
    cout<<"principal amount = "<<initial_principal_bal<<endl
    <<"rate = "<<rate<<endl
    <<"time = "<<time<<endl;
    cout<<"final_amount after simple interest is "<<final_amount<<endl;
    cout<<"final_amount after compound interest  is "<<cf;
}
int main(){
    deposite sd1 ;
    int p,t;
    float r;

    cout<<"enter number of p,r,t"<<endl;
    cin>>p>>r>>t;
    sd1 = deposite(p,r,t);
    sd1.display();
    return 0;
}