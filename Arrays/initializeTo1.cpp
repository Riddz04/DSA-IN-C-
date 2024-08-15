#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10; // Size of the array
    int arr[SIZE];

    // Initialize all elements to 1
    for (int i = 0; i < SIZE; ++i) {
        arr[i] = 4;
    }

    // Print the array to verify
    for (int i = 0; i < SIZE; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}
