#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter : ";//code works only for integer input
    cin>>n;
    int count = 0;
    while(n!=0){
        //checking last bit
        if(n&1){
            count++;
        }
        n = n>>1;
    }
    cout<<"number of set bits in the number: "<<count<<endl;
}