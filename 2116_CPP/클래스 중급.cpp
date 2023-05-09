#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring> // strlen, strcpy 함수를 사용하기 위해 필요

using namespace std;

class MString {
public:
    MString(const char* str) {
        unsigned int str_length = strlen(str);
        // 필요한 길이만큼 문자열 동적할당
        c_str_ = new char[str_length + 1]; // '/0' Null a문자 공간 +1
        strcpy(c_str_, str);
        cout << "MString 생성자 호출 완료" << endl;
    }

    unsigned int size() { return size_; }
    char* c_str() { return c_str_; }
    
    // 소멸자(destructor)
    ~MString() {
        // 생성자에 동적할당한 공간을 해제
        delete[] c_str_;
        cout << "MString 소멸자 호출 완료" << endl;

    }
private:
    int size_; // 문자열의 길이
    char* c_str_; // 문자열을 가리키는 주소, c_str_ 적는거 법칙
};

int main() 
{
 
    MString str1 = MString("Aitai");
    cout << str1.c_str() << endl;


    return 0;
}

