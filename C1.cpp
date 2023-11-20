#include<iostream>
using namespace std;
int main() {
    // int num;
    // cout<<"Enter the value"<<endl;
    // cin>>num;
    // if(num>0){
    //     cout<<"Positive"<<endl;
    // }
    // else if(num<0){
    //     cout<<"Negative"<<endl;
    // }
    // else{
    //     cout<<"Zero"<<endl;
    // }

    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    if(n%2==0){
        cout<<"Even"<<endl;
    }
    else if(n%2!=0){
        cout<<"Odd"<<endl;
    }
    return 0;
}