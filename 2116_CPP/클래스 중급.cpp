#include <iostream>

using namespace std;

// 클래스 안에 문자열을 할당할 순 없고, 대신 포인터 변수를 넣음(불가능은 아닌데 아주 비효율적이다)
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
    int size_; // 문자열의 길이
    const char* c_str_; // 문자열을 가리키는 주소, c_str_ 적는거 법칙
};

int main() {
    MString str = MString("yakitori tabetai");
    cout << str.c_str() << endl;
    return 0;
}
