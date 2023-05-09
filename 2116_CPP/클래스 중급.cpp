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
        cout << "MString ������ ȣ�� �Ϸ�" << endl;
    }

    unsigned int size() { return size_; }
    char* c_str() { return c_str_; }
    
    // �Ҹ���(destructor)
    ~MString() {
        // �����ڿ� �����Ҵ��� ������ ����
        delete[] c_str_;
        cout << "MString �Ҹ��� ȣ�� �Ϸ�" << endl;

    }
private:
    int size_; // ���ڿ��� ����
    char* c_str_; // ���ڿ��� ����Ű�� �ּ�, c_str_ ���°� ��Ģ
};

int main() 
{
 
    MString str1 = MString("Aitai");
    cout << str1.c_str() << endl;


    return 0;
}

