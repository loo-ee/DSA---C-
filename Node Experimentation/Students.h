#pragma once
#include <cstdlib>
using namespace std;

class Student {
private:
    string Name, Course;
    int ID;

public:
    Student() {}

    Student(string n, string c, int id) {
        this->Name = n;
        this->Course = c;
        this->ID = id;
    }

    void viewStudentInfo() {
        cout << "\nName: " << this->Name << "\n"
        << "Course: " << this->Course << "\n"
        << "ID: " << this->ID << "\n";
    }

    string getName() {
        return this->Name;
    }

    int getID() {
        return this->ID;
    }

    bool operator >(const int id) {
        bool status;

        if (ID > id) {
            status = true;
        }
        else {
            status = false;
        }
        return status;
    }

    bool operator <(const int id) {
        bool status;

        if (ID < id) {
            status = true;
        }
        else {
            status = false;
        }
        return status;
    }

    bool operator ==(const int id) {
        bool status;

        if (ID == id) {
            status = true;
        }
        else {
            status = false;
        }
        return status;
    }

    bool operator !=(const int id) {
        bool status;

        if (ID != id) {
            status = true;
        }
        else {
            status = false;
        }
        return status;
    }

    friend ostream &operator << (ostream &, const Student &);
};