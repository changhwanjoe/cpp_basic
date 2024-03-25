//3.25 page 25
#include <iostream>

int main()
{
    int x[10] ={1,2,3,4,5,6,7,8,9,10};

    for (int i=0; i<10;i++){
        std::cout<<x[i]<<", ";       
    }
    // 문제점 배열의 크기가 바뀌면 문제생김
    // C 적인 접근법
    for (int i=0; i< sizeof(x)/ sizeof(x[0]);i++){
        std::cout<<x[i]<<", ";       
    }

    // C++ 에서는 배열의 크기를 구하는 C++ 표준함수. but cpp 17ㅜ터 지원 
    for (int i=0; i < std::size(x); i++){ 
        std::cout<<x[i]<<", ";       
    }

    // cpp 새로운 for 문 등장 
    //for(int e : x ) 
    for( auto e : x ) 
    {
        std::cout<< e <<", ";       
    }
    std::cout <<std::endl;

   
}