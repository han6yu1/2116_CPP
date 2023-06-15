#include <iostream>
#include <string>

using namespace std;

class Person {
protected:

    string name;
    int hakbun;

public:
    Person(string n, int h) {
        name = n;
        hakbun = h;
    }

    void PrintShow() {
        cout << "�̸�: " << name << endl;
        cout << "�й�: " << hakbun << endl;
    }
};

class Student : public Person {
private:
    string university;

public:
    Student(string n, int h, string u) : Person(n, h) {
        university = u;
    }

    void PrintShow() {
        Person::PrintShow();
        cout << "���б�: " << university << endl;
    }
};

int main() {
    Student me("�Ѻ�", 2116, "������б�");
    me.PrintShow();

    return 0;
}