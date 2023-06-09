#include <string>
#include <iostream>

using namespace std;

struct Actor {
	string name;
	string dialog;
};



// 여러 data들을 하나의 의미있는 구조체로 묶어서 관리
// 구조체, 클래스는 단어의 첫 글자를 대문자로 함
// class는 디폴트가 private (struct는 디폴트가 public)

class Student {
 public :
	 // 생성자(constructor): 객체가 생설될 때 호출되는 함수
	 // 생성자를 정의하지 않으면 자동으로 default로 매개변수가 없는 생성자가 정의된다.
	 // // 생성자는 반환형을 쓰지 않으며 이름은 클래스명과 같다.
	 // Student(){} 
	 // 생성자
	 Student() {
		name = "임한별";
		sex = 1;
		department = "뉴미디어 소프트웨어과";
		id = 2116;
		age = 18;
	 }

	 // class는 멤버변수를 가질 수 있다
	 void print() {
		 cout << "** 학생정보 **" << endl << "- " << name << endl << "- " << sex << endl
			 << "- " << department << endl << "- " << id << endl << "- " << age << "세" << endl;
	 }

	 void set_name(string _name) { name = _name; }
	 void set_id(int _id) { id = _id; }
	 void set_age(int _age) { age = _age; }
	 void set_sex(int _sex) { sex = _sex; }
	 void set_department(string _department) { department = _department; }

private:
	string name;
	string department;
	// id를 string으로 하지않는 이유
	// - 일반적으로 문자열은 정수데이터보다 많은 메모리 공간을 요구
	// - 정수는 비교연산을 한번에 할 수 있으나, 문자열은 글자수만큼 반복해 비교해야함
	int sex; // 가독성 & 유지보수를 위해 열거형(enum)으로 하는것을 추천, 0 : 남자 / 1 : 여자
	int id; 
	int age;
	
	// : 멤버변수 초기화를 하면 const멤버변수도 초기화 할 수 있다.
	Student(string _name, int _id, int _age, int _sex, string _department) 
		: name(_name), id(_id), age(_age), sex(_sex), department(_department)
	{

		// this를 하는 이유
		// this : 객체 자기자신을 가리키는 포인터
		// 매개변수명과 멤버변수명이 같아도 구별이 가능하다. 장점!
		this->id = id;
		this->name = name;
		this->age = age;
		this->sex = sex;
		this->department = department;

	}

};

int  main() {
	
	struct Actor hb;
	hb.name = "임한별";
	hb.dialog = "진행시켜..!!!";

	struct Actor* ptr = &hb;

	// 역참조연산
	// ptr -> name, (*ptr).name 같은 결과
	cout << "이름 : " << ptr ->name << endl;
	cout << "명대사 : " << (*ptr).dialog << endl;


	// 정적할당 : 메모리의 크기가 컴파일 할 때 결정됨
	//Student stu1 = Student("뉴진스", 2100, 18, 1, "뉴미디어소프트웨어");
	//Student stu3[2];
	//for (int i = 0; i < 2; i++) stu3[i].print();
	
	// 동적할당 : 메모리의 크기가 실행할 때 결정됨. heap영역
	// c++의 동적할당은 반드시 delete로 해제해야 메모리 누수를 막을 수 있음
	//Student* stu2 = new Student("비수얼", 3100, 31, 0, "방송연예과"); // 자바와 다르게 *를 씀
	//stu2->print(); // 단일 객체는 멤버를 -> 로 접근
	//delete stu2;
	//Student* stu4 = new Student[6];
	//for (int i = 0; i < 2; i++) stu4[i].print(); // 배열의 요소에 해당하는 객체는 멤버를 .으로 표현한다.
	//delete[] stu4; // 배열 delete하기

	Student* stu4 = new Student[2];
	stu4[0].set_age(18);
	stu4[0].set_name("한별");
	stu4[0].set_id(2116);
	stu4[0].set_sex(1);
	stu4[0].set_department("뉴미디어 소프트웨어");

	stu4[1].set_age(18);
	stu4[1].set_name("혁수");
	stu4[1].set_id(2118);
	stu4[1].set_sex(0);
	stu4[1].set_department("뉴미디어 소프트웨어");

	return 0;
}


// p119 소멸자
// 객체가 메모리에서 해제될 때 호출되는 함수
// ~클래스명()
// 생성자처럼 반환형이 없음
// 생성자와 다르게 매개변수가 없다
// default로 컴ㅍ라일러가 자동으로 생성
// Student :: ~Student() {}