// #include<iostream>
// using namespace std;

//find unique element->each element occurs twice expect one
// int getUnique(int arr[], int n){
//     int ans=0;
//     for(int i=0;i<n;i++){
//         ans=ans^arr[i];
//     }
//     return ans;
// }
// int main(){
//     int arr[]={2,10,11,10,2,13,15,13,15};
//     int n=9;
//     int finalAns=getUnique(arr, n);
//     cout<<"Final Answer is: "<<finalAns<<endl;
//     return 0;
// } 

//print all pairs
// int main(){
//     int arr[]={10,20,30};
//     int n=3;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//         // for(int j=0;j<n;j++){
//             cout<<arr[i]<<", "<<arr[j]<<endl;
//         }
//     }
//     return 0;
// }

//print all triplets
// int main(){
//     int arr[]={1,2,3,4};
//     int n=4;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             for(int k=0;k<n;k++){
//                 cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
//             }
//         }
//     }
//     return 0;
// }

//sort 0's and 1's
// void sortZeroOne(int arr[], int n){
//     int zeroCount=0;
//     int oneCount=0;
//     //count 0 and 1
//     for(int i=0;i<n;i++){
//         if(arr[i]==0)
//         zeroCount++;
//         if(arr[i]==1)
//         oneCount++;
//     }
    //place all 0's first
    // int i;
    // for(i=0;i<zeroCount;i++){
    //     arr[i]=0;
    // }
    // for(int j=i;j<n;j++){
    //     arr[j]=1;
    // }

    //easy way
//     int index=0;
//     while(zeroCount--){
//         arr[index]=0;
//         index++;
//     }
//     while(oneCount--){
//         arr[index]=1;
//         index++;
//     }
// }
// int main(){
//     int arr[]={0,1,0,1,0,1,1,1,1,0,0,0,0,0};
//     int n=14;
//     sortZeroOne(arr, n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//shift arrays element by 1
//iss code mei right shift kiya hai
// void shiftArray(int arr[], int n){
//     int temp=arr[n-1];
//     //shift arr[i]=arr[i-1]
//     for(int i=n-1;i>=1;i--){
//         arr[i]=arr[i-1];
//     }
//     //copy temp into 0th index
//     arr[0]=temp;
// }
// int main(){
//     int arr[]={10,20,30,40,50,60};
//     int n=6;
//     shiftArray(arr, n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//Vector STL in C++

// void fun(int a[], int n){
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<endl;
//     }
// }
// int main(){
//     //static memory allocation
//     int arr[5]={1,2,3,4,5};
//     fun(arr, 5);
//     return 0;
// }

// void fun(int a[], int n){  
//     cout<<"Array elements are:"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<endl;
//     }
// }
// int main(){
//     //dynamic memory allocation
//     int n;
//     cin>>n;
//     //by default each element would be 0 or garbage
//     int *arr=new int[n];
//     //taking n elements input and inserting in array
//     for(int i=0;i<n;i++){
//         int data;
//         cin>>data;
//         arr[i]=data;
//     }
//     fun(arr, n);
//     return 0;
// }

//kind of bad practice
// void fun(int a[], int n){  
//     cout<<"Array elements are:"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<endl;
//     }
// }
// int main(){
//     //dynamic memory allocation
//     int n;
//     cin>>n;
//     //by default each element would be 0 or garbage
//     int *arr=new int[n];
//     //taking n elements input and inserting in array
//     for(int i=0;i<n;i++){
//         int data;
//         cin>>data;
//         arr[i]=data;
//     } //0 index to 4 index
//     //try to insert more items
//     //5 index to 14 index
//     for(int i=0;i<10;i++){
//         arr[n+i]=80;
//     }
//     fun(arr, n);
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;
int main(){
    //in vector don't tell size of vector
    //just keep inserting, I will manage the allocations
    return 0;
}