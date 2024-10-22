#include <iostream>
#include <cmath>
using namespace std;

long long findMinValue(long long n, long long a1) {
    
    long long totalSum = n * a1 + (n * (n - 1)) / 2;
    
    long long minValue = totalSum;
    
    for (long long i = 1; i < n; ++i) {
        long long sumFirstI = i * a1 + (i * (i - 1)) / 2;
        long long diff = abs(2 * sumFirstI - totalSum);
        minValue = min(minValue, diff);
    }
    
    return minValue;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, a1;
        cin >> n >> a1;
        cout << findMinValue(n, a1) << endl;
    }

    return 0;
}
