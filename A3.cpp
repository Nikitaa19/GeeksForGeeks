// #include<iostream>
// using namespace std;
// int main(){
    //create a 2D-Array
    // int arr[3][3];

    //initilization
    // int arr[3][4]={{1,2,3,4}, {6,7,8,9}, {45,65,76,66}};
    // int brr[]={1,2,3,4};
    // int crr[][4]={{1,2,3,4}, {6,7,8,9}, {45,65,76,66}};
    // //sirf rows define krne se ya dono na define krne se nhi chlega error ayega, column ka size btana pdega
    // int drr[3][]={{1,2,3,4}, {6,7,8,9}, {45,65,76,66}};
    // int err[][]={{1,2,3,4}, {6,7,8,9}, {45,65,76,66}};

    //print
    // void printArray(int arr[][4], int row, int col){
    //     for(int i=0;i<row;i++){
    //         for(int j=0;j<col;j++){
    //             cout<<arr[i][j]<<" ";
    //         }
    //         cout<<endl;
    //     }
    // }
    // //column wise print
    // void colWisePrint(int arr[][4], int row, int col){
    //     for(int i=0;i<col;i++){
    //         for(int j=0;j<row;j++){
    //             cout<<arr[j][i]<<" ";
    //         }
    //         cout<<endl;
    //     }
    // }
    // int main(){
    // int arr[3][4]={{1,2,3,4}, {6,7,8,9}, {45,65,76,66}};
    // int row=3;
    // int col=4;
    // printArray(arr, row, col);
    // colWisePrint(arr, row, col);

    //input
    //row wise input, column wise ke liye arr[j][i] hojyega
    // int arr[3][3];
    // int row=3;
    // int col=3;
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         cout<<"Enter the input for row index: "<<i<<" column index: "<<j<<endl;
    //         cin>>arr[i][j];
    //     }
    // }

    //Searching
    // bool findTarget(int arr[][4], int row, int col, int target){
    //     for(int i=0;i<row;i++){
    //         for(int j=0;j<col;j++){
    //             if(arr[i][j]==target){
    //                 //if found, reurn true
    //                 return true;
    //             }
    //         }
    //     }
    //     //iss line pe tabhi aa skte ho, jab saare ke saare elements check
    //     //ho chuke honge and target nahi mila hoga, return kardo false
    //     return false;
    // }
    // int main(){
    //     int arr[3][4]={{1,2,3,4}, {6,7,8,9}, {45,65,76,66}};
    //     int row=3;
    //     int col=4;
    //     int target=66;
    //     cout<<"Found or Not: "<<findTarget(arr, row, col, target)<<endl;

    //Max no. in an array
// #include<iostream>
// #include<limits.h>
// using namespace std;
// int findMax(int arr[][4], int row, int col){
//     int maxAns=INT_MIN;
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             if(arr[i][j]>maxAns){
//                 maxAns=arr[i][j];
//             }
//         }
//     }
//     return maxAns;
// }
// int main(){
//         int arr[3][4]={{1,2,3,4}, {6,7,8,9}, {45,65,76,66}};
//         int row=3;
//         int col=4;
//         cout<<"Printing the max no.: "<<findMax(arr, row, col)<<endl;

//Min no. in an array
// #include<iostream>
// #include<limits.h>
// using namespace std;
// int findMin(int arr[][4], int row, int col){
//     int minAns=INT_MAX;
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             if(arr[i][j]<minAns){
//                 minAns=arr[i][j];
//             }
//         }
//     }
//     return minAns;
// }
// int main(){
//         int arr[3][4]={{1,2,3,4}, {6,7,8,9}, {45,65,76,66}};
//         int row=3;
//         int col=4;
//         cout<<"Printing the min no.: "<<findMin(arr, row, col)<<endl;

//Row wise sum 
// void rowWiseSum(int arr[][4], int row, int col){
//     for(int i=0;i<row;i++){
//         int sum=0;
//         for(int j=0;j<col;j++){
//             sum=sum+arr[i][j];
//             }
//             cout<<sum<<endl;
//     }
// }
// int main(){
//     int arr[3][4]={{1,2,3,4}, {6,7,8,9}, {45,65,76,66}};
//     int row=3;
//     int col=4; 
//     rowWiseSum(arr, row, col);

//Transpose of a matrix
// void printArray(int arr[][4], int row, int col){
//         for(int i=0;i<row;i++){
//             for(int j=0;j<col;j++){
//                 cout<<arr[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//     }
// void transpose(int arr[][4], int row, int col){
//     for(int i=0;i<row;i++){
//         for(int j=i;j<col;j++){
//             swap(arr[i][j], arr[j][i]);
//         }
//     }
// }
// int main(){
//     int arr[4][4]={{1,2,3,4}, {6,7,8,9}, {45,65,76,66}, {34,75,99,98}};
//     int row=4;
//     int col=4;
//     cout<<endl<<"P rinting before transpose: "<<endl;
//     printArray(arr, row, col);
//     cout<<endl<<"Doing transpose: "<<endl;
//     transpose(arr, row, col);
//     cout<<endl<<"Printing after transpose: "<<endl;
//     printArray(arr, row, col);

//Vectors
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// int arr[5];
// vector<int> v(5);
// vector<int> v(5,-1);
// vector<int> v(5,101);

// vector<int> arr;
// vector<int> arr(5);
// vector<int> arr(5,101);

// cout<<"Size of vector: "<<v.size();
// cout<<endl<<"Printing vector: "<<endl;
// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
// }
// cout<<endl;

//insert
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr;


    return 0;
}