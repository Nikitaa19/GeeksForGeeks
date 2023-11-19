// Loops
#include<iostream>
using namespace std;
int main() {
    // for(int i=10;i<=12;i++){
    //     cout<<"Monica, my darlo"<<endl;
    // }

    // for(int i=1;i<=10;i++){
    //     cout<<i<<endl;
    // }

    // for(int i=1;i<10;i++){
    //     cout<<i<<endl;
    //     }

    // for(int i=2;i<10;i=i+2){
    //     cout<<i<<endl;
    //     }

    // for(int i=10;i>=0;i--){
    //     cout<<i<<endl;
    // }

    // for(int i=10;i>=0;i=i-3){
    //     cout<<i<<endl;
    // }

    // for(int i=0;i<5;i++){
    //     cout<<"A"<<" ";
    // }
    // cout<<endl;

    // for(int i=0;i<3;i++){
    //     cout<<endl<<"Outer Loop "<<i<<endl<<endl;
    //     for(int j=0;j<3;j++){
    //         cout<<"Inner Loop "<<j<<endl;
    //     }
    // }

    // for(int i=0;i<=10;i++){
    //     cout<<"Nikita"<<endl;
    // }

    //     for(int i=1;i<=10;i++){
    //     cout<<19*i<<endl;
    // }

        // for(int i=1 ;i<=100;i++){
        //     if(i%2==0){
        //         cout<<i<<endl;
        //     }
        // }

//Pattern Printing

//Square
//outer loop ->rows
// for(int i=0;i<4;i++){
//     //inner loop (print 4 stars)
//     for(int j=0;j<4;j++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }

//Rectangle
// for(int i=0;i<3;i++){
//     for(int j=0;j<5;j++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }

//Hollow Rectangle
// for(int i=0;i<5;i++){
//     for(int j=0;j<5;j++){
//         if(i==0 || i==4){
//             cout<<"* ";
//         }
//         else{
//             if(j==0 || j==4){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//     }
//     cout<<endl;
// }

// int ROWS=10;
// int COLS=7;
// for(int i=0;i<ROWS;i++){
//     for(int j=0;j<COLS;j++){
//         if(i==0 || i==ROWS-1){
//             cout<<"* ";
//         }
//         else{
//             if(j==0 || j==COLS-1){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//     }
//     cout<<endl;
// }

//Half Pyramid
// for(int i=0;i<5;i++){
//     for(int j=0;j<i+1;j++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }

// int n;
// cin>>n;
// for(int i=0;i<n;i++){
//     for(int j=0;j<i+1;j++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }

//Inverted Half Pyramid
// int n;
// cin>>n;
// for(int i=0;i<n;i++){
//     for(int j=0;j<n-i;j++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }

//Numeric Half Pyramid
// int n;
// cin>>n;
// for(int i=0;i<n;i++){
//     for(int j=0;j<i+1;j++){
//         cout<<j+1<<" ";
//     }
//     cout<<endl;
// }

//Inverted Numeric Half Pyramid
// int n;
// cin>>n;
// for(int i=0;i<n;i++){
//     for(int j=0;j<n-i;j++){
//         cout<<j+1<<" ";
//     }
//     cout<<endl;
// }

//Full Pyramid
// int n;
// cin>>n;
// for(int i=0;i<n;i++){
//     //space
//     for(int j=0;j<n-i-1;j++){
//         cout<<" ";
//     }
//     for(int j=0;j<i+1;j++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }

//Inverted Full Pyramid
// int n;
// cin>>n;
// for(int i=0;i<n;i++){
//     //spaces
//     for(int j=0;j<i;j++){
//         cout<<" ";
//     }
//     //stars
//     for(int j=0;j<n-i;j++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }

//Diamond
// int num;
// cin>>num;
// int n=num/2;
// for(int i=0;i<n;i++){
//     //space
//     for(int j=0;j<n-i-1;j++){
//         cout<<" ";
//     }
//     //stars
//     for(int j=0;j<i+1;j++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }
//     for(int i=0;i<n;i++){
//         //space
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//             //stars 
//             for(int j=0;j<n-i;j++){
//                 cout<<"* "; 
//             }
//         cout<<endl;
//     }

//Hollow Pyramid
// int n;
// cin>>n;
// for(int i=0;i<n;i++){
//     //space
//     for(int j=0;j<n-i-1;j++){
//         cout<<" ";
//     }
//     //stars
//     for(int j=0;j<i+1;j++){
//         //print star for first and last column
//         if(j==0 || j==i+1-1){   
//         cout<<"* ";
//     }
//     else{
//         //for every column b/w first and last column print space
//         cout<<"  ";
//     }
// }
// cout<<endl;
// }

//Inverted Hollow Pyramid
// int n;
// cin>>n;
// for(int i=0;i<n;i++){
//     //spaces
//     for(int j=0;j<i;j++){
//         cout<<" ";
//     }
//     //stars
//     for(int j=0;j<n-i;j++){
//         if(j==0 || j==(n-i)-1){
//         cout<<"* ";
//     }
//     else{
//         cout<<"  ";
//     }
//     }
//     cout<<endl;
// }

//Inverted Hollow Diamond
// int num;
// cin>>num;
// int n=num/2;
// for(int i=0;i<n;i++){
//     //space
//     for(int j=0;j<n-i-1;j++){
//         cout<<" ";
//     }
//     //stars
//     for(int j=0;j<i+1;j++){
//         //print star for first and last column
//         if(j==0 || j==i+1-1){   
//         cout<<"* ";
//     }
//     else{
//         //for every column b/w first and last column print space
//         cout<<"  ";
//     }
// }
// cout<<endl;
// }
// for(int i=0;i<n;i++){
//     //spaces
//     for(int j=0;j<i;j++){
//         cout<<" ";
//     }
//     //stars
//     for(int j=0;j<n-i;j++){
//         if(j==0 || j==(n-i)-1){
//         cout<<"* ";
//     }
//     else{
//         cout<<"  ";
//     }
//     }
//     cout<<endl;
// }

//Pattern-11
int num;
cin>>num;
int n=num/2;
    return 0;   
}