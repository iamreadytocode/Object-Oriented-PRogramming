#include <iostream>
#include <cstring>
using namespace std;

class Course {
protected:
    char ename[50];
    double code;

public:
    Course() : ename(), code(0) {}
    Course(char na[], double c) : code(c) {
        strcpy(ename, na);
    }

    void get() {
        cout << "Enter course name: ";
        cin.getline(ename, 50);

        cout << "Enter course code: ";
        cin >> code;
        cin.ignore(); // Ignore the newline character
    }

    void show() const {
        cout << "Course Name: " << ename << endl;
        cout << "Course Code: " << code << endl;
    }
};

class Lab : public Course {
protected:
    int Lhour;

public:
    Lab() : Course(), Lhour(0) {}
    Lab(char na[], double c, int h) : Course(na, c), Lhour(h) {}

    void get() {
        Course::get(); // Call the base class get() function

        cout << "Enter lab credit hour: ";
        cin >> Lhour;
        cin.ignore(); // Ignore the newline character
    }

    void show() const {
        Course::show(); // Call the base class show() function
        cout << "Lab Credit Hour: " << Lhour << endl;
    }

    bool operator==(const Lab& dd) const {
        return (strcmp(ename, dd.ename) == 0 && code == dd.code && Lhour == dd.Lhour)?true:false;
    }
};

int main() {
    Lab lab1, lab2;

    cout << "Enter details for Lab 1:\n";
    lab1.get();

    cout << "\nEnter details for Lab 2:\n";
    lab2.get();

    cout << "\nDetails of Lab 1:\n";
    lab1.show();

    cout << "\nDetails of Lab 2:\n";
    lab2.show();

    if (lab1 == lab2)
    {
        cout << "\nBoth Lab courses are the same.\n";
    } else {
        cout << "\nBoth Lab courses are not the same.\n";
    }

    return 0;
}
