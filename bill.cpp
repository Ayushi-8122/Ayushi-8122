#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

class User {
private:
    string name;
    int units;

public:
    void input() {
        cout << "Enter the name of the user: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter the number of units consumed: ";
        cin >> units;
    }

    float calculateCharges() {
        float totalAmount = 0.0;

        if (units <= 100) {
            totalAmount = units * 0.60;
        } else if (units <= 300) {
            totalAmount = (100 * 0.60) + ((units - 100) * 0.80);
        } else {
            totalAmount = (100 * 0.60) + (200 * 0.80) + ((units - 300) * 0.90);
        }

        if (totalAmount < 50) {
            totalAmount = 50;
        } else if (totalAmount > 300) {
            totalAmount += totalAmount * 0.15;
        }

        return totalAmount;
    }

    void displayCharges() {
        cout << fixed << setprecision(2);
        cout << "Name: " << name << ", Charges: Rs " << calculateCharges() << endl;
    }
};

int main() {
    int n;

    cout << "Enter the number of users: ";
    cin >> n;

    vector<User> users(n);

    for (int i = 0; i < n; ++i) {
        cout << "User " << (i + 1) << ":" << endl;
        users[i].input();
    }

    cout << "\nCharges for all users:\n";
    for (int i = 0; i < n; ++i) {
        users[i].displayCharges();
    }

    return 0;
}
