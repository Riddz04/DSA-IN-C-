// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter : ";
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=i){
//             cout<<char(i+'A'-1)<<" ";
//             ++j;
//         }
//         cout<<endl;
//         ++i;
//     }
// }
// A
// B B
// C C C
// D D D D

// another problem:
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter : ";
    cin>>n;
    int i = 1;
    char ch = 'A';
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<ch<<" ";
            ++j;
            ++ch;
        }
        cout<<endl;
        ++i;
    }
}
// A 
// B C 
// D E F 
// G H I J 