#include <iostream>
#include <cstring>

using namespace std;


class Employee {

private:
	string name_;
	int id_;
	int age_;
	double salary_;

public:
	void set_name(string name) { name_ = name; }
	void set_id(int id) { id_ = id; }
	void set_age(int age) { age_ = age; }
	void set_salary(double salary) { salary_ = salary; }

	void PrintInfo() {
		cout << "이름 : " << name_ << endl;
		cout << "사번 : " << id_ << endl;
		cout << "나이 : " << age_ << endl;
		cout << "급여 : " << salary_ << endl;
	}
};

int main() {

	Employee* a = new Employee();
	a->set_name("임한별");
	a->set_id(1111);
	a->set_age(20);
	a->set_salary(600000);
	a->PrintInfo();
	delete a;

	Employee* b = new Employee[2];
	b[0].set_name("임은별");
	b[0].set_id(2222);
	b[0].set_age(22);
	b[0].set_salary(800000);

	b[1].set_name("임샛별");
	b[1].set_id(3333);
	b[1].set_age(26);
	b[1].set_salary(1000);

	for (int i = 0; i < 2; i++)
		b[i].PrintInfo();

	delete[] b;

	return 0;
}
