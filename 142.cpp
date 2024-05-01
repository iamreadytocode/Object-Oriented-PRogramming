//Write a program that creates a class Course with two data members, course name "ename" with type c- string (c-string is defined as an array of type char), and course
// code "code" with type double. This class also includes get() and show() member functions for input and output data members. From this class, create a drive class Lab.
//  This class contains additional data members for lab credit hour Lhour" with type integer. Drive class overrides the base class member functions. This class also
//   overloads the (==) operator for comparing two Lab objects. Define appropriate constructors of the classes and makes appropriate member functions as const member 
//   functions.
//Create two objects of the Lab class in main 0), inputs the values, and compare the objects. If the course name "DLD", "OOP" and course code are 101, 102 respectively
// with 04 credit hours then display a message in main ("Both Lab courses are same", otherwise display a message "Both Lab courses are not same". 103+03+03+01=10


#include <iostream>
#include <cstring>
using namespace std;

class Course {
private:
    char ename[50];
    double code;

public:
    Course():ename(""),code(0){}
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

    void show() {
        cout << "Course Name: " << ename << endl;
        cout << "Course Code: " << code << endl;
    }
};

class Lab : public Course {
private:
    int Lhour;

public:
    Lab() : Course(), Lhour(0) {}
    Lab(char na[], double c, int h) : Course(na, c), Lhour(h) {}

    void get() {
        Course::get(); // Call the base class get() function

        cout << "Enter lab credit hour: ";
        cin >> Lhour;
//        cin.ignore(); // Ignore the newline character
    }

    void show()  {
        Course::show(); // Call the base class show() function
        cout << "Lab Credit Hour: " << Lhour << endl;
    }

    bool operator==( Lab& other) {
        return (strcmp(ename, other.ename) == 0 && code == other.code && Lhour == other.Lhour);
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

    if (lab1 == lab2 && strcmp(lab1.ename, "DLD") == 0 && strcmp(lab2.ename, "OOP") == 0 && lab1.code == 101 && lab2.code == 102 && lab1.Lhour == 4) {
        cout << "\nBoth Lab courses are the same.\n";
    } else {
        cout << "\nBoth Lab courses are not the same.\n";
    }

    return 0;
}
