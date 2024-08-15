#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){

    for(int i = 0; i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    
    int arr[10] = {25,36,12,2,69,-68,44,84,35,67};

    cout<<"enter the element to search for: ";
    int key;
    cin>>key;

    bool found = search(arr,10,key);

    if (found){
        cout<<"key is present "<< endl;
    }
    else{
        cout<<"key is absent "<< endl;
    }

    return 0;
}
