#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring> // strlen, strcpy �Լ��� ����ϱ� ���� �ʿ�

using namespace std;

class MString {
public:
    MString(const char* str) {
        unsigned int str_length = strlen(str);
        // �ʿ��� ���̸�ŭ ���ڿ� �����Ҵ�
        c_str_ = new char[str_length + 1]; // '/0' Null a���� ���� +1
        strcpy(c_str_, str);
    }

    unsigned int size() { return size_; }
    char* c_str() { return c_str_; }
    
    // �Ҹ���(destructor)
    ~MString() {
        // �����ڿ� �����Ҵ��� ������ ����
        delete[] c_str_;

    }
private:
    int size_; // ���ڿ��� ����
    char* c_str_; // ���ڿ��� ����Ű�� �ּ�, c_str_ ���°� ��Ģ
};

int main() 
{
 
    // new�� �����Ҵ��� ������ �ݵ�� delete�� �������Ѿ� ��
    // ���� �׷��� ������ �޸𸮰� �����ȴ�
    MString* str = new MString("Aitai 2-1");

    cout << str -> c_str() << endl;

    // str�� ���� delete�� ����Ǿ�����, str->c_str_�� ���� delete�� ������� ����
    // TODO : �̸� delete ���ִ� �Ҹ���(destructor)�� �����ϱ�
    delete str;


    return 0;
}

