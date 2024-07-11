// print numbers 1 to 100 and 100 to 

// #include<iostream>
// using namespace std;
// int main()
// {
//     //for(int i=1;i<=100;i++){
//     for(int i=100;i>=1;i--){
//         cout<<i<<" ";
//         //cout<<i<<endl;
//     }
// }

// print numbers 1 to n

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cout<<i<<" ";
//         //cout<<i<<endl;
//     }
// }

// print all the even numbers from 1 to n

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     //for(int i=1;i<=n;i++){ //Loop run totel number n times
//     for(int i=2;i<=n;i=i+2){  //Loop run half times n/2
//         if(i%2==0){
//             cout<<i<<" ";
//             //cout<<i<<endl;} 
//         }
//     }
// }

// print all the odd numbers from 1 to n

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     //for(int i=1;i<=n;i++){
//     for(int i=1;i<=n;i=i+2){
//         if(i%2!=0){
//             cout<<i<<" ";
//             //cout<<i<<endl;} 
//         }
//     }
// }

// print the table of 19

// #include<iostream>
// using namespace std;
// int main()
// {
//     //for(int i=19;i<=190;i++){ // 172 time run
//     for(int i=19;i<=190;i+=19){ // 10 time run
//         if(i%19==0){
//             cout<<i<<" ";
//             //cout<<i<<endl;} 
//         }
//     }
// }

// print any table while taking input of which table

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter which table: ";
//     cin>>n;
//     for(int i=1;i<=10;i++){ 
//             // cout<<n*i<<" ";
//             cout<<n<<"*"<<i<<"="<<n*i<<endl;
//     }
// }

// display this AP-4,7,10,13,16...upto 'n' terms

// #include<iostream>
// using namespace std;
// int main()
// {
//     // using formula method
    
//     // int n;
//     // cout<<"Enter the value of n: ";
//     // cin>>n;
//     // for(int i=4;i<=3*n+1;i+=3){
//     //         cout<<i<<" ";
//     //         //cout<<i<<endl;}
//     // }

//               //or

//     // without using formule method

//     int n, a = 4;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//             cout<<a<<" ";
//             a = a + 3;
//     }
// }

// display this GP-1,2,4,8,16,32...upto 'n' terms

// #include<iostream>
// using namespace std;
// int main()
// {
//     // int n, a = 1;
//     // cout<<"Enter the n: ";
//     // cin>>n;
//     // for(int i=1;i<=n;i++){
//     //     cout<<a<<" ";
//     //     a = a * 2;
//     // }

//          //or

//     int n, a, b;
//     cout<<"Enter the n: ";
//     cin>>n;
//     cout<<"Enter the a: ";
//     cin>>a;
//     cout<<"Enter the b: ";
//     cin>>b;
//     for(int i=1;i<=n;i++){
//             cout<<a<<" ";
//             a = a * b;
//     }
// }

//WAP to find the highest factor of a number 'n' other than n itself using break statement

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     int f = 1;
//     // for(int i=1;i<n;i++){
//     // for(int i=1;i<=n/2;i++){    // without using break statement
//     //     if(n%i==0){ 
//     //         f = i;
//     //     }

//             //or
     
//     for(int i=n/2;i>=1;i--){      // with using break statement
//         if(n%i==0){ 
//             f = i;
//             break; // to get out of the loop
//         } 
//     }
//     cout<<f;
// }

// WAP to print the number is composite or not

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     bool flag = true; // true means prime
//     for(int i=2;i<=n/2;i++){ 
//         if(n%i==0){
//             flag = false; // false means composite
//             break; // to get out of the loop
//         }
//     }
//     if(n==1) cout<<"Neither Prime Nor Composite";
//     else if(flag==true) cout<<"Prime";
//     else cout<<"Composite";
// }

// WAP to print numbers 1 to 20 except 2 & 8

// #include<iostream>
// using namespace std;
// int main()
// {
//     // for(int i=1;i<=20;i++){
//     //     if(i!=3 && i!=8) cout<<i<<" ";

//             //or

//     for(int i=1;i<=20;i++){
//         if(i==3 || i==8) continue;  
//         cout<<i<<" ";          
//     }
// }

// WAP to print odd numbers from 1 to 100 except prime number

#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=100;i++){
        if(i%2==0) continue;  
        cout<<i<<" ";          
    }
}