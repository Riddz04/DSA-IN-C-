#include <iostream>
using namespace std;

int main() {
    int price = 1330;
    cout << endl;
    
    // Define states for switch cases
    int state = 1;

    while (state != 0) {
        switch (state) {
            case 1: {
                cout << "Number of 100 rupee notes required: ";
                int x = price / 100;
                cout << x << endl;
                price = price - (x * 100);
                state = 2;
                break;
            }
            case 2: {
                cout << "Number of 50 rupee notes required: ";
                int y = price / 50;
                cout << y << endl;
                price = price - (y * 50);
                state = 3;
                break;
            }
            case 3: {
                cout << "Number of 20 rupee notes required: ";
                int z = price / 20;
                cout << z << endl;
                price = price - (z * 20);
                state = 4;
                break;
            }
            case 4: {
                cout << "Number of 10 rupee notes required: ";
                int w = price / 10;
                cout << w << endl;
                price = price - (w * 10);
                state = 0;
                break;
            }
            default: {
                cout << "It is default case" << endl;
                state = 0;
                break;
            }
        }
    }

    return 0;
}
