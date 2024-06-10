#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            //cout<<j;//for pattern like 123 123 123
            cout<<n-j+1<<" ";//for diff pattern
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }

}
// 4 3 2 1 
// 4 3 2 1 
// 4 3 2 1 
// 4 3 2 1 