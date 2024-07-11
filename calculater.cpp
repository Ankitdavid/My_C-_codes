// calculater program using if

// #include<iostream>
// using namespace std;
// int main()
//  {
//     int n1;
//     cin>>n1;
//     char op; // operator
//     cin>>op;
//     int n2;
//     cin>>n2;
//     if(op=='+') cout<<n1+n2;
//     if(op=='-') cout<<n1-n2;
//     if(op=='*') cout<<n1*n2;
//     if(op=='/') cout<<n1/n2;
//  }

// calculater program using switch case

// #include<iostream>
// using namespace std;
// int main()
//  {
//     int n1;
//     cin>>n1;
//     char op; // operator 
//     cin>>op;
//     int n2;
//     cin>>n2;
//     switch(op){
//         case '+':
//         cout<<n1+n2;
//         break;
//         case '-':
//         cout<<n1-n2;
//         break;
//         case '*':
//         cout<<n1*n2;
//         break;
//         case '/':
//         cout<<n1/n2;
//         break;
//         default:
//         cout<<"Invalid Number";
//         break;
//     }
//  }

 // 7 days name using switch case

#include<iostream>
using namespace std;
int main()
 {
    int days;
    //char days;
    cout<<"Enter the number (1-7): ";
    cin>>days;
    switch(days){
        case 1:
        //case '1':
            cout<<"Sunday";
            break;
        case 2:
        //case '2':
            cout<<"Monday";
            break;
        case 3:
        //case '3':
            cout<<"Tuesday";
            break;
        case 4:
        //case '4':
            cout<<"Wednesday";
            break;
        case 5:
        //case '5':
            cout<<"Thursday";
            break;
        case 6:
        //case '6':
            cout<<"Friday";
            break;
        case 7:
        //case '7':
            cout<<"Saturday";
            break;
        default:
            cout<<"Invalid Number";
            break;
    }  
 }