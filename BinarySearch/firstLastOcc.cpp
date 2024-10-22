#include<iostream>
using namespace std;

int firstOcc(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int mid;
    int ans = -1;

    while(start <= end) {
        mid = start + (end - start) / 2; 

        if(arr[mid] == key) {
            ans = mid;
            end = mid - 1;
        } else if(key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}

int lastOcc(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int mid;
    int ans = -1;

    while(start <= end) {
        mid = start + (end - start) / 2;  

        if(arr[mid] == key) {
            ans = mid;
            start = mid + 1; 
        } else if(key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
    int even[12] = {2,3,3,3,3,3,3,3,3,3,4,5};
    cout << "First occurrence of 3 is at index " << firstOcc(even, 12, 3) << endl;
    cout << "Last occurrence of 3 is at index " << lastOcc(even, 12, 3) << endl;

    return 0;
}
