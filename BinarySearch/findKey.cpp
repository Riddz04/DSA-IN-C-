#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int mid;

    while(start <= end) {
        mid = start + (end - start) / 2;  // To avoid potential overflow

        if(arr[mid] == key) {
            return mid;
        }

        // Go to the right half
        if(key > arr[mid]) {
            start = mid + 1;
        }
        // Go to the left half
        else {
            end = mid - 1;
        }
    }
    return -1;
}

int main() {
    int even[10] = {2, 4, 6, 8, 10, 12, 46, 67, 89, 90};  // Sorted array
    int odd[5] = {1, 3, 5, 7, 9};  // Sorted array

    int index = binarySearch(even, 10, 46);

    cout << "Index of 46 is: " << index << endl;

    return 0;
}
