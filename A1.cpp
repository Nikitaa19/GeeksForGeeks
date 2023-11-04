//Time & Space Complexity

//Arrays
// #include <iostream>
// using namespace std;
//int main(){
    //array creation
    // int arr[101];
    // char ch[102];
    // bool flags[223];
    // long num[900];
    // short snum[1000];
    // cout<<"Array created successfully";

    // int a=5;
    // cout<<"Address of a: "<<&a<<endl;
    // cout<<"Size of a: "<<sizeof(a)<<endl;
    // int arr[10];
    // //dono mei same output print hoga &->iske saath bhi iske bina bhi
    // cout<<"Base address of arr: "<<&arr<<endl;
    // cout<<"Base address of arr: "<<arr<<endl;
    // cout<<"Size of arr: "<<sizeof(arr)<<endl;  

    //Array Initialization
    // int arr[]={2,3,4,56,6};
    // int brr[5]={1,2,3,4,5};
    // int crr[5]={2,3};
    // //error ayega iss case mei kyuki size kam hai aur elements zyada hai
    // int drr[2]={1,2,3,44,5};

     //array indexing
    //  int arr[5]={5,8,9,12,13};
    //  cout<<arr[0]<<endl;
    //  cout<<arr[1]<<endl;
    //  cout<<arr[2]<<endl;
    //  cout<<arr[3]<<endl;
    //  cout<<arr[4]<<endl;

    // int arr[5]={5,8,9,12,13};
    // int n=5;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    //Taking input in an array
    // int arr[5];
    // int n=5;
    // for(int i=0;i<n;i++){
    //     cout<<"Enter the value for index "<<i<<" ";
    //     cin>>arr[i];
    //     cout<<endl;
    // }
    //printing an array
    // cout<<"Printing the array "<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    //Problem
    //creating array
    // int arr[10];
    // //input
    // int n=10;
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // cout<<"Printing after taking input"<<endl;
    // //print
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // //double-up
    // for(int i=0;i<n;i++){
    // arr[i]=2*arr[i];
    // }
    // cout<<"Printing after taking doubles"<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" "; 
    // }

    //Problem
    // int arr[5];
    // //input
    // int n=5;
    // cout<<"Enter the input: "<<endl;
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // //calculate sum
    // int sum=0;
    // for(int i=0;i<n;i++){
    //     sum=sum+arr[i];
    // }
    // cout<<"Printing sum: "<<sum<<endl;

    //Linear Search
    // int arr[5]={2,4,6,8,10};
    // int target=14;
    // int n=5;
    // bool flag=0;
    // //0->not found
    // //1->found
    // for(int i=0;i<n;i++){
    //     if(arr[i]==target){
    //         //found 
    //         flag=1;
    //         break;
    //     }
    // }
    // if(flag==1){
    //     cout<<"Target found";
    // }
    // else{
    //     cout<<"Target not found"<<endl;
    // }

    //Arrays & Functions
    // void printArray(int arr[], int size){
    //     for(int i=0;i<size;i++){
    //         cout<<arr[i]<<" ";
    //     }
    //     cout<<endl;
    // }

    // //linear search
    // //present->true
    // //absent->false
    // bool linearsearch(int arr[], int size, int target){
    //     for(int i=0;i<size;i++){
    //         if(arr[i]==target){
    //             //found
    //             return true;
    //         }
    //     }
    //     //not found
    //     return false;
    // }
    // int main(){
    //     int arr[5]={2,4,6,8,10};
    //     int size=5;
    //     int target=10;
    //     bool ans=linearsearch(arr, size, target);
    //     if(ans==1){
    //         cout<<"Target found"<<endl;
    //     }
    //     else{
    //         cout<<"Target not found"<<endl;
    //     }

        //function call
        // printArray(arr, size);

        //count 0's and 1's in an array
        // void countZeroOne(int arr[], int size){
        //     int zeroCount=0;
        //     int oneCount=0;
        //     for(int i=0;i<size;i++){
        //         if(arr[i]==0){
        //             zeroCount++;
        //         }
        //         if(arr[i]==1){
        //             oneCount++;
        //         }
        //     }
        //     cout<<"Zero Count: "<<zeroCount<<endl;
        //     cout<<"One Count: "<<oneCount<<endl;
        // }
        // int main(){
        // int arr[]={0,0,0,1,1,0,1,0,1,0,1,0,1,1,1};
        // int size=15;
        // countZeroOne(arr, size);

        //min. no. in an array
        // #include <iostream>
        // #include <limits.h>
        // using namespace std;
        // int findMinimumInArray(int arr[], int size){
        //     //ans store variable
        //     int minAns=INT_MAX;
        //     for(int i=0;i<size;i++){
        //         if(arr[i]<minAns){
        //             minAns=arr[i];
        //         }
        //     }
        //     return minAns;
        // }
        // int main(){
        //     int arr[]={10,8,31,4,-3,1,51};
        //     int size=7;
        //     int minimum=findMinimumInArray(arr, size);
        //     cout<<"Minimum number is: "<<minimum<<endl;

            // cout<<INT_MIN<<endl;
            // cout<<INT_MAX<<endl;

//Reverse an Array
//using while loop
// void reverseArray(int arr[], int size){
//     int left=0;
//     int right=size-1;
//     while(left<=right){
//         swap(arr[left], arr[right]);
//         left++;
//         right--;
//     }
//     //printing the array
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[]={10,20,30,40,50,60};
//     int size=6;
//     reverseArray(arr, size);

//using for loop
// void reverseArray(int arr[], int size){
//     for(int left=0,right=size-1;left<=right;left++,right--){
//         swap(arr[left], arr[right]);
//     }
//    //printing the array
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[]={10,20,30,40,50,60};
//     int size=6;
//     reverseArray(arr, size);
 
 //extreme print in an array
 //for even case
//  void extremePrint(int arr[], int size){
//     int left=0;
//     int right=size-1;
//     while(left<=right){
//     cout<<arr[left]<<endl;
//     cout<<arr[right]<<endl;
//     left++;
//     right--;
//     }
// }
//  int main(){
//     int arr[]={10,20,30,40,50,60};
//     int size=6;
//     extremePrint(arr, size);

//for odd case, this will work correctly for even case also
//  void extremePrint(int arr[], int size){
//     int left=0;
//     int right=size-1;
//     while(left<=right){
//         if(left==right){
//             cout<<arr[left]<<endl;
//         }
//         else{
//             cout<<arr[left]<<endl;
//             cout<<arr[right]<<endl;
//         }
//     left++;
//     right--;
//     }
// }
//  int main(){
//     int arr[]={10,20,30,40,50};
//     int size=5;
//     extremePrint(arr, size);
//     return 0;
// }

////FUNCTION CALL BY VALUE & BY REFERENCE
#include<iostream>
using namespace std;
// int main(){
//     int n=5;
//     int &k=n;
//     int &c=n;
//     cout<<"n: "<<n<<endl;
//     cout<<"k: "<<k<<endl;
//     cout<<"c: "<<c<<endl;

//     k++;

//     cout<<"n: "<<n<<endl;
//     cout<<"k: "<<k<<endl;
//     cout<<"c: "<<c<<endl;

//CALL BY VALUE
// int incrementBy1(int n){
//     n=n+1;
//     return n;
// }
// int main(){
//     int n;
//     cin>>n;
//     n=incrementBy1(n);
//     cout<<"n: "<<n<<endl;

//CALL BY REFERENCE
// void incrementBy1(int &n){
//     n=n+1;
// }
// int main(){
//     int n;
//     cin>>n;
//     incrementBy1(n);
//     cout<<"n: "<<n<<endl;

void incrementBy1(int &k){
    // k=k+1; 
    k=k*109;
}
int main(){
    int n;
    cin>>n;
    incrementBy1(n);
    cout<<"n: "<<n<<endl;

    return 0;
}

 