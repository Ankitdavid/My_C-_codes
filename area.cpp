// (float datatype)

// (without user input)
// #include<iostream>
// using namespace std;
// int main()
// {
//     float r = 4.3;
//     float a = 3.1415*r*r;
//     cout<<a<<endl;
//     return 0;
// }

// (with user input)
#include<iostream>
using namespace std;
int main()
{
    float r, a = 3.1415;
    cout<<"Enter the value: ";
    cin>>r;
    cout<<"Area of circle is: ";
    cout<<a*r*r;
    return 0;
}

