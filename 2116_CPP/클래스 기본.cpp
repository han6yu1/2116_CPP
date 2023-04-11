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
	 // // �����ڴ� ��ȯ���� ���� ������ �̸��� Ŭ������� ����.
	 // Student(){} 
	 // ������
	 Student() {
		name = "���Ѻ�";
		sex = 1;
		department = "���̵�� ����Ʈ�����";
		id = 2116;
		age = 18;
	 }

	 // class�� ��������� ���� �� �ִ�
	 void print() {
		 cout << "** �л����� **" << endl << "- " << name << endl << "- " << sex << endl
			 << "- " << department << endl << "- " << id << endl << "- " << age << "��" << endl;
	 }

	 void set_name(string _name) { name = _name; }
	 void set_id(int _id) { id = _id; }
	 void set_age(int _age) { age = _age; }
	 void set_sex(int _sex) { sex = _sex; }
	 void set_department(string _department) { department = _department; }

private:
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
	//Student stu1 = Student("������", 2100, 18, 1, "���̵�����Ʈ����");
	//Student stu3[2];
	//for (int i = 0; i < 2; i++) stu3[i].print();
	
	// �����Ҵ� : �޸��� ũ�Ⱑ ������ �� ������. heap����
	// c++�� �����Ҵ��� �ݵ�� delete�� �����ؾ� �޸� ������ ���� �� ����
	//Student* stu2 = new Student("�����", 3100, 31, 0, "��ۿ�����"); // �ڹٿ� �ٸ��� *�� ��
	//stu2->print(); // ���� ��ü�� ����� -> �� ����
	//delete stu2;
	//Student* stu4 = new Student[6];
	//for (int i = 0; i < 2; i++) stu4[i].print(); // �迭�� ��ҿ� �ش��ϴ� ��ü�� ����� .���� ǥ���Ѵ�.
	//delete[] stu4; // �迭 delete�ϱ�

	Student* stu4 = new Student[2];
	stu4[0].set_age(18);
	stu4[0].set_name("�Ѻ�");
	stu4[0].set_id(2116);
	stu4[0].set_sex(1);
	stu4[0].set_department("���̵�� ����Ʈ����");

	stu4[1].set_age(18);
	stu4[1].set_name("����");
	stu4[1].set_id(2118);
	stu4[1].set_sex(0);
	stu4[1].set_department("���̵�� ����Ʈ����");

	return 0;
}