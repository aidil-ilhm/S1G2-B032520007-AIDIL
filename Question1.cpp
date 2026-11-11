#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the amount of Ringgit Malaysia (RM): ";
    cin >> n;

    int totalDrinks = n;
    int coupons = n;

    while (coupons >= 7) {
        int redeemedDrinks = coupons / 7; // Number of drinks we can get from coupons
        totalDrinks += redeemedDrinks;    // Add to total drinks collected
        coupons = (coupons % 7) + redeemedDrinks;
    }

    cout << "\nTotal canned drinks collected: " << totalDrinks << endl;
    cout << "Leftover coupons: " << coupons << endl;

    return 0;
}
