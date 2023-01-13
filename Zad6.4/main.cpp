#include <iostream>
#include <string>

using namespace std;

int main() {
    // Pobranie danych od użytkownika
    string inputString;
    int n;
    cout << "Podaj lancuch znakow: ";
    cin >> inputString;
    cout << "Podaj liczbe powtorzen: ";
    cin >> n;

    // Konkatenuje string
    string concatenatedString;
    for (int i = 0; i < n; i++) {
        concatenatedString += inputString;
    }

    // Wyswietla stringa
    std::cout << "Skonkatenowany lancuch: " << concatenatedString << std::endl;
    return 0;
}