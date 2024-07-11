// take 3 positive integers input and print the greatest of them while using nested if-else

#include<iostream>
using namespace std;
int main()
{
    int a, b , c;
    cout<<"Enter the 1st integer: ";
    cin>>a;
    cout<<"Enter the 2nd integer: ";
    cin>>b;
    cout<<"Enter the 3rd integer: ";
    cin>>c;  
    if(a>b){
        if(a>c){
            cout<<a<<" is greatest number";
        }
        else{
            cout<<c<<" is greatest number";
        }
    }
    else{
        if(b>c){
            cout<<b<<" is greatest number";
        }
        else{
            cout<<c<<" is greatest number";
        }
    }
} 