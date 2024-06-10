// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter : ";
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             cout<<char(i+j+'A'-2)<<" ";
//             ++j;
//         }
//         cout<<endl;
//         ++i;
//     }

// }

// same problem with triangle:
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter : ";
    cin>>n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<char(i+j+'A'-2)<<" ";
            ++j;
        }
        cout<<endl;
        ++i;
    }

}
// A
// B C
// C D E
// D E F G