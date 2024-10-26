#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;

int main(){
    // union of arary--------->
    // int arr[] = {1,2,3,4,5};
    // int n = sizeof(arr)/sizeof(int);
    // int brr[] = {6,7,8,9};
    // int m = sizeof(brr)/sizeof(int);
    // vector<int> ans;
    // for (int i = 0; i < n; i++)
    // {
    //     ans.push_back(arr[i]);
    // }
    // for (int i = 0; i < m; i++)
    // {
    //     ans.push_back(brr[i]);
    // }

    // cout<<"printint all element "<<endl;
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout<<ans[i]<<" ";
    // }
    
    // int arr[] = {3,3,4,5,6};
    // int n = sizeof(arr)/sizeof(int);
    // int brr[] = {3,3,4,8,9};
    // int m = sizeof(brr)/sizeof(int);

    // vector<int> ans;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         if(arr[i] == brr[j]){
    //             // mark
    //             ans.push_back(arr[i]);
    //             arr[i] = -1;
    //         }
    //     }
        
    // }
    // cout<<"printing intersection of array "<<endl;
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
//     for(auto value : ans){
//         cout<<value<<" "; 
//     }


// vector<int> arr{10,20,30,40,50};

// for (int i = 0; i < arr.size(); i++)
// {
//     for (int j = i+1; j < arr.size(); j++)
//     {
//         cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
//     }
    
// }

vector<vector<int> > arr(5,vector<int> (5,-8));

cout<<arr[2][3]<<endl;

for (int i = 0; i < arr.size(); i++)
{
    for (int j = 0; j < arr[0].size(); j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

 

    return 0;
}
