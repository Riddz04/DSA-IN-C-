#include<iostream>
using namespace std;

void sayDigit(int n, string arr[]){
    if(n == 0){
        return;
    }

    //processing
    int digit = n % 10;
    n = n / 10;

    //recursive call
    sayDigit(n,arr);
    cout<<arr[digit]<<" ";
}

int main(){
    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

    int n;
    cout<<"enter your number"<<endl;
    cin>>n;

    cout<<endl<<endl;
    sayDigit(n,arr);
    cout<<endl<<endl;

    return 0;
}