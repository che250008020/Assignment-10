#include <iostream>
#include <string>
using namespace std;

struct Marks {
    float math;
    float science;
    float english;
};

struct Student {
    int rollNo;
    string name;
    Marks marks;
    float average;
};

int main() {
    Student s[5];

    for (int i = 0; i < 5; i++) {
        cout << "\nEnter details of student " << i + 1 << ":\n";
        cout << "Roll No: ";
        cin >> s[i].rollNo;
        cout << "Name: ";
        cin >> s[i].name;
        cout << "Marks in Math: ";
        cin >> s[i].marks.math;
        cout << "Marks in Science: ";
        cin >> s[i].marks.science;
        cout << "Marks in English: ";
        cin >> s[i].marks.english;

        s[i].average = (s[i].marks.math + s[i].marks.science + s[i].marks.english) / 3;
    }
    int highest = 0, lowest = 0;

    for (int i = 1; i < 5; i++) {
        if (s[i].average > s[highest].average)
            highest = i;
        if (s[i].average < s[lowest].average)
            lowest = i;
    }

    cout << "\nStudent with highest average marks:\n";
    cout << "Roll No: " << s[highest].rollNo << "\nName: " << s[highest].name
         << "\nAverage: " << s[highest].average << endl;

    cout << "\nStudent with lowest average marks:\n";
    cout << "Roll No: " << s[lowest].rollNo << "\nName: " << s[lowest].name
         << "\nAverage: " << s[lowest].average << endl;

    return 0;
}
