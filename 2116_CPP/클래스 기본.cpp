#include <string>
#include <iostream>

using namespace std;

// ���� data���� �ϳ��� �ǹ��ִ� ����ü�� ��� ����
// ����ü, Ŭ������ �ܾ��� ù ���ڸ� �빮�ڷ� ��
// class�� ����Ʈ�� private (struct�� ����Ʈ�� public)

struct Student {
	string name;
	string department;
	// id�� string���� �����ʴ� ����
	// - �Ϲ������� ���ڿ��� ���������ͺ��� ���� �޸� ������ �䱸
	// - ������ �񱳿����� �ѹ��� �� �� ������, ���ڿ��� ���ڼ���ŭ �ݺ��� ���ؾ���
	int sex; // ������ & ���������� ���� ������(enum)���� �ϴ°��� ��õ, 0 : ���� / 1 : ����
	int id; 
	int age;
};

int  main() {

	Student han;
	han.name = "���Ѻ�";
	han.sex = 1;
	han.department = "���̵�� ����Ʈ�����";
	han.id = 2116;
	han.age = 18;

	cout << "** �л����� **" << endl << "- " << han.name << endl << "- " << han.sex << endl
		<< "- " << han.department << endl << "- " << han.id << endl << "- " << han.age << "��" << endl;

	return 0;
}