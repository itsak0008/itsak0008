#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v{1,2,3,3,3,3,4,4,4,4,4,5,6};
    int target = 4;
    auto ans = lower_bound(v.begin(),v.end(),target);
    auto ans2 = upper_bound(v.begin(),v.end(),target);
    cout<<"first occurence of target is :"<<endl;
    cout<<"ans is "<<ans - v.begin() << endl;
    cout<<"last occurence of target is :"<<endl;
    cout<<"ans is "<<ans2 - v.begin() << endl;
    return 0;
}