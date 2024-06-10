#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int sum = 0;
    for (int number = 1; number <= n; number++) {
        if (number % 2 == 0) {
            sum += number;
        }
    }

    cout << "The sum of even numbers is: " << sum;

    return 0;
}