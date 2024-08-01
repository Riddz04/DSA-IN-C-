#include<iostream>
using namespace std;
int main(){
    // int num = 2;
    char ch = 'a';
    cout<<endl;
    switch (ch)
    {
    case 1: cout<<"first"<<endl;
        break;//iske aage ka execute na ho isliye break use hota hai
    case 2: cout<<"second"<<endl;
        break;
    
    default: cout<<"it is default case"<<endl;//not mandatory
    }
    cout<<endl;
    return 0;
}
// we cannot use continue statement within switch as it would not make sense coz continue is used within a loop and switch is not a loop and would lead to confusing code