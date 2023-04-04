#include <string>
#include <iostream>

using namespace std;

// 여러 data들을 하나의 의미있는 구조체로 묶어서 관리
// 구조체, 클래스는 단어의 첫 글자를 대문자로 함
// class는 디폴트가 private (struct는 디폴트가 public)

struct Student {
	string name;
	string department;
	// id를 string으로 하지않는 이유
	// - 일반적으로 문자열은 정수데이터보다 많은 메모리 공간을 요구
	// - 정수는 비교연산을 한번에 할 수 있으나, 문자열은 글자수만큼 반복해 비교해야함
	int sex; // 가독성 & 유지보수를 위해 열거형(enum)으로 하는것을 추천, 0 : 남자 / 1 : 여자
	int id; 
	int age;

	// 생성자(constructor): 객체가 생설될 때 호출되는 함수
	// 생성자를 정의하지 않으면 자동으로 default로 매개변수가 없는 생성자가 정의된다.
	// Student(){} 
	
	// class는 멤버변수를 가질 수 있다
	void print() {
		cout << "** 학생정보 **" << endl << "- " << name << endl << "- " << sex << endl
			<< "- " << department << endl << "- " << id << endl << "- " << age << "세" << endl;
	}
};

int  main() {
	
	Student han;
	han.name = "임한별";
	han.sex = 1;
	han.department = "뉴미디어 소프트웨어과";
	han.id = 2116;
	han.age = 18;

	han.print();

	return 0;
}