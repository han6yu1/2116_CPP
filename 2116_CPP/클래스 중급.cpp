#include <iostream>

using namespace std;

// Ŭ���� �ȿ� ���ڿ��� �Ҵ��� �� ����, ��� ������ ������ ����(�Ұ����� �ƴѵ� ���� ��ȿ�����̴�)
#include <iostream>

using namespace std;

class MString {
public:
    MString(const char* str) {
        c_str_ = str;
        size_ = 0;
        while (str[size_]) {
            size_++;
        }
    }
    unsigned int size() { return size_; }
    const char* c_str() { return c_str_; }
private:
    int size_; // ���ڿ��� ����
    const char* c_str_; // ���ڿ��� ����Ű�� �ּ�, c_str_ ���°� ��Ģ
};

int main() {
    MString str = MString("yakitori tabetai");
    cout << str.c_str() << endl;
    return 0;
}
