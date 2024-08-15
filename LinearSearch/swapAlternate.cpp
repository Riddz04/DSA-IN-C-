#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapAlternate(int arr[],int size){
    for(int i = 0; i<size; i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){
    int even[10] = {12,-96,54,63,27,-42,3,6,0,4};
    int odd[5] = {66,33,-22,-44,11};

    swapAlternate(even,10);
    swapAlternate(odd,5);

    printArray(even,10);
    printArray(odd,5);

    return 0;
}
