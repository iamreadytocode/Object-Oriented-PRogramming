#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Book;

class ReadData {
public:
    void readingData(Book data[]);
};

class Book {
    friend class ReadData;
public:
    string ISBN;
    string BookName;
    string AuthorName;
    string PublishYear;
};

void ReadData::readingData(Book data[]) {
    ifstream file("book.txt");
    if (file.is_open()) {
        int i = 0;
        while (i < 10 && !file.eof()) {
            file >> data[i].ISBN >> data[i].BookName >> data[i].AuthorName >> data[i].PublishYear;
            i++;
        }
        file.close();
    }
}

int main() {
    Book data[10];
    ReadData rd;
    rd.readingData(data);

    // Check for duplicate ISBN
    bool duplicate = false;
    cout << "Duplicate ISBN numbers:" << endl;
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (data[i].ISBN == data[j].ISBN) {
                duplicate = true;
                cout << data[i].ISBN << endl;
            }
        }
    }
    if (!duplicate) {
        cout << "No duplicate books found." << endl;
    }

    return 0;
}
