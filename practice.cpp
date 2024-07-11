// practice code 1

// #include<iostream>
// using namespace std;
// int main()
// {
//     int x = 3, y, z;
//     y = x = 10;
//     z = x < 10;
//     cout<<x<<" "<<y<<" "<<z;
// }

// practice code 2

// #include<iostream>
// using namespace std;
// int main()
// {
//     int i;
//     while(i=10){  // infinite loop 
//         cout<<i<<" ";
//         i = i + 1;
//     }
// }

// practice code 3

// #include<iostream>
// using namespace std;
// int main()
// {
//     int i = 10;
//     while(i=20) // infinite loop
//         printf("\tA computer buff");
// }

// practice code 4

#include<iostream>
using namespace std;
int main()
{
    int x = 4, y = 0;
    while(x>=y){
        x--;
        y++;
        if(x==y)
            continue;
        else
            cout<<x<<" "<<y<<endl;    
    }
    
}