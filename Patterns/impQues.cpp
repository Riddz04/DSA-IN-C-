#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter : ";
    cin>>n;
    int i = 1;
    while(i<=n){
        //print karo space
        int space = n-i;
        while(space){
            cout<<" ";
            space = space - 1;
        }
        //print kro 1st triangle
        int j = 1;
        while(j<=i){
            cout<<j;
            j++;
        }

        //print kro 2nd triangle
        int start = i-1;
        while(start){
            cout<<start;
            start = start - 1;
        }
        cout<<endl;
        i++;

    }
    
}