# cpp_basic
this repo is for studying cpp

1. g++ 컴파일로 컴파일 하는법
g++ main.cpp 
g++ main.cpp -std=c++20 // 뒤에 특정 버전을 넣어줄 수 있음
2. cl 컴파일러로 컴파일 하는법
cl sample.cpp /std:c++20 --> 특정 버전으로 
cl sample.cpp /std:c++latest -->최신 버전으로 

이 두개를 동시에 사용하기 위해 배치 파일을 만듬
강좌에서는 
build sample.cpp

하나의 소스를 g++ 과 cl 동시에 컴파일/실행하기 위한 배치파일
github.com/codenuri/common

# global name space
어떠한 이름공간에 포함되지 않은 공간
::init()

# max, min함수 
c++ 표준이 제공하는 함수 
<algorithm> 헤더에 들어있다
그런데 모든 표준은 std 안에 들어있음
std::max(10,20)
or
using namespace std;
max(10,20);
<alogirhm>내에 count라는 함수가 있어서
std::count 
count를 변수로 쓰면 문제발생

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

# 새로 생긴 타입
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
square<double>(3.4);}
이렇게 하나만 만들어둔다  

3/10 p.21
int add1(int a, int b) // 리턴값을 앞에 적어둠. 
{}

auto add2(int a, int b) ->int  //이런식으로 표기. 리턴값을 뒤에 적어줌. 
{
    return a+b; 
}

