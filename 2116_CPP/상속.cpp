#include <iostream>

using namespace std;

#define COLOR_RED 0
#define COLOR_GREEN 1
#define COLOR_BLUE 2

class Animal {
public:
	Animal(int color, int age) : color_(color), age_(age)
	{ 
		cout << "Animal 생성자()" << endl; 
	} 
	~Animal() { cout << "Animal 소멸자()" << endl; }
	void Bite() { cout << "Animal 물다" << endl; }
	void Eat() { cout << "Animal 먹다" << endl; }
	void Sleep() { cout << "Animal 자다" << endl; }

	void Roar(void) {
		cout << "Roar" << endl;
	}

private:
	int color_;
	int age_;
};

class Rabbit : public Animal {
public :
	// 부모생성자(Animal(color, age))가 먼저 호출
	Rabbit(int color, int age, int ear_length) : Animal(color, age), ear_length_(ear_length_)
	{
		cout << "Rabbit 생성자()" << endl; 
	}
	~Rabbit() { cout << "Rabbit 소멸자()" << endl; }

	// 함수 ovveride
	// 다형성(polymorphism) : 같은 함수 시그니처(반환형, 이름 매개변수가 모두 같은)가 다르게 실행되는 것
	void Roar(void) {
		cout << "깡총깡총" << endl;
	}
private:
	int ear_length_;
};

int main(void) {

	Animal* animal = new Animal(COLOR_BLUE, 30);
	animal->Roar(); // 동물 짖어
	Rabbit* rabbit = new Rabbit(COLOR_RED, 3, 20); 
	animal->Roar();

	delete rabbit;
	// rabbit을 생성하기 위해서 Animal이 같이 호출된다.
	
}