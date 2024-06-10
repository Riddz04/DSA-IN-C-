#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter: ";
    cin>>n;
    int sum = 0;
    for(int j = 1;j<=n;j++){
        sum += j;
    }
    cout<<sum<<endl;
}