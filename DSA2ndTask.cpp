#include <iostream>
using namespace std;

int main() {
    int t;
    cout <<"Number of test case: ";
    cin >> t;
    while (t--) {
        string a, b, c;
        cout <<"Enter acient name: ";
        cin >> a >> b >> c;
        // Concatenate first letters of each word
        string modern_name = "";
        modern_name += a[0];
        modern_name += b[0];
        modern_name += c[0];
        cout << modern_name << endl;
    }
    return 0;
}