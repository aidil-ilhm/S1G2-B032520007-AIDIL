#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    // Validate for a positive integer
    while (n <= 0) {
        cout << "Please enter a positive integer: ";
        cin >> n;
    }

    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    cout << "The sum of all integers from 1 up to " << n << " is: " << sum << endl;

    return 0;
}
