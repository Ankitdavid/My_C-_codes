// (if statement)

    // #include<iostream>
    // using namespace std;
    // int main()
    // {
    //     int n;
    //     cout<<"Enter the value: ";
    //     cin>>n;
    //     if(n%2==2)
    //     cout<<"Even number";
    //     if(n%2!=2)
    //     cout<<"Odd number";
    // }

// (if-else statement)

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value: ";
//     cin>>n; 
//     if(n%5==0)
//         cout<<"Even number";
//     else
//         cout<<"Odd number";
// }

// (is user input is divisible by 5 or not)

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     if(n%5==2){
//         cout<<"Divisible by 5: ";
//     }
//     else{
//         cout<<"Not divisible by 5: ";
//     }   
// }

// (find absolute value of that integer)

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the integer: ";
//     cin>>n;
    // if(n>=0){
    //     cout<<n;
    // }
    // if(n<0){
    //     cout<<-n;
    // }

    //    (OR)

    // if(n>=0){
    //     cout<<n;    
    // } 
    // else{ // n<0
    //     cout<<-n;
    // }

    // (if you wnat to change n into it's absolute value)

//     if(n<0) n = -n;
//     cout<<n;
// }

// (cost and selling price of item is input by user, whether seller had profit or loss 
// 0r not profit not loss, if profit how much and if loss how much)

// #include<iostream>
// using namespace std;
// int main()
// {
//     int cp, sp;
//     cout<<"Enter the Cost price: ";
//     cin>>cp;
//     cout<<"Enter the Selling price: ";
//     cin>>sp;
//     if(sp>cp){
//         cout<<"Profit is"<<sp-cp<<"%";
//     }
//     else if(sp<cp){
//         cout<<"Loss is"<<cp-sp<<"%";
//     }
//     else{
//         cout<<"Not profit not loss";
//     }
// }

// (length and breadth is input by user find whether area of rectangle is greater then it's perimeter)

#include<iostream>
using namespace std;
int main()
{
    int l, b;
    cout<<"Enter the Length: ";
    cin>>l;
    cout<<"Enter the Breadth: ";
    cin>>b;
    cout<<"Aera: "<<l*b<<endl;
    cout<<"Perimeter: "<<2*(l+b)<<endl;
    if((l*b)>(2*(l+b))){
        cout<<"Area is greater then perimeter";
    }
    else if((l*b)<(2*(l+b))){
        cout<<"Perimeter is greater than area";
    }
    else{
        cout<<"Area and perimeterare equal";
    }
}