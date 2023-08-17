#include <iostream>

using namespace std;

// Shape Ŭ����
class Shape {
public:
    // Shape Ŭ���� ������
    Shape(int pointCount, int x, int y) : pointCount(pointCount), x(x), y(y) {
        std::cout << "Shape ������ ȣ��" << std::endl;
    }

    // Shape Ŭ���� �����Լ� �Ҹ���
    virtual ~Shape() {
        std::cout << "Shape �Ҹ��� ȣ��" << std::endl;
    }

    // �������� ����
    int get_point_count() {
        return pointCount;
    }

    // ��ġ
    void get_position(int& xP, int& yP) {
        xP = x;
        yP = y;
    }

    // �׸��� (�������̵��� ����)
    virtual void draw() {
        std::cout << "�׸���" << std::endl;
    }

private:
    int pointCount; // ������ ��
    int x, y;    // ��ġ
};

// �簢�� Ŭ���� RectangleShape
class RectangleShape : public Shape { // ��ӹ���
public:
    // RectangleShape Ŭ���� ������
    RectangleShape(double width, double height, double x, double y)
        : Shape(4, x, y), width(width), height(height) {
        std::cout << "RectangleShape ������ ȣ��" << std::endl;
    }

    // RectangleShape Ŭ���� �Ҹ���
    ~RectangleShape() {
        std::cout << "RectangleShape �Ҹ��� ȣ��" << std::endl;
    }

    // �簢���� �׸���, Shape Ŭ������ draw() �������̵�
    void draw() override {
        cout << "�簢�� �׸��� - �ʺ�: " << width << "/ ����: " << height << endl;
    }

private:
    int width, height; // �ʺ�, ����
};

// �� ��� Ŭ���� CircleShape ����
class CircleShape : public Shape {
public:
    // CircleShape Ŭ���� ������
    CircleShape(double radius, double x, double y)
        : Shape(0, x, y), radius(radius) {
        std::cout << "CircleShape ������ ȣ��" << std::endl;
    }

    // CircleShape Ŭ���� �Ҹ���
    ~CircleShape() {
        std::cout << "CircleShape �Ҹ��� ȣ��" << std::endl;
    }

    // ���� �׸��� �Լ�, Shape Ŭ������ draw()�� �������̵�
    void draw() override {
        cout << "�� �׸��� - ������: " << radius << endl;
    }

private:
    int radius; // ������
};

int main() {
    // �簢�� ��ü ���� & �׸���
    Shape* square = new RectangleShape(5, 3, 10, 10);
    square->draw();  
    delete square;   // RectangleShape �Ҹ��� ȣ��

    // �� ��ü ���� & �׸���
    Shape* circle = new CircleShape(7, 20, 20);
    circle->draw();
    delete square;   // CircleShape �Ҹ��� ȣ��

    return 0;
}
