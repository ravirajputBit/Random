#include <iostream>
using namespace std;

int main() {
    int t;
    cout <<"Number of test case: ";
    cin >> t;
    while (t--) {
        int x, n;
        cout <<"Enter x: ";
        cin >> x;
        cout <<"Enter length(n): ";
        cin >> n;
        if (n % 2 == 0)
            cout << 0 << endl;
        else
            cout << x << endl;
    }
    return 0;
}