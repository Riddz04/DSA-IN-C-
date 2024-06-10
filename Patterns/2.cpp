#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int i = 1;
    while(i<=n){
        int j = i;
        while(j<=n){
            cout<<i;// for number
            // cout<<" * ";
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }
}
// 1111
// 222
// 33
// 4

//  *  *  *  * 
//  *  *  * 
//  *  * 
//  * 