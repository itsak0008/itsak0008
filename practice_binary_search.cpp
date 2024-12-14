#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// int findsqar(vector<int> arr,int target){
// int start = 0;
//     int end = arr.size()-1;
//     int mid = start + (end-start)/2;
//     int ans = -1;
//     while (start<=end){
//         if(arr[mid]*arr[mid]==target){
//            return arr[mid];
//         }else if(arr[mid]*arr[mid]<target){
//             ans = arr[mid];
//             start = start+1;
//         }else{
//             end = end - 1;
//         }        
// mid = start + (end-start)/2;
//     }
// }

int main(){
    // vector<int> v{1,2,3,3,3,3,4,4,4,4,4,5,6};
    // int target = 4;
    // auto ans = lower_bound(v.begin(),v.end(),target);
    // auto ans2 = upper_bound(v.begin(),v.end(),target);
    // cout<<"first occurence of target is :"<<endl;
    // int s = ans - v.begin();
    // cout<<"ans is "<<s<< endl;
    // cout<<"last occurence of target is :"<<endl;
    // int r = ans2 - v.begin();
    // cout<<"ans is "<<r<< endl;
    // cout<<"number of occurence in vector :"<<endl;
    // int result = r-s;
    // cout<<"result is "<<result<<endl;




    // vector<int> arr{1,2,3,4,5,6,7,8,9};
    // int target = 25;
    // int ans = findsqar(arr,target);
    // cout<<"ans is "<<ans<<endl;

    
    // int arr[] = {1, 3, 3, 3, 4};
    // int n = sizeof(arr) / sizeof(int);

    // sort(arr, arr+n);
    
    // for (int i = 0; i < n; i++)
    // {
    //     if(arr[i]!=i+1){
    //         cout<<"missing element is : "<<i+1<<endl;
    //     }
    // }
    
    vector<int> arr{10,20,30,40,50};
    vector<int> brr{30,40,50,60,70};
    vector<int> crr{40,50,80,90,100};

    vector<int> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < brr.size(); j++)
        {
            for (int k = 0; k < crr.size(); k++)
            {

                if (arr[i]==brr[j] && brr[j]==crr[k])
                {
                    ans.push_back(arr[i]);
                }
                
            }
            
        }

    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    
    return 0;
}