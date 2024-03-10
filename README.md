# cpp_basic
this repo is for studying cpp,

1. g++ 컴파일로 컴파일 하는법
g++ main.cpp 
g++ main.cpp -std=c++20
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



