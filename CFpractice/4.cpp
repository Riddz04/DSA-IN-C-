#include <iostream>
#include <string>
using namespace std;

bool isGoodString(int n, const string& s) {
    for (int i = 1; i < n; i++) {
        if (s[i - 1] != s[i] && s[0]!=s[n-1]) {
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        
        if (isGoodString(n, s)) {
            cout << "YES" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
