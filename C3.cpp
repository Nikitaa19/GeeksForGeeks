//Bitwise Operators & Loops
#include<iostream>
using namespace std;
// int main(){
    //AND (&)
    // int a=2;
    // int b=3;
    // cout<<(a & b)<<endl;

    //OR (|)
    // int a=5;
    // int b=10;
    // cout<<(a | b)<<endl;

    //NOT (~)
    // int num=1;
    // cout<<~num<<endl;
    // cout<<(~num)<<endl;
    // cout<<~(num)<<endl;
    // return 0;

    // bool num=1;
    // cout<<~num<<endl;
    // cout<<(~num)<<endl;
    // cout<<~(num)<<endl;
    // return 0;

    //XOR(^)
    // int a=5;
    // int b=5;
    // cout<<(a^b)<<endl;

    // int a=5;
    // int b=10;
    // cout<<(a^b)<<endl;

    // int a=5;
    // int b=-5;
    // cout<<(a^b)<<endl;
 
//Left & Right Shift Operators
     //Left Shift
    // int a=7;
    // int ans=(a<<1);
    // cout<<ans<<endl;

    // int a=7;
    // int ans=(a<<2);
    // cout<<ans<<endl;

    // int a=7;
    // int ans=(a<<4);
    // cout<<ans<<endl;

    //Right Shift
    // int a=5;
    // int ans=(a>>1);
    // cout<<ans<<endl;

    // int a=50;
    // int ans=(a>>1);
    // cout<<ans<<endl;

    // int a=100;
    // int ans=(a>>1);
    // cout<<ans<<endl;

    // int a=50;
    // int ans=(a>>2);
    // cout<<ans<<endl;

    // int a=100;
    // int ans=(a>>2);
    // cout<<ans<<endl;

    // int a=-100;
    // int ans=(a>>1);
    // cout<<ans<<endl;

    // unsigned int a=-100;
    // int ans=(a>>1);
    // cout<<ans<<endl;

    //Garbage Value
    // int n=10;
    // cout<<(n << -1);

//Pre/Post Inc/Dec
// int a=21;
// cout<<++a<<endl;
// //a -> 22
// cout<<a++<<endl;
// //verifying ki inc hua ya nahi
// cout<<a<<endl;
  
// int a=10;
// cout<<(++a)*10<<endl;
// cout<<(a++)*10<<endl;
// cout<<a<<endl;

// int a=10;
// cout<<(++a)*(a++)<<endl;


//Break & Continue Keyword

//Break
// for(int i=0;i<5;i++){
//     cout<<i<<endl;
//     break;
// }

// for(int i=0;i<5;i++){
//     cout<<i<<endl;
//     if(i==100)
//     break;
// }

// for(int i=0;i<5;i++){
//     cout<<i<<endl;
//     if(i==3)
//     break;
// }

//Continue
// for(int i=0;i<=5;i++){
//     cout<<"Hello"<<endl;
//     continue;
//     cout<<"Namaste"<<endl;
// }

// for(int i=0;i<=5;i++){
//     continue; 
//     cout<<"Hello"<<endl;
//     cout<<"Namaste"<<endl;
// }

// for(int i=0;i<=5;i++){
//     cout<<"Hello"<<endl;
//     cout<<"Namaste"<<endl;
//     continue;
// }

//Local Variables

//initialize
// int a=5;
// //declare
// int b;
// //update
// a=25;
// //print
// cout<<a<<endl;
// //redefine karne ki koshish kari par nahi kar sakte
// int a=10;

//error ayega kyuki neeche wala i scope se bahar chala gaya
// for(int i=0;i<5;i++){
//     cout<<i<<endl;
// }
// cout<<"Hi"<<i<<endl;

// if(true){
//     int a=25;
//     cout<<a<<endl;
// }
// cout<<a<<endl;

// if(true){
//     cout<<"Hi"<<endl;
//     int a=100;
//     if(true){
//         cout<<"Hello"<<endl;
//         cout<<a<<endl;
//     }
// }

// if(true){
//     cout<<"Hi"<<endl;
//     int a=100;
//     if(true){
//         cout<<"Hello"<<endl;
//         int a=200;
//         cout<<a<<endl;
//     }
// }

// int a=10;
// if(true){
//     cout<<"Hi"<<endl;
//     if(true){
//         cout<<"Hello"<<endl;
//         cout<<a<<endl;
//     }
// }
// }

//Global Variables
// int age=21;
// int main(){
//     cout<<age<<endl;
//     return 0;
// }

//Type Casting

// int main(){
//IMPLICIT

//int to float
// int num1=10;
// float num2=5.5;
// float result=num1+num2;
// cout<<result<<endl;

//char to int
// char ch='A';
// int a=ch+1;
// cout<<a<<endl;

//int to char
// int a=97;
// char ch=a;
// cout<<ch<<endl;

// char d='D';
// int dd=d;
// cout<<dd<<endl;

//EXPLICIT
//double to int
// double pi=3.14159265;
// int intPi=(int)pi;
// cout<<intPi<<endl;

//float to char
// float floatingNumber=65.5;
// char charValue=(char)floatingNumber;
// cout<<charValue<<endl;

//int to float
// int a=10;
// int b=3.0;
// float c=a/((float)b);
// cout<<c<<endl;

// float a=10;
// int b=3.0;
// float c=a/b;
// cout<<c<<endl;

// int a=10;
// float b=3.0;
// float c=a/b;
// cout<<c<<endl;

// int a=10;
// int b=3.0;
// float c=a/((float)b);
// cout<<c<<endl;

// int a=10;
// int b=3.0;
// float c=((float)a)/b;
// cout<<c<<endl;

// int a=10;
// int b=3.0;
// int c=((float)a)/b;
// cout<<c<<endl;

// return 0;
// }

//Switch Case
// int main(){
    // float a,b;
    // cout<<"Enter two numbers:"<<endl;
    // cin>>a>>b;
    // int op;
    // cout<<"Operation to be done?"<<endl;
    // cin>>op;
    // float ans=0;
    // //op 0->add, 1->sub, 2->mul, 3->div, invalid
    // if(op==0){
    //     ans=a+b;
    // }
    // else if(op==1){
    //     ans=a-b;
    // }
    // else if(op==2){
    //     ans=a*b;
    // }
    // else if(op==3){
    //     ans=a/b;
    // }
    // else{
    //     cout<<"Invalid"<<endl;
    //     return 0;
    // }
    // cout<<"Answer is: "<<ans<<endl;

//     float a,b;
//     cout<<"Enter two numbers:"<<endl;
//     cin>>a>>b;
//     int op;
//     cout<<"Operation to be done?"<<endl;
//     cin>>op;
//     float ans=0;
//     //op 0->add, 1->sub, 2->mul, 3->div, invalid
//     switch(op){
//         case 0:
//         cout<<"Add"<<endl;
//         ans=a+b;
//         break;
//         case 1:
//         cout<<"Subtract"<<endl;
//         ans=a-b;
//         break;
//         case 2:
//         cout<<"Multiply"<<endl;
//         ans=a*b;
//         break;
//         case 3:
//         cout<<"Divide"<<endl;
//         ans=a/b;
//         break;
//         default:
//         cout<<"Invalid"<<endl;
//         return 0;
//     }
//     cout<<"Answer is: "<<ans<<endl;

//     return 0;
// }

//FUNCTIONS
//     void printName(string name){
//         for(int i=0;i<5;i++){
//             cout<<name<<endl;
//         }
//     }
//     int main(){
//         printName("Nikita");
//         printName("Agarwal");
//         printName("DSA");
//         printName("Science");
//     return 0;
// }

//agar function kuch return nahi karta toh void lagta hai
// void printLine(){
//     for(int i=0;i<10;i++){
//         cout<<"I am a Badminton Player"<<endl;
//     }
// }
// int main(){
//     printLine();
//     return 0;
// }

//agar function int main ke neeche define karenge toh nahi chalega isliye upar karna hai humesha par agar int main ke upar function declare karde bas aur logic int main ke neevhe bhi daale toh code work karega
// int main(){
//     printLine();
//     return 0;
// }
// void printLine(){
//     for(int i=0;i<10;i++){
//         cout<<"I am a Badminton Player"<<endl;
//     }
// }

//function declaration
// void printLine();
// int main(){
//     printLine();
//     return 0;
// }
// void printLine(){
//     for(int i=0;i<10;i++){
//         cout<<"I am a Badminton Player"<<endl;
//     }
// }

// void printA(){
//     cout<<"I am inside A"<<endl;
// }
// int main(){
//     cout<<"Hi"<<endl;
//     printA();
//     return 0;
// }

//write a fn. to print sum of 3 nos....yeh print kar raha hai toh void leliya hai
// void printSum(int a, int b, int c){
//     int sum=a+b+c;
//     cout<<"Sum is: "<<sum<<endl;
// }
// int main(){
//     printSum(2,3,4);
//     return 0;
// }

//write a fn. to return sum of 3 nos... yeh return kar raha toh int use karenge
// int printSum(int a, int b, int c){
//     int sum=a+b+c;
//     return sum;
// } 
// int main(){
    // int ans=printSum(2,3,4);
    // cout<<"Sum is: "<<ans<<endl;

    //directly print bhi kara sakte hai
//     cout<<"Sum is: "<<printSum(2,3,4)<<endl;
// }

//void ke andar agar return use karna hai toh saath mei koi data nahi bhejna 
// void messagePrint(){
//     cout<<"Msg 1"<<endl;
//     return;
    //agar return msg 2 wali line ke neeche laga denge toh msg1 and msg2 dono print honge
//     cout<<"Msg 2"<<endl;
// }
// int main(){
//     messagePrint();
// }

//find max of a,b,c
// void printMaximum(int num1, int num2, int num3){
//     if(num1>=num2 && num1>=num3){
//         cout<<"Max is: "<<num1<<endl;
//     }
//     else if(num2>=num1 && num2>=num3){
//         cout<<"Max is: "<<num2<<endl;
//     }
//     else{
//         cout<<"Max is: "<<num3<<endl;
//     }
// }
//another way
// void printMaximum(int n1, int n2, int n3){
//     int ans1=max(n1, n2);
//     int finalAns=max(ans1, n3);
//     cout<<"Final Ans is: "<<finalAns<<endl;
// }
// int main(){
//     printMaximum(3,3,1);
//     return 0;
// }
//when we want to return
// int printMaximum(int n1, int n2, int n3){
//     int ans1=max(n1, n2);
//     int finalAns=max(ans1, n3);
//     return finalAns;
// }
// int main(){
//     int maximum=printMaximum(3,3,1);
//     cout<<"Maximum is: "<<maximum<<endl;
//     return 0;
// }

//print 1 to n counting
// void printCounting(int n){
//     for(int i=1;i<=n;i++){
//         cout<<i<<endl;
//     }
// }
// int main(){
//     printCounting(10);
// }

//check even or odd
// void checkEvenOdd(int num){
//     if(num%2==0){
//         cout<<"Even Number"<<endl;
//     }
//     else{
//         cout<<"Odd Number"<<endl;
//     }
// }
// int main(){
//     checkEvenOdd(15);
// }

//sum from 1 upto N
// void findSumUptoN(int n){
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum=sum+i;
//     }
//     cout<<"Final Sum: "<<sum<<endl;
// }
// int main(){
//     findSumUptoN(5);
// return 0;
// }

//sum of all even numbers upto N
// void findEvenSumUptoN(int n){
//     int sum=0;
//     for(int i=2;i<=n;i=i+2){
//         sum=sum+i;
//     }
//     cout<<"Final Sum: "<<sum<<endl;
// }
// int main(){
//     findEvenSumUptoN(10);
//     return 0;
// }
//another way
// void findEvenSumUptoN(int n){
//     int sum=0;
//     for(int i=1;i<=n;i=i++){
//         if(i%2==0){
//         sum=sum+i;
//     }
//     }
//     cout<<"Final Sum: "<<sum<<endl;
// }
// int main(){
//     findEvenSumUptoN(10);
//     return 0;
// }

//check prime or not...return true->N is prime otherwise return false->N is not prime
bool checkPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    bool prime=checkPrime(2);
    if(prime){
        cout<<"Prime"<<endl;
    }
    else{
        cout<<"Not Prime"<<endl;
    }
    return 0;
}