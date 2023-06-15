#include <iostream>

using namespace std;

#define COLOR_RED 0
#define COLOR_GREEN 1
#define COLOR_BLUE 2

class Animal {
public:
	Animal(int color, int age) : color_(color), age_(age)
	{ 
		cout << "Animal ������()" << endl; 
	} 
	~Animal() { cout << "Animal �Ҹ���()" << endl; }
	void Bite() { cout << "Animal ����" << endl; }
	void Eat() { cout << "Animal �Դ�" << endl; }
	void Sleep() { cout << "Animal �ڴ�" << endl; }

	void Roar(void) {
		cout << "Roar" << endl;
	}

private:
	int color_;
	int age_;
};

class Rabbit : public Animal {
public :
	// �θ������(Animal(color, age))�� ���� ȣ��
	Rabbit(int color, int age, int ear_length) : Animal(color, age), ear_length_(ear_length_)
	{
		cout << "Rabbit ������()" << endl; 
	}
	~Rabbit() { cout << "Rabbit �Ҹ���()" << endl; }

	// �Լ� ovveride
	// ������(polymorphism) : ���� �Լ� �ñ״�ó(��ȯ��, �̸� �Ű������� ��� ����)�� �ٸ��� ����Ǵ� ��
	void Roar(void) {
		cout << "���ѱ���" << endl;
	}
private:
	int ear_length_;
};

int main(void) {

	Animal* animal = new Animal(COLOR_BLUE, 30);
	animal->Roar(); // ���� ¢��
	Rabbit* rabbit = new Rabbit(COLOR_RED, 3, 20); 
	animal->Roar();

	delete rabbit;
	// rabbit�� �����ϱ� ���ؼ� Animal�� ���� ȣ��ȴ�.
	
}