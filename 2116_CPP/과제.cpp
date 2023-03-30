#include <iostream>
#include <cstring>

using namespace std;

int main() {

	string str1 = "Hello";
	string str2 = "Hello";
	
	if (str1 == str2) {
		cout << str1 << " 같다 " << str2 << endl;
	}
	else {
		cout << str1 << " 다르다 " << str2 << endl;
	}
	
	return 0;

}
