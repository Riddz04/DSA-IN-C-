#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter : ";
    cin>>n;
    int i = 1;
    while(i<=n){
        int j = 0;
        int star = n-i;
        while(j<=star){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}
// ****
// ***
// **
// *