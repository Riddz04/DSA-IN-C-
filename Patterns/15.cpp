#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter : ";
    cin>>n;
    int i = 1;
    while(i<=n){
        int space = 1;
        while(space<i){
            cout<<" ";
            space++;
        }
        int num = i;
        while(num<=n){
            cout<<num;
            num++;
        }
        cout<<endl;
        i++;
    }
}
// 1234
//  234
//   34
//    4
