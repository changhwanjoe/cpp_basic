//4.1 page 29
#include <iostream>
#include <cstdlib>
#include <algorithm> // 만들필요 없음

// c언어 버전
void swap(int* p1, int* p2){
    int temp = *p1;
    *p1 = *p2 ;
    *p2= temp;    
}
//c++버전
void swap(int& r1, int& r2){
    int temp = r1;
    r1 = r2 ;
    r2= temp;    
}

//템플릿으로 발전시킴
namespace utils
{ 
    template<class T>
    inline void swap(T& r1, T& r2)
    {
        T temp =r1;
        r1=r2;
        r2=temp;
    }
}
int main()
{
    int x= 10, y=20;
    //swap(&x, &y);  C언어버전
    swap(x,y);
    utils::swap(x,y);
    std::swap(x,y); // algorithm 에 들어있음 사실 
    std::cout<< x << y<<std::endl;
  
    
}