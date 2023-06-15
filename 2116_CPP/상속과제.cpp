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
        cout << "이름: " << name << endl;
        cout << "학번: " << hakbun << endl;
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
        cout << "대학교: " << university << endl;
    }
};

int main() {
    Student me("한별", 2116, "서울대학교");
    me.PrintShow();

    return 0;
}