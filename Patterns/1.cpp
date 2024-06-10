#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<i;// for number
            //cout<<" * "
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }
}
// 1111
// 2222
// 3333
// 4444