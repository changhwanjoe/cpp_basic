//3.24 chapter 10 Lamda expression
//다른 예제

#include <algorithm>
#include <iostream>

//내림차순으로 정렬하기 위한 이항 함수 생성
void foo(int n)
{
    if (n < 40)
        std::cout << n << std::endl;
}

int main()
{
    int score[5] = { 95,35,63,72,22 };
    std::for_each(score, score + 5, foo); // 35. 22 출력, score 구간의 애들을 차례대로 전달. 이때 단항함수 foo 조건에 맞느애들 출력

    std::cout << "두번째 예제" << std::endl;
    int pass = 70;
    //점수가 pass미만을 출력하고 싶으면?
    std::for_each(score, score + 5, 
        [pass](int n) { if (n < pass) std::cout << n << std::endl;
        } );
}
