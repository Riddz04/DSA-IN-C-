// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter : ";
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         char start = 'A' + n - i;
//         while(j<=i){
//             cout<<start<<" ";
//             ++j;
//             ++start;
//         }
//         cout<<endl;
//         ++i;
//     }

// }
// D 
// C D 
// B C D 
// A B C D

// diff problem with same concept:
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter : ";
    cin>>n;
    int i = 1;
    while(i<=n){
        int j = 1;
        char start = 'A' + i - 1;
        while(j<=n){
            cout<<start<<" ";
            ++j;
            ++start;
        }
        cout<<endl;
        ++i;
    }

}
// A B C D 
// B C D E 
// C D E F 
// D E F G 