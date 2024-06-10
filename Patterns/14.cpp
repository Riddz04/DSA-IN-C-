#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter : ";
    cin>>n;
    int i = 1;
    while(i<=n){
        int space = 0;
        while(space<i){
            cout<<" ";
            space = space + 1;
        }
        int j = 1;
        while(j<=(n-i+1)){
            cout<<"*";
            ++j;
        }
        cout<<endl;
        ++i;
    }
}
//  ****
//   ***
//    **
//     *

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter : ";
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         int space = 0;
//         while(space<i){
//             cout<<" ";
//             space = space + 1;
//         }
//         int j = 1;
//         while(j<=(n-i+1)){
//             cout<<i;
//             ++j;
//         }
//         cout<<endl;
//         ++i;
//     }
// }
// 1111
//  222
//   33
//    4