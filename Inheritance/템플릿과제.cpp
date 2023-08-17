#include <iostream>
#include <string>

using namespace std;

template <typename T>
T sum(T a, T b) {
	T z = a + b;
	
	return z;
}

int main() {
	cout << sum<int>(1, 2) << endl;
	cout << sum<double>(1, 2) << endl;
}