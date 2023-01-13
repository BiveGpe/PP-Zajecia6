#include <iostream>

using namespace std;

int main() {
    // Pobranie n
    int n;
    cout << "Podaj liczbe n: ";
    cin >> n;

    // Policzenie ile jest liczb podzielnych przez 5, a przez 3 nie
    int counter = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 5 == 0 && i % 3 != 0) {
            counter++;
        }
    }

    // Wyswietla wynik
    cout << "Liczb naturalnych nie wiekszych od " << n << " podzielnych przez 5 ale nie przez 3 jest: " << counter << endl;
    return 0;
}
