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

// #include<iostream>
// #include<vector>
// using namespace std;
// void print(vector<int>v){
//     //size batane ke liye
//     int size=v.size();
//     for(int i=0;i<size;i++){
//         cout<<v[i]<<endl;
//     }
// }
// int main(){
//     //in vector don't tell size of vector
//     //just keep inserting, I will manage the allocations
//     vector<int>v; //vector is a type of array
//     //insert
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     print(v);
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// void print(vector<int>v){
//     //size batane ke liye
//     int size=v.size();
//     for(int i=0;i<size;i++){
//         cout<<v[i]<<endl;
//     }
// }
// int main(){
//     //in vector don't tell size of vector
//     //just keep inserting, I will manage the allocations
//     vector<int>v; //vector is a type of array
//     while(1){
//         int d;
//         cin>>d;
//         v.push_back(d);
//         cout<<"Capacity: "<<v.capacity()<<" Size: "<<v.size()<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// void print(vector<int>v){
//     //size batane ke liye
//     int size=v.size();
//     for(int i=0;i<size;i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     //in vector don't tell size of vector
//     //just keep inserting, I will manage the allocations
//     vector<int>v; //vector is a type of array
//     //insert
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     print(v);
//     //pop->delete....jo ki last se hota hai
//     v.pop_back();
//     print(v);
//     v.pop_back();
//     print(v);
//     v.pop_back();
//     print(v);
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// void print(vector<int>v){
//     cout<<"Printing vector: "<<endl;
//     int size=v.size();
//     for(int i=0;i<size;i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// } 
// int main(){
//     //in vector don't tell size of vector
//     //just keep inserting, I will manage the allocations
//     vector<int>v; //vector is a type of array
//     //insert
//    int n;
//    cin>>n;
//    for(int i=0;i<n;i++){
//     int d;
//     cin>>d;
//     v.push_back(d);
//    }
//    print(v);
//    for(int i=0;i<10;i++){
//     v.push_back(80);
//    }
//    print(v);
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// void print(vector<int>v){
//     cout<<"Printing vector: "<<endl;
//     int size=v.size();
//     for(int i=0;i<size;i++){
//         //v.at->vector at, at->i th index pe jo hai woh print kardo
//         cout<<v.at(i);
//     }
//     cout<<endl;
// } 
// int main(){
//     //in vector don't tell size of vector
//     //just keep inserting, I will manage the allocations
//     vector<int>v; //vector is a type of array
//     //insert
//    int n;
//    cin>>n;
//    for(int i=0;i<n;i++){
//     int d;
//     cin>>d;
//     v.push_back(d);
//    }
//    print(v);
//    for(int i=0;i<10;i++){
//     v.push_back(80);
//    }
//    print(v);
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// void print(vector<int>v){
//     cout<<"Printing vector: "<<endl;
//     int size=v.size();
//     for(int i=0;i<size;i++){
//         //v.at->vector at, at->i th index pe jo hai woh print kardo
//         cout<<v.at(i)<<" ";
//     }
//     cout<<endl;
// } 
// int main(){
//     //in vector don't tell size of vector
//     //just keep inserting, I will manage the allocations
//     vector<int>v; //vector is a type of array
//     //insert
//    int n;
//    cin>>n;
//    for(int i=0;i<n;i++){
//     int d;
//     cin>>d;
//     v.push_back(d);
//    }
//    print(v);
//    //to clear the vector
//    v.clear();
//    v.push_back(50);
//    print(v);
//    v.pop_back();
//    print(v);
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// void print(vector<int>v){
//     cout<<"Printing vector: "<<endl;
//     int size=v.size();
//     for(int i=0;i<size;i++){
//         //v.at->vector at, at->i th index pe jo hai woh print kardo
//         cout<<v.at(i)<<" ";
//     }
//     cout<<endl;
// } 
// int main(){
//     //initilization
//     vector<int>arr; //default with no data, 0 size
//     vector<int>arr2(5, -1); //init with n size with specific data
//     // arr2.push_back(50);
//     // print(arr2);

//     // vector<int>arr3={1,2,3,4,5};
//     // arr3.pop_back();
//     // print(arr3);

//     vector<int>arr4{1,2,3,4,5};
//     // print(arr4);

//     //how to copy vector
//     vector<int>arr5={1,2,3,4,5};
//     vector<int>arr6(arr5);
//     print(arr6);
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// void print(vector<char>v){
//     cout<<"Printing vector: "<<endl;
//     int size=v.size();
//     for(int i=0;i<size;i++){
//         //v.at->vector at, at->i th index pe jo hai woh print kardo
//         cout<<v.at(i)<<" ";
//     }
//     cout<<endl;
// } 
// int main(){
//     vector<char>v;
//     v.push_back('a');
//     v.push_back('b');
//     v.push_back('c');
//     cout<<"Front element: "<<v[0]<<endl;
//     cout<<"Front element: "<<v.front()<<endl;
//     cout<<"End element: "<<v[v.size()-1]<<endl;
//     cout<<"End element: "<<v.back()<<endl;
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// void print(vector<int>v){
//     cout<<"Printing vector: "<<endl;
//     int size=v.size();
//     for(int i=0;i<size;i++){
//         //v.at->vector at, at->i th index pe jo hai woh print kardo
//         cout<<v.at(i)<<" ";
//     }
//     cout<<endl;
// } 
// int main(){
//     vector<int>v;
//     v.push_back(10);
//     v.push_back(20);
//     v.push_back(30);
//     v.push_back(40);
//     print(v);
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;
void print2(vector<int>v){
    cout<<"Printing vector method 2: "<<endl;
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
} 
int main(){
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    print2(v);
    return 0;
}