/* 
# 7 suffix return type 
3/18 p.22
*/ 
#include <iostream>
template<class T>
T add(T a, T b){
    return a+b;
}

int main(){
    std::cout << add<int>(1,2) << std::endl;
    std::cout << add(1,2) << std::endl;
    std::cout << add(1.2, 2.1) << std::endl;

    std::cout << add(1, 2.1) << std::endl; // 얘는 컴파일 에러. 인자를 보고 추론을 못함. 앞 뒤 타입이 다르기때문
    std::cout << add<double> (1.2, 2.1) << std::endl; // 문제없음. T를 double로 보라고 지정해줌. 
}

//솔루션
// decltpye : 괄호 안에 있는 계산값의 타입을 보고, 정해라. 
template<class T1, class T2>

// decltype(a + b) add(T1 a, T2 b) // 에러. 선언이 안되어있음
auto add(T1 a, T2 b) -> decltype(a+b) // 문제없음.
{
    return a+b;
}

int main()
{
    std::cout << add(1, 2.1) << std::endl; //문제없음
}

auto add(T1 a, T2 b) // c++ 14 부터는 리턴값 안적어줘도 알아서 판단 가능
{
    return a+b;
}