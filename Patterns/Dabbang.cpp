#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter : ";
    cin>>n;
    int i = 1;
    while(i<=n){
        //1st triangle
        int num = 1;
        while(num<=(n-i+1)){
            cout<<num;
            num++;
        }

        //2nd triangle
        int stars = 2*(i-1);
        while(stars){
            cout<<"*";
            stars--;
        }

        //3rd triangle
        num = n-i+1;
        while(num>=1){
            cout<<num;
            num--;
        }
        cout<<endl;
        ++i;
    }
}