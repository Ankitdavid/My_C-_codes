// WAP to count digits of a given number

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     int count = 0;
//     while(n>0){
//         n /= 10;
//         count++;
//     }
//     cout<<count;
// }

// WAP to print sum of digits of a given number

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n, sum = 0;
//     cout<<"Enter n: ";
//     cin>>n;
//     while(n!=0){
//         sum += n%10;
//         n /= 10;
//     }
//     cout<<sum;
// }

// WAP to print product of digits of a given number

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n, product = 1;
//     cout<<"Enter n: ";
//     cin>>n;
//     while(n!=0){
//      product *= n%10;
//         n /= 10;
//     }
//     cout<<product;
// }

// WAP to print sum of all even digits of a given number

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n, sum = 0;
//     cout<<"Enter n: ";
//     cin>>n;
//     while(n!=0){
//         if(n%2==0)
//         sum += n%10;
//         n /= 10;
//     }
//     cout<<sum;
// }

// WAP to print reverse of a given number

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n, rev = 0;
//     cout<<"Enter n: ";
//     cin>>n;
//     while(n!=0){
//         rev = rev * 10 + (n%10);
//         n /= 10;
//     }
//     cout<<rev;
// }

// WAP to print the sum of a given number and its reverce

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n, sum = 0, rev = 0, revsum = 0;
//     cout<<"Enter n: ";
//     cin>>n;
//     while(n>0){
//         sum += n%10;
//         rev = rev * 10 + (n%10);
//         revsum += rev%10;
//         n /= 10;
//     }
//     cout<<"Sum of given numbers is: "<<sum<<endl<<"Sum of reverce number is: "<<revsum<<endl;
//     sum += revsum;    
//     cout<<"Sum of given and reverce numbers is: "<<sum;
//     return 0;
// }

                    // or both right

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n, sum = 0, rev = 0;
//     cout<<"Enter n: ";
//     cin>>n;
//     while(n>0){
//         sum += n%10;
//         rev = rev * 10 + (n%10);
//         n /= 10;
//     }
//     cout<<"Sum of given numbers is: "<<sum<<endl<<"Reverce number is: "<<rev<<endl;
//     sum += rev;    
//     cout<<"Sum of given numbers and reverce is: "<<sum;
//     return 0;
// }

// WAP to print the factorial of a given number 'n'

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n, fact = 1;
//     cout<<"Enter n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         fact *= i;
//     }
//     cout<<"factorial of "<<n<<"! = "<<fact;
// }

// WAP to print the factorial of a given number 'n'

#include<iostream>
using namespace std;
int main()
{
    int n, fact = 1;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        fact *= i;
    }
    cout<<"factorial of "<<n<<"! = "<<fact;
}