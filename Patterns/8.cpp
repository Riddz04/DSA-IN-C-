#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter : ";
    cin>>n;
    int i = 1;
    char ch = 'A';
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<char('A'+i-1)<<" ";
            // cout<<char('A'+j-1)<<" ";
            // cout<<ch<<" ";
            j = j + 1;
            ++ch;
        }
        cout<<endl;
        i = i + 1;
    }
}
// A A A A
// B B B B
// C C C C
// D D D D

// A B C D
// A B C D
// A B C D
// A B C D

// A B C D
// E F G H
// I J K L
// M N O P