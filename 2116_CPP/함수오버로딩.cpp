#include <iostream>

using namespace std;
// 함수 오버로딩을 해서 함수이름을 간결하겍 할 수 있다.
// 함수 오버로딩은 함수이름이 같다. 하지만 매개변수가 다르다 (중요)

int sum_int(int a, int b) {

	return a + b;
}

float sum_float(float a, float b) {

	return a + b;
}

int main(void) {
	cout << sum_int(1, 2) << endl;
	cout << sum_float(1.1f, 2.2f) << endl;
	return 0;
}