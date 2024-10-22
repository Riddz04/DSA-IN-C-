#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,l,r,ans = 1;
        cin >> n;
        cin >> l , r=l;
        for(int i = 1;i<n;i++){
            int x;
            cin >> x;
            if(x == l-1){
                l = x;
            }
            else if(x == r+1){
                r = x;
            }
            else ans = 0;
        }
        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}