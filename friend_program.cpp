#include<iostream>
using namespace std;

class deposite{
    float final_amount;
    int initial_principal_bal;
    float rate;
    int time; 

    public:
    deposite(){};
    deposite(int p,float r,int t);
    void display();
};
deposite :: deposite(int p,float r,int t){
    initial_principal_bal = p;
    rate = r;
    time = t; 
    final_amount = initial_principal_bal;
    for(int i=0; i<t; i++){
        final_amount = final_amount* pow(1+rate,time);
    }
}
void deposite ::  display(){
    cout<<"principal amount = "<<initial_principal_bal<<endl
    <<"rate = "<<rate<<endl
    <<"time = "<<time<<endl;
    cout<<"final_amount is "<<final_amount;
}

int main(){
    deposite sd1, sd2, sd3;
    int p,t;
    float r;

    cout<<"enter number of p,r,t"<<endl;
    cin>>p>>r>>t;
    sd1 = deposite(p,r,t);
    sd1.display();
    return 0;
}