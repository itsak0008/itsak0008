#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"enter number of pyramid want to create : ";
  cin>>n;

  for (int i = 0; i < n; i++)
  {
    int k = 0;
    for (int  j = 0; j < (n*2)-1; j++)
    {
      if (j<n-i-1)
      {
        cout<<"  ";
      }else if(k<2*i+1){
        
        cout<<"* ";
        k++;
      }else{
        cout<<"  ";
      }
    }
    cout<<endl;
    
  }
  return 0;
}