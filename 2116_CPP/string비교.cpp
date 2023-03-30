#include <iostream>
#include <string>

using namespace std;

int main(void) {
	char str1[50] = "Hello";
	char str2[50] = "World";

	// 문자가 뒷 순서일수록 크기가 큼 -> World 값이 더 크다

	const int s1_l = strlen(str1);
	const int s2_l = strlen(str2);
	
	// s1_1과 s2_1중에서 작은 값을 선택 ( C 스타일 ) 
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

	// s1_1과 s2_1중에서 작은 값을 선택 ( C++ 스타일 ) 
	// str2가 str1보다 사전(dictionary)에 더 늦게 나온다.
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