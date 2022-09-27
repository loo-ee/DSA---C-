#include <iostream>
// #include "StructConfig.h"
#include "Students.h"
#include "ClassConfig.h"
using namespace std;

ostream &operator <<(ostream &, const Student &);

char userInterface();
void addStudent(LinkedList<Student> &);
void viewRecords(LinkedList<Student> &);
void removeStudent(LinkedList<Student> &);
void insertStudent(LinkedList<Student> &);

int main() {
    char Choice;
    LinkedList<Student> ClassRecord;

    do {
        Choice = userInterface();

        switch (Choice) {
            case '1':
                addStudent(ClassRecord);
                break;

            case '2':
                removeStudent(ClassRecord);
                break;

            case '3':
                insertStudent(ClassRecord);
                break;

            case '4':
                if (ClassRecord.checkIfNull()) {
                    cout << "\n[Record is empty]\n";
                }
                else {
                    cout << "\n[Showing records]\n";
                    ClassRecord.displayList();
                }
                break;

            case '5':
                ClassRecord.clearList();
                cout << "\n[Records cleared successfully]\n";
                break;

            case '6':
                ClassRecord.clearList();
                cout << "\n[End of program]\n";
                break;

            default:
                cout << "\n[Error] Invalid input. Redirecting...\n";
        }
        cout << "\n____________________________________________________\n";

    } while (Choice != '6');

    return 0;
}

ostream &operator <<(ostream &stream, const Student &stud) {
        stream << "Name: \t" << stud.Name << "\n"
        << "Course: " << stud.Course << "\n"
        << "ID: \t" << stud.ID << "\n";
        return stream;
    }

char userInterface() {
    char choice;

    cout << "\n\t\t[SELECT ACTION]\n"
    << "[1] Add student\n"
    << "[2] Remove student\n"
    << "[3] Insert existing record\n"
    << "[4] View student information\n"
    << "[5] Clear records\n"
    << "[6] Exit\n"
    << ">> ";
    cin >> choice;

    return choice;
}

void insertStudent(LinkedList<Student> &list) {
    string name, course;
    int ID;

    cout << "\nEnter student's name: ";
    getline(cin >> ws, name);
    cout << "Enter course: ";
    getline(cin >> ws, course);

    cout << "\n[Showing records]\n";

    list.displayList();

    cout << "\nInsert ID of student: ";
    cin >> ID;

    Student insertStudent = Student(name, course, ID);
    list.insertList(insertStudent);

    cout << "\n[Insertion success]\n";
}

void removeStudent(LinkedList<Student> &list) {
    int ID;

    if (list.checkIfNull()) {
        cout << "\n[Record is empty]\n";
    }
    else {
        list.displayList();

        cout << "\n[Please input the ID of the student that you wish to remove]\n";
        cout << ">> ";
        cin >> ID;

        list.deleteFromList(ID);

        cout << "\n[Record deleted successfully]\n";
    }
}

void addStudent(LinkedList<Student> &list) {
    string name, course;
    static int ID = 0;

    cout << "\nEnter student's name: ";
    getline(cin >> ws, name);
    cout << "Enter course: ";
    getline(cin >> ws, course);

    ID++;
    Student newStudent = Student(name, course, ID);
    list.appendList(newStudent);

    cout << "\n[Registration completed]\n";
}
