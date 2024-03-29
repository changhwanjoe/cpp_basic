﻿//3.21 chapter 10 Lamda expression
//page 23

#include <algorithm>
//#include <print>
#include <iostream>

//내림차순으로 정렬하기 위한 이항 함수 생성
bool cmp(int a, int b) { return a > b; }
int main()
{
        //////////////
    /*
    C++ constraint algorithm
    c++20부터 새로 제공되는 형태의 알고리즘
    컨테이너 이름도 전달 가능
    std::ranges namespace안에 제공
    std::ranges::sort(x,x+5); //
    std::ranges::sort(x); // 배열의 이름을 직접 넣어서 편하다. C++ 20에서만
    */
    
    int x[5] = { 1,3,5,2,4 };
    std::sort(x, x + 5); // 정렬하고자 하는 구간의 시간과 끝 '다음'을 나타내는 반복자(주소) 전달
    for (int i = 0; i < 5; i++) {
        std::cout << x[i];
    }
    //내림차순으로 정렬하고 싶다면? cmp 이항함수 생성
    std::cout << "내림차순 정렬" << std::endl; 
    std::sort(x, x + 5, cmp);
    //** 람다 표현식 으로 작성
    std::sort(x, x + 5, [](int a, int b) {return a > b; });
    std::sort(x, x + 5, [](int a, int b) ->bool {return a > b; }); // 후위 반환으로 리턴  표기법 


    for (int i = 0; i < 5; i++) {
        std::cout << x[i];
    }

}
