#include <iostream>
#include <string>

using namespace std;

int main(void) {
	char str1[50] = "Hello";
	char str2[50] = "World";

	// ���ڰ� �� �����ϼ��� ũ�Ⱑ ŭ -> World ���� �� ũ��

	const int s1_l = strlen(str1);
	const int s2_l = strlen(str2);
	
	// s1_1�� s2_1�߿��� ���� ���� ���� ( C ��Ÿ�� ) 
	const int l = s1_l < s2_l ? s1_l : s2_l;

	for (int i = 0; i < l; i++) {
		if (str1[i] < str2[i]) {
			printf("str2 > str1 \n"); 
			break;
		}
		else if (str1[i] > str2[i]) {
			printf("str1 > str2 \n");
			break;
		}
	}

	// s1_1�� s2_1�߿��� ���� ���� ���� ( C++ ��Ÿ�� ) 
	// str2�� str1���� ����(dictionary)�� �� �ʰ� ���´�.
	if (str2 > str1) {
		cout << "str2 > str1";
	}
	else if (str2 < str1) {
		cout << "str2 < str1";
	}
	else {
		cout << "str2 == str1";
	}
		
		
	return 0;
}