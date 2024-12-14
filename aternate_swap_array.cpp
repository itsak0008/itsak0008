#include<iostream>
using namespace std;

void reverse(int arr[],int size){
  int start = 0;
  int end = 1;
  while(arr[end]<size){
      swap(arr[start],arr[end]);
      start=start+2;
      end+=2;
  }
}
void print(int arr[],int size){
  for (int i = 0; i < size; i++)
  {
      cout<<arr[i]<<" ";
  }
  cout<<endl;
}


int main(){
  int arr[9]={1,2,3,4,5,6,7,8,9};
  
  reverse(arr,9);
  print(arr,9);
  
  return 0;
}
