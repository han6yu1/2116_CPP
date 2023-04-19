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

        size_ = str_length; // size_ ���� �ʱ�ȭ
    }

    unsigned int size() { return size_; }
    char* c_str() { return c_str_; }

private:
    int size_; // ���ڿ��� ����
    char* c_str_; // ���ڿ��� ����Ű�� �ּ�, c_str_ ���°� ��Ģ
};

int main() {
    MString str = MString("yakitori tabetai");
    cout << str.c_str() << endl;
    return 0;
}
// �ƴ� �̰� �� ������??
