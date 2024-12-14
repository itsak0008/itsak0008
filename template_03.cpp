#include<iostream>
#include<vector>
using namespace std;

template <class T>
void display(vector<T> &v){
    cout<<""
    
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}
int main(){
    vector<int> vec1;
    vector<char> vec2(4);


    // int element,size;
    // cout<<"enter your size of vector ";
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"enter an element to add to this vector ";
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    // // vec1.pop_back();
    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter,51);
    // display(vec1);
    
    return 0;
}