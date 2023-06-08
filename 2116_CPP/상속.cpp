#include <iostream>

using namespace std;

class Animal {
public:
	Animal() { cout << "Animal 생성자()" << endl; } 
	~Animal() { cout << "Animal 소멸자()" << endl; }

};

class Rabbit : public Animal {
public :
	// 매개변수가 없는 부모 생성자가 자동으로 먼저 호출된다.
	Rabbit() { cout << "Rabbit 생성자()" << endl; }
	~Rabbit() { cout << "Rabbit 소멸자()" << endl; }
};

int main(void) {

	Rabbit* rabbit = new Rabbit();
	delete rabbit;
	// rabbit을 생성하기 위해서 Animal이 같이 호출된다.
	
}