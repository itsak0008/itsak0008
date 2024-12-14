#include<iostream>
#include<vector>
#include<limits.h>
#include <algorithm>
using namespace std;

// int fact(int n){
//   int factorial = 1;
//   for (int i = n; i >= 1 ; i--)
//   {
//     factorial = factorial * i;
//   }
//   return factorial;
// }
// int main(){
//   int n;
//   cout<<"enter the value of n :";
//   cin>>n;
//   int result = fact(n);
//   cout<<result;
//   return 0;
// }

// bool prime(int n){
//   if(n<=1){
//     return false;
//   }
//   for (int i = 2; i < n; i++)
//   {
//     if (n%i==0)
//     {
//       return false;
//     }
    
//   }
//   return true;
  
// }
// int main(){
//   int n;
//   cout<<"enter the value of n :";
//   cin>>n;
//   bool result = prime(n);
//   if(result){
//     cout<<"prime number";
//   }else{
//     cout<<"not prime number";
//   }
  
//   return 0;
// }

// int main(){
  
//   int n;
//   cout<<"enter the value of n :";
//   cin>>n;
//   for (int i = 1; i <= n ; i++)
//   {
//     if(i%2==0){
//       cout<<i<<endl;
//     }
//   }
  
// return 0;
// }
// int main(){
//   char a = 1024;
//   cout<<sizeof(a);
//   cout<<a;
//   return 0;
// }
// int main(){
//   int row , col;
//   cout<<"enter row "<<endl;
//   cin>>row;
//   cout<<"enter col "<<endl;
//   cin>>col;


//   for (int i = 0; i < row; i++)
//   {
//     if(i==0 || i==row-1 ){
//     for (int j = 0; j < col; j++)
//     { 
//       cout<<"* ";
//     }
//     }else{
//       cout<<"* ";
//       for (int k = 0; k < col-2; k++)
//       {
//         cout<<"  ";
//       }
//       cout<<"* ";

      
//     }
//     cout<<endl;
    
//   }
//   return 0;
// }
// int main(){
//   int n;
//   cout<<"enter the value of n :";
//   cin>>n;
//  for (int  i = 0; i < n; i++)
//  {
//   for (int j = 1; j < n - i; j++)
//   {
//     cout<<"  ";
//   }
//   for ( int k = 0; k < i+1; k++)
//   {
//   cout<<"* ";
//   }
  
//   cout<<endl;
  
//  }
 
  
//   return 0;
// }
// int main(){
//   int count;
//   cin>>count;

//   for (int i = 0; i < count; i++)
//   {
//     for (int  j = 0; j < count; j++)
//     {
//       if (i==0 || j==0 || j==count-i-1)
//       {
//         cout<<"* ";
//       }else{
//         cout<<"  ";
//       }

      
//     }
//     cout<<endl;
    
//   }
//   return 0;
// }
// int main(){
//   int n;
//   cin>>n;

//   for (int i = 0; i < n; i++)
//   {
//     int k = 0;
//     for (int  j = 0; j < (n*2)-1; j++)
//     {
//       if (j<n-i-1)
//       {
//         cout<<"  ";
//       }else if(k<2*i+1){
        
//         cout<<"* ";
//         k++;
//       }else{
//         cout<<"  ";
//       }
//     }
//     cout<<endl;
    
//   }
//   return 0;
// }

// int main(){
//   bool a = false;
//   bool b = false;
//   cout<<(~a);
//   return 0;
// }

// int max(int a , int b , int c){
//   if(a > b && b > c){
//     return a;
//   }else if(b > c && c > a){
//     return b;
//   }else{
//     return c;
//   }
// }


// main(){
//   int a , b , c;
//   cin>> a >> b >> c ;

//   int result = max(a,b,c);
//   cout<<"gretest value is : "<<result;
//     return 0;
// }

// void grade(int n){
//   if (n>90)
//   {
//     cout<<"A-grade";
//   }else if(n>80){
//     cout<<"B-garde";
//   }else if(n>70){
//     cout<<"C-grade";
//   }else if(n>60){
//     cout<<"D-grade";
//   }else{
//     cout<<"E-grade";
//   }
  
// }

// int main(){
//   int p;
//   cout<<"enter your marks : ";
//   cin>>p;

//   grade(p);
// }

// #include<iostream>
// using namespace std;

// int main(){
//   int n;
//   cout<<"Enter the number of row : ";
//   cin>>n;
 
//  for (int row = 0; row < n; row++)
//  {
//   for (int col = 0; col < n-row; col++)
//   {
//     cout<<" ";
//   }
//   for (int col = 0; col < row + 1; col++)
//   {
//     cout<<"* ";
//   }
//   cout<<endl;
  
//  }
 
//   return 0;
// }
// #include<iostream>
// using namespace std;

// int main(){
//   int n;
//   cout<<"Enter the number of row : ";
//   cin>>n;
 
//  for (int row = 0; row < n; row++)
//  {
//   for (int col = 0; col < row; col++)
//   {
//     cout<<" ";
//   }
//   for (int col = 0; col < n - row; col++)
//   {
//     cout<<"* ";
//   }
//   cout<<endl;
  
//  }
 
//   return 0;
// }
// #include<iostream>
// using namespace std;

// int main(){
//   int n;
//   cout<<"Enter the number of row : ";
//   cin>>n;
 
//  for (int row = 0; row < n; row++)
//  {
//   for (int col = 0; col < n - row -1; col++)
//   {
//     cout<<" ";
//   }
//   if(row == 0 || row == 1){
//        for (int j = 0; j <= row; j++)
//        {
//        cout<<"* ";
//        }
      
//   }else{
//     cout<<"* ";
//     for (int i = 0; i < row - 1; i++)
//     {
//       cout<<"  ";
//     }
//   cout<<"* ";
//   }
//   cout<<endl;

//  }
// // 2nd loop
//   for (int row = 0; row < n; row++)
//   {
//     for (int col = 0; col < row ; col++)
//     {
//       cout<<" ";
//     }
//     if(row == n || row == n-1){
//       for (int j = 0; j <= n-row-1; j++)
//        {
//        cout<<"* ";
//        }
//     }else{
//       cout<<"* ";
//       for (int i = 0; i < n - row - 2; i++)
//       {
//         cout<<"  ";
//       }
//       cout<<"* ";
      
//     }
//    cout<<endl;
    
//   }
//   return 0;
// }

// #include<iostream>
// using namespace std;

// void take_array(int num){
//     int arr[100];
//    for (int i = 0; i < num; i++)
//     {
//         int n;
//         cout<<"enter the element of array : ";
//         cin>>arr[i]<<endl;
//     }
// }
// void print_array(int num){
//     int arr[100];
//    for (int i = 0; i < num; i++)
//     {
//         cout<<arr[i] * 2<<endl;
//     }
// }


// int main(){
//     int num;
//     cout<<"enter the number of size : ";
//     cin>>num;
//     take_array();
//     print_array();
//     return 0;
// }
// #include<iostream>
// #include<limits.h>
// using namespace std;

// void find_max(int arr[],int n){
//     int maxi = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i] > maxi){
//             maxi = arr[i];
//         }
//     }
//     cout<<"maxium number is : " <<maxi;
// }
// void tprint(int arr[],int n){
//     int start = 0;
//     int end = n-1;
//    while (true){
//     if(start == end){
//         cout<<arr[start];
//     break;
//    }
//     if(start < end){
//     cout<<arr[start]<<" ";
//     cout<<arr[end]<<" ";
//     start++;
//     end--;
//    }
//    }
     
// }
// int main(){
    // int arr[100];

    // cout<<"enter the value of ench array : "<<endl;

    // for (int i = 0; i < 10; i++)
    // {
    //     cin>>arr[i];
    // }
    // cout<<"value of array : ";
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<arr[i]*2<<"  ";
    // }
    // bool arr[5] = {1,2,3,4,5};
    // // for (int i = 0; i < 5; i++)
    // // {
    // //     arr[i] = 1;
    // // }
    // memset(arr , true , sizeof(arr));
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
// int arr [] = {10,20,30,40,50,60,70,80};
// int n = sizeof(arr)/sizeof(int);

//    tprint(arr,n);
//     return 0;
// }


    // A retail company mode to sort a large select of customer orders by order ID to optimize there order processing system the database is sorted
    
// void Merge(vector<int>& A, int low, int mid, int high) {
//     int i = low;
//     int j = mid + 1;
//     int k = low;
//     vector<int> B(high + 1);

//     // Merging the two halves into B
//     while (i <= mid && j <= high) {
//         if (A[i] < A[j]) {
//             B[k++] = A[i++];
//         } else {
//             B[k++] = A[j++];
//         }
//     }


//     // Copy remaining elements from the left half
//     while (i <= mid) {
//         B[k++] = A[i++];
//     }

//     // Copy remaining elements from the right half
//     while (j <= high) {
//         B[k++] = A[j++];
//     }

//     // Copy merged elements back to the original array
//     for (int l = low; l <= high; l++) {
//         A[l] = B[l];
//     }
// }

// void RecursiveMergeSort(vector<int>& A, int low, int high) {
//     if (low < high) {
//         int mid = low + (high - low) / 2;
//         RecursiveMergeSort(A, low, mid);        // Sort the first half
//         RecursiveMergeSort(A, mid + 1, high);   // Sort the second half
//         Merge(A, low, mid, high);               // Merge the two halves
//     }
// }



// int main() {
//     int n;
//     cout << "Enter size of data set: ";
//     cin >> n;

//     vector<int> data_set(n);
//     for (int i = 0; i < n; i++) {
//         cout << "Data for index " << i << " : ";
//         cin >> data_set[i];
//     }

//     RecursiveMergeSort(data_set, 0, n - 1);

//     cout << "Sorted data: ";
//     for (int i = 0; i < n; i++) {
//         cout << data_set[i] << " ";
//     }
//     cout <<endl;

//   return 0;
// }

// void Merge(vector<int>& A, int low, int mid, int high) {
//     int i = low, j = mid + 1;
//     vector<int> B(high - low + 1);
//     int k = 0;

//     // Merge the two halves into B
//     while (i <= mid && j <= high) {
//         B[k++] = (A[i] < A[j]) ? A[i++] : A[j++];
//     }

//     // Copy remaining elements
//     while (i <= mid) B[k++] = A[i++];
//     while (j <= high) B[k++] = A[j++];

//     // Copy merged elements back to the original array
//     for (int m = 0; m < k; ++m) {
//         A[low + m] = B[m];
//     }
// }

// void MergeSort(vector<int>& A, int low, int high) {
//     if (low < high) {
//         int mid = low + (high - low) / 2;
//         MergeSort(A, low, mid);
//         MergeSort(A, mid + 1, high);
//         Merge(A, low, mid, high);
//     }
// }

// int main() {

//     int n;
//     cout << "Enter size of data set: ";
//     cin >> n;

//     vector<int> data_set(n);
//     cout << "Enter the data: ";
//     for (int i = 0; i < n; ++i) {
//         cin >> data_set[i];
//     }

//     MergeSort(data_set, 0, n - 1);

//     cout << "Sorted data: ";
//     for (const auto& num : data_set) {
//         cout << num << " ";
//     }
//     cout << endl;

//     return 0;
// }
void Merge(int A[], int low, int mid, int high) {
    int i = low, j = mid + 1, k = low;
    vector<int> B(high + 1);

    while (i <= mid && j <= high) {
        B[k++] = (A[i] < A[j]) ? A[i++] : A[j++];
    }
    while (i <= mid) B[k++] = A[i++];
    while (j <= high) B[k++] = A[j++];

    for (int l = low; l <= high; l++) A[l] = B[l];
}

void MergeSort(int A[], int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;
        MergeSort(A, low, mid);
        MergeSort(A, mid + 1, high);
        Merge(A, low, mid, high);
    }
}

int main() {
    int n;
    cout << "Enter size of data set: ";
    cin >> n;
    int data_set[n];

    for (int i = 0; i < n; i++) {
        cout<<"costumer Id is "<<i+1<<" : ";
        cin >>data_set[i];
    }
MergeSort(data_set, 0, n - 1);
        cout<<"Sort the customer Id : ";
    for (int i = 0; i < n; i++){
         cout << data_set[i] << " ";
    }
    cout << endl;
    
   return 0;
}

//     vector<int> arr{0,1,0,1,1,0,1,0,1,1};
//     vector<int> ans;
//     vector<int> bns;

//     for (int i = 0; i < arr.size(); i++)
//     {
//         if(arr[i]==0){
//             ans.push_back(arr[i]);
//         }else if(arr[i]==1){
//             bns.push_back(arr[i]);
//         }
//     }
    
// for (int j = 0; j < bns.size(); j++)
// {
//     ans.push_back(bns[j]);
// }
// for(auto value : ans){
//     cout<<value<<" ";
// }
// int arr[3][3] = {};
//                 for (int i = 0; i < 3; i++)
//                 {
//                     for (int j = 0; j < 3; j++)
//                     {
//                         cout<<"enter element in index "<<"["<<i<<"]"<<"["<<j<<"]"<<" : ";
//                         cin>>arr[i][j];
//                     }
                    
//                 }
//                 cout<<"printing the 2d array as well as addition"<<endl;
//                 int ans = 0;
//                 for (int i = 0; i < 3; i++)
//                 {
//                     for (int j = 0; j < 3; j++)
//                     {
//                         ans = ans + arr[i][j];
//                         cout<<arr[i][j]<<" ";
//                     }
//                     cout<<" -> "<<ans;
//                     cout<<endl;
//                     ans = 0;
//                 }
//             vector<vector<int> > arr;

//             vector<int> a{1,2,3};
//             vector<int> b{4,5,6,11,12};
//             vector<int> c{7,8};

//             arr.push_back(a);
//             arr.push_back(b);
//             arr.push_back(c);

//             for (int i = 0; i < arr.size(); i++)
//             {
//                 for (int j = 0; j < arr[i].size() ; j++)
//                 {
//                     cout<<arr[i][j]<<" ";
//                 }
//                 cout<<endl;
//             }
            

// return 0;
// }


    
    // int start = 0;
    // int i = 0;
    // int end = arr.size()-1;
    // while(i<=end){
    //     if(arr[i] < 0 ){
    //         swap(arr[start],arr[i]);
    //         start++;
    //         i++;
    //     }else {
    //         swap(arr[i],arr[end]);
    //         end--;
    //     }
    // }
    //     for (int i = 0; i < arr.size(); i++)
    //     {
    //         cout<<arr[i]<<" ";
    //     }
        // sort(arr.begin(),arr.end());
        // for (int i = 0; i < arr.size(); i++)
        // {
        //     cout<<arr[i]<<" ";
        // }
        // vector<int> arr{4,3,2,3,5};
        // sort(arr.begin(),arr.end());
        // for (int i = 0; i < arr.size(); i++)
        // {
        //     if (arr[i]==arr[i+1])
        //     {
        //         arr[i+1] = arr[i+1] - 1;
        //     }
            

        // }
        // sort(arr.begin(),arr.end());

        // for (int i = 0; i < arr.size(); i++)
        // {
        //     cout<<arr[i]<<" ";
        // }
        

//     int binarynumber(vector<int> v , int target){
//         int start = 0;
//         int end = v.size() - 1;
//         int ans = 0;
        
//         int mid = start + (end - start)/2;
//        while (start <= end)
//        {
//           if (v[mid] == target)
//           {
//             ans = mid;
//             start = mid + 1;
//             // end = mid - 1;
//           }else if(target<v[mid]){
//             end = mid - 1;
//           }else{
//             start = mid + 1;
//           }
//           mid = start + (end - start)/2;
        
//        }
       
//         return ans;
//     }

// int main(){
//     vector<int> v{1,3,3,3,3,3,3,4,4,4,4,5,6};
//     int target = 3;

//     int findnumber  = binarynumber(v , target);

//     cout<<"Ans is fount at index "<<findnumber<<endl;
//     return 0;
// }