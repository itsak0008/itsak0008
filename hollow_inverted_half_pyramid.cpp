#include<iostream>
using namespace std;

int main(){
  int count;
  cout<<"number of pattern :"<<endl;
  cin>>count;

  for (int i = 0; i < count; i++)
  {
    for (int  j = 0; j < count; j++)
    {
      if (i==0 || j==0 || j==count-i-1)
      {
        cout<<"* ";
      }else{
        cout<<"  ";
      }
      
    }
    cout<<endl;
    
  }
  return 0;
}