#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            //cout<<" * ";
            cout<<i<<" ";
            // cout<<j<<" ";
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }
}
// 1
// 2 2
// 3 3 3
// 4 4 4 4