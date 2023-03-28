#include <iostream>

int main(void) {

	using namespace std; // 이름공간, 이거 하면 std 쓸 필요없음, 자주 쓸 일은 없음. 
						 // 다른 변수와의 중복을 피하고, std를 축약시키기 위함

	// std::cout : 출력을 위한 객체
	// << : 출력 연산자
	// std::endl:  개행(줄바꿈) 객체
	std::cout << "당장 진행시켜." << std::endl;

	int a = 2023;

	cout << "Hello World" << a << endl;

	return 0;
}