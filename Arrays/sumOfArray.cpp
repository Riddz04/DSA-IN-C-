#include<iostream>
using namespace std;

int arrSum(int num[],int n){
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum += num[i];
    }
    return sum;
}

int main(){

    int size;
    cout<<"enter the size of array: ";
    cin>>size;
    int num[100];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }

    cout<<"sum of the values in the array : "<<arrSum(num,size);

    return 0;
}
