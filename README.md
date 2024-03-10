# cpp_basic
this repo is for studying cpp


# Variable3, string
문자열 복사 시 
char s1[] = "abcd";
char s2[5];

srncpy_s(s2,s1); // c언어의  문자 복사 

비교시 
strcmp(s2,s1) == 0 // c 언어의 문자 비교

C++ 에서는 string 이란 class문법의 사용자 정의 타입이 존재.

이하 C++문법
#include <string>
std::sting s1 = "abcd";
std::string s2;

s2=s1; // OK

if s2==s1 // OK

#새로 생긴 타입
bool

# 함수1.디폴트 파라미터
C++만의 함수 특징

# type을 이용한 함수 오버로딩
int square(int a){}
double square(doublea a){}
이렇게 여러개 만드는게 비효율적이므로 

// 템플릿 인스턴스화
template<typename T>
T square(T a){}

int main(void){
square<int>(3);
square<double>(3.4);
이렇게 하나만 만들어둔다  

