#include <iostream>
#include <string>

using namespace std;

string removeCharacter(const string& str, char charToRemove) {
    string result;
    
    for (char ch :str) {
        if (ch != charToRemove) {
            result += ch;
        }
    }

    return result;
}

int main() {
    string inputString;
    char charToRemove;

    cout << "Enter a string: ";
    getline(cin, inputString);

    cout << "Enter the character to remove: ";
    cin >> charToRemove;

    string updatedString = removeCharacter(inputString, charToRemove);

    cout << "Updated string: " << updatedString << endl;

    return 0;
}
