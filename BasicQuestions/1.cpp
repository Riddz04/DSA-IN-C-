#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter your value: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        cout << "smallcase" << endl;
    } else if (ch >= 'A' && ch <= 'Z') {
        cout << "UPPERCASE" << endl;
    } else if (ch >= '0' && ch <= '9') {
        cout << "numeric" << endl;
    } else {
        cout << "Invalid input" << endl;
    }

    return 0;
}