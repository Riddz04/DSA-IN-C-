#include <bits/stdc++.h>
using namespace std;


bool isPowerOfTen(int num) {
    string s = to_string(num);

    if (s[0] == '1' && s[1] == '0') {
        string rem = s.substr(2);
        
        if (!rem.empty() && rem != "0") {
            if (rem[0] != '0') {
                int remNum = stoi(rem);
                return remNum > 1;
            }
        }
    }

    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int num;
        cin >> num;
        
        if (isPowerOfTen(num)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
