#include <string>
#include <iostream>

using namespace std;

struct Actor {
	string name;
	string dialog;
};



// ���� data���� �ϳ��� �ǹ��ִ� ����ü�� ��� ����
// ����ü, Ŭ������ �ܾ��� ù ���ڸ� �빮�ڷ� ��
// class�� ����Ʈ�� private (struct�� ����Ʈ�� public)

class Student {
 public :
	 // ������(constructor): ��ü�� ������ �� ȣ��Ǵ� �Լ�
	 // �����ڸ� �������� ������ �ڵ����� default�� �Ű������� ���� �����ڰ� ���ǵȴ�.
	 // Student(){} 
	 // ������
	 Student() {
		name = "���Ѻ�";
		sex = 1;
		department = "���̵�� ����Ʈ�����";
		id = 2116;
		age = 18;
	 }
	string name;
	string department;
	// id�� string���� �����ʴ� ����
	// - �Ϲ������� ���ڿ��� ���������ͺ��� ���� �޸� ������ �䱸
	// - ������ �񱳿����� �ѹ��� �� �� ������, ���ڿ��� ���ڼ���ŭ �ݺ��� ���ؾ���
	int sex; // ������ & ���������� ���� ������(enum)���� �ϴ°��� ��õ, 0 : ���� / 1 : ����
	int id; 
	int age;
	
	// : ������� �ʱ�ȭ�� �ϸ� const��������� �ʱ�ȭ �� �� �ִ�.
	Student(string _name, int _id, int _age, int _sex, string _department) 
		: name(_name), id(_id), age(_age), sex(_sex), department(_department)
	{

		

		// this�� �ϴ� ����
		// this : ��ü �ڱ��ڽ��� ����Ű�� ������
		// �Ű�������� ����������� ���Ƶ� ������ �����ϴ�. ����!
		this->id = id;
		this->name = name;
		this->age = age;
		this->sex = sex;
		this->department = department;

	}

	// class�� ��������� ���� �� �ִ�
	void print() {
		cout << "** �л����� **" << endl << "- " << name << endl << "- " << sex << endl
			<< "- " << department << endl << "- " << id << endl << "- " << age << "��" << endl;
	}
};

int  main() {
	
	struct Actor hb;
	hb.name = "���Ѻ�";
	hb.dialog = "�������..!!!";

	struct Actor* ptr = &hb;

	// ����������
	// ptr -> name, (*ptr).name ���� ���
	cout << "�̸� : " << ptr ->name << endl;
	cout << "���� : " << (*ptr).dialog << endl;


	// �����Ҵ� : �޸��� ũ�Ⱑ ������ �� �� ������
	Student stu1 = Student("������", 2100, 18, 1, "���̵�����Ʈ����");
	
	// �����Ҵ� : �޸��� ũ�Ⱑ ������ �� ������. heap����
	Student* stu2 = new Student("�����", 3100, 31, 0, "��ۿ�����"); // �ڹٿ� �ٸ��� *�� ��
	stu2->print();

	delete stu2;

	return 0;
}