#include <iostream>

using namespace std;

int main() {
    double budget;
    double expense;
    double totalExpenses = 0.0;

    cout << "Enter your monthly budget (RM): ";
    cin >> budget;

    cout << "\nEnter your monthly expenses one by one." << endl;
    cout << "Enter 0 or a negative number when you are finished." << endl;

    cout << "Enter expense: RM ";
    cin >> expense;

    while (expense > 0) {
        totalExpenses += expense;
        cout << "Enter next expense (or 0 to finish): RM ";
        cin >> expense;
    }

    cout << "\n--- Monthly Summary ---" << endl;
    cout << "Total Budget: RM " << budget << endl;
    cout << "Total Expenses: RM " << totalExpenses << endl;

    if (totalExpenses < budget) {
        cout << "You are under budget by RM " << (budget - totalExpenses) << "." << endl;
    }
    else if (totalExpenses > budget) {
        cout << "You are over budget by RM " << (totalExpenses - budget) << "!" << endl;
    }
    else {
        cout << "You have spent exactly your budget amount." << endl;
    }

    return 0;
}
