// (float datetype)

// (without user input)
// #include<iostream>
// using namespace std;
// int main()
// {
//     float p = 1000;
//     float r = 30;
//     float t = 3;
//     float si = (p*r*t)/100;
//     cout<<si<<endl;
//     return 0;
// }

// (with user input)
#include<iostream>
using namespace std;
int main()
{
    float p, r, t;
    cout<<"Enter the P: ";
    cin>>p;
    cout<<"Enter the R: ";
    cin>>r;
    cout<<"Enter the T: ";
    cin>>t;
    cout<<"SI: "<<(p*r*t)/100;
    return 0;
}