#include <string>
#include <iostream>

using namespace std;

// ���� data���� �ϳ��� �ǹ��ִ� ����ü�� ��� ����

struct drink {
	string subun; 
	string chumga;
};

int  main() {

	// (struct drink) �ڷ��� (C++������ drink�� �ᵵ ��! �̰� C��� ��Ÿ��)
	struct drink �������;
	�������.subun = "�������";
	�������.chumga = "ŷ������";

	cout << "���� : " << �������.subun << " / ÷���� : " << �������.chumga << endl;


	return 0;
}