#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Tworzy strukt student z imieniem, nazwiskiem i numerem indeksu
struct Student {
    string name;
    string surname;
    int indexNumber{};
};

// Funkcja porównujaca do sortowania
bool sortAcreasingByIndexNumber(const Student& a, const Student& b) {
    return a.indexNumber < b.indexNumber;
}

int main() {
    // Tworzy wektor sutendów
    std::vector<Student> students;

    // Pobiera dane studenta i zapisuje go do wektora
    int numberOfStudents;
    cout << "Podaj liczbe studentow: ";
    cin >> numberOfStudents;
    for (int i = 0; i < numberOfStudents; i++) {
        Student s;
        cout << "Podaj imie studenta " << i + 1 << ": ";
        cin >> s.name;
        cout << "Podaj nazwisko studenta " << i + 1 << ": ";
        cin >> s.surname;
        cout << "Podaj numer indeksu studenta " << i + 1 << ": ";
        cin >> s.indexNumber;
        students.push_back(s);
        cout << endl;
    }

    // Wyświetla studentów
    cout << "Studenci przed sortowaniem: " << endl;
    for (const auto& student : students) {
        cout << student.name << " " << student.surname << " "<< student.indexNumber << endl;
    }
    cout << endl;

    // Sortuje wektor
    sort(students.begin(), students.end(), sortAcreasingByIndexNumber);

    // Wyświetla studentów
    cout << "Posortowani studenci: " << endl;
    for (const auto& student : students) {
        cout << student.name << " " << student.surname << " " << student.indexNumber << endl;
    }
    return 0;
}