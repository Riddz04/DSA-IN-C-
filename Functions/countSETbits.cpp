#include<iostream>
using namespace std;
int countSetBits(int n){
    int count = 0;
    while(n>0){
        count += n&1;
        n>>=1;
    }
    return count;
}
int main(){
    int num1,num2;
    cout<<"enter first no.: "<<endl;
    cin>>num1;
    cout<<"enter second no.: "<<endl;
    cin>>num2;
    int totalSetBits = countSetBits(num1)+countSetBits(num2);
    cout<<"total number of set bits in "<<num1<<"and "<<num2<<" is: "<<totalSetBits;
    return 0;
}