#include <iostream>

using namespace std;

void ���϶�2��(int& num) {

	num += 2;
}
int main(void) {

	int a = 3;
	���϶�2��(&a);

	cout << a << endl;

	return 0;
}
