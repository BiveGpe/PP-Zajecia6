#include <iostream>
#include <string>

using namespace std;


// Deklaruje strukture student
struct Student {
    string name;
    int grades[4]{};
};

int main() {
    // Tworzy tablice ze structami studentów
    Student students[6];

    // Pobiera dane o studentach
    for (int i = 0; i < 6; i++) {
        cout << "Podaj imie studenta " << i+1 << ": ";
        cin >> students[i].name;
        cout << "Podaj oceny z informatyki, matematyki, biologii i jezyka polskiego (oddzielone spacja): ";
        cin >> students[i].grades[0] >> students[i].grades[1] >> students[i].grades[2] >> students[i].grades[3];
    }

    // Zapetla program zeby odpytac o kilku studentow
    int howManyQuestions;
    cout << "Podaj ilosc zapytan: ";
    cin >> howManyQuestions;

    while (howManyQuestions > 0) {
        // Pobiera od uzytkownika numeru studenta i przedmiotu
        int studentNum, subjectNum;
        while (true) {
            cout << "Podaj numer studenta [1-6]: ";
            cin >> studentNum;
            if (studentNum < 1 || studentNum > 6) {
                cout << "Niepoprawny numer studenta. Sprobuj ponownie." << endl;
                continue;
            }
            cout << "Podaj numer przedmiotu [1-4]: ";
            cin >> subjectNum;
            if (subjectNum < 1 || subjectNum > 4) {
                cout << "Niepoprawny numer przedmiotu. Sprobuj ponownie." << endl;
                continue;
            }
            break;
        }

        // Wyswietla ocene studenta z wybranego przedmiotu
        cout << "Ocena studenta " << students[studentNum-1].name << " z ";
        switch (subjectNum) {
            case 1:
                cout << "informatyki";
                break;
            case 2:
                cout << "matematyki";
                break;
            case 3:
                cout << "biologii";
                break;
            case 4:
                cout << "jezyka polskiego";
                break;
        }
        cout << " to " << students[studentNum-1].grades[subjectNum-1] << "." << endl;

        howManyQuestions--;
    }

    return 0;
}
