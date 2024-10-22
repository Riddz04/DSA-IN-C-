#include<iostream>
using namespace std;

int getPivot(int arr[] , int n) {
    int s = 0;
    int e = n - 1;
    int mid;

    while (s < e) {
        mid = s + (e - s) / 2;

        if (arr[mid] >= arr[0]) {
            s = mid + 1;
        } else {
            e = mid;
        }
    }
    return s;
}
int binarySearch(int arr[], int s, int e, int key) {
    int start = s;
    int end = e;
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


int search(int arr[], int n, int k)
{
    int pivot = getPivot(arr, n);
    if(k>=arr[pivot] && k<=arr[n-1]){
        return binarySearch(arr,pivot,n-1,k);
    }
    else{
        return binarySearch(arr, 0, pivot-1,k);
    }
}
