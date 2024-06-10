// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter : ";
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         int space = n-i;
//         while(space){
//             cout<<" ";
//             space = space - 1;
//         }
//         int j = 1;
//         while(j<=i){
//             cout<<i;
//             // cout<<i<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }
//    1
//   22
//  333
// 4444

//    1 
//   2 2 
//  3 3 3 
// 4 4 4 4 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter : ";
    cin>>n;
    int i = 1;
    int count = 1;
    while(i<=n){
        int space = n-i;
        while(space){
            cout<<" ";
            space = space - 1;
        }
        int j = 1;
        while(j<=i){
            cout<<count;
            // cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}
//    1
//   23
//  456
// 78910