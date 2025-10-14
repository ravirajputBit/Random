#include <iostream>
using namespace std;

int main() {
    int t;
    cout <<"Number of test case: ";
    cin >> t;
    while (t--) {
        int n;
        cout <<"Enter n: ";
        cin >> n;
        int neg = 0, zero = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x == -1) neg++;
            if (x == 0) zero++;
        }

        int ans;
        if (neg % 2 == 0) {
            ans = zero;
        }
        else {
            ans = zero + 2;
        }

        cout <<"answer is: "<< ans << endl;
    }
    return 0;
}