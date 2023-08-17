#include <iostream>

using namespace std;

// Shape 클래스
class Shape {
public:
    // Shape 클래스 생성자
    Shape(int pointCount, int x, int y) : pointCount(pointCount), x(x), y(y) {
        std::cout << "Shape 생성자 호출" << std::endl;
    }

    // Shape 클래스 가상함수 소멸자
    virtual ~Shape() {
        std::cout << "Shape 소멸자 호출" << std::endl;
    }

    // 꼭짓점의 개수
    int get_point_count() {
        return pointCount;
    }

    // 위치
    void get_position(int& xP, int& yP) {
        xP = x;
        yP = y;
    }

    // 그리기 (오버라이딩을 위함)
    virtual void draw() {
        std::cout << "그린다" << std::endl;
    }

private:
    int pointCount; // 꼭짓점 수
    int x, y;    // 위치
};

// 사각형 클래스 RectangleShape
class RectangleShape : public Shape { // 상속받음
public:
    // RectangleShape 클래스 생성자
    RectangleShape(double width, double height, double x, double y)
        : Shape(4, x, y), width(width), height(height) {
        std::cout << "RectangleShape 생성자 호출" << std::endl;
    }

    // RectangleShape 클래스 소멸자
    ~RectangleShape() {
        std::cout << "RectangleShape 소멸자 호출" << std::endl;
    }

    // 사각형을 그리기, Shape 클래스의 draw() 오버라이드
    void draw() override {
        cout << "사각형 그린다 - 너비: " << width << "/ 높이: " << height << endl;
    }

private:
    int width, height; // 너비, 높이
};

// 원 모양 클래스 CircleShape 정의
class CircleShape : public Shape {
public:
    // CircleShape 클래스 생성자
    CircleShape(double radius, double x, double y)
        : Shape(0, x, y), radius(radius) {
        std::cout << "CircleShape 생성자 호출" << std::endl;
    }

    // CircleShape 클래스 소멸자
    ~CircleShape() {
        std::cout << "CircleShape 소멸자 호출" << std::endl;
    }

    // 원을 그리는 함수, Shape 클래스의 draw()를 오버라이드
    void draw() override {
        cout << "원 그린다 - 반지름: " << radius << endl;
    }

private:
    int radius; // 반지름
};

int main() {
    // 사각형 객체 생성 & 그리기
    Shape* square = new RectangleShape(5, 3, 10, 10);
    square->draw();  
    delete square;   // RectangleShape 소멸자 호출

    // 원 객체 생성 & 그리기
    Shape* circle = new CircleShape(7, 20, 20);
    circle->draw();
    delete square;   // CircleShape 소멸자 호출

    return 0;
}
