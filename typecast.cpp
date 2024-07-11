//(half of value)
#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the value: ";
    cin>>x;
    float y = (float)x; //typecasting int to float
    cout<<y/2;
}