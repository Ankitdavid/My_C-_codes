//(char datatype)

// #include<iostream>
// using namespace std;
// int main()
// {
//     char ch;
//     cout<<"Enter the string: ";
//     cin>>ch;
//     int x = (int)ch;  //typecasting of char to int
//     cout<<x; 
//     return 0;
// }

#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the value: ";
    cin>>x;
    char ch = (char)x; //typecasting of int to char 
    cout<<ch;
    return 0;
}  