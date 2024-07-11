// take positive integer input and tell if it is a 3 digit number or not 

// using and / &&

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the integer: ";
//     cin>>n;
//     //if(n>99 and n<1000){  
//     if(n>99 && n<1000 &&){
//         cout<<"3 digit number";
//     }
//     else{
//         cout<<"Not 3 digit number";
//     }
// }

// take positive integer input and tell if it is divisible by 3 or 5

// using or / ||

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the integer: ";
//     cin>>n;
//     //if(n%3==0 or n%5==0){  
//     if(n%3==0 || n%5==0){
//         cout<<"Divisible my 3 or 5";
//     }
//     else{
//         cout<<"Not divisible my 3 or 5";
//     }
// }

//  take 3 number input and tell it they can be the side of a triangle

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a, b , c;
//     cout<<"Enter the 1st side: ";
//     cin>>a;
//     cout<<"Enter the 2nd side: ";
//     cin>>b;
//     cout<<"Enter the 3rd side: ";
//     cin>>c;
//     //if((a+b)>c and (b+c)>a and (c+a)>b){  
//     if((a+b)>c && (b+c)>a && (c+a)>b){
//         cout<<"Valid triangle";
//     }
//     else{
//         cout<<"Invalid triangle";
//     }
// } 

// take 3 positive integers input and print the greatest of them

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a, b , c;
//     cout<<"Enter the 1st integer: ";
//     cin>>a;
//     cout<<"Enter the 2nd integer: ";
//     cin>>b;
//     cout<<"Enter the 3rd integer: ";
//     cin>>c;  
//     if(a>b and a>c){
//         cout<<a<<" is greatest number";
//     }
//     else if(b>a and b>c){
//         cout<<b<<" is greatest number";
//     }
//     else{
//         cout<<c<<" is greatest number";
//     }
// } 

// take positive integers input and tell if it is divisible by 3 or 5 but not divisible by 15

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the integer: ";
//     cin>>n;  
//     if((n%3==0 || n%5==0) && (n%15!=0)){
//         cout<<"Divisible by 3 or 5 but not divisible by 15";
//     }
//     else{
//         cout<<"Not divisible by 3 or 5 and 15";
//     }
// } 

// take a input percentage of a student and print the grade according to marks;
// 81-100 very good
// 61-80 good
// 41-60 average
// <=40 fail

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the marks: ";
    cin>>n;  
    if(n>=81 && n<=100){
        cout<<"Very Good";
    }
    else if(n>=61 && n<=80){
        cout<<"Good";
    }
    else if(n>=41 && n<=60){
        cout<<"Average";
    }
    else{
        cout<<"Fail";
    }
} 