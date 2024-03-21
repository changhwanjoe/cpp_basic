//3.21 chapter 10 Lamda expression

#include <algorithm>
#include <print>
int main()
{
    int x[5] = {1,3,5,2,4};
    std::sort(x, x+5); // 정렬하고자 하는 구간의 시간과 끝 '다음'을 나타내는 반복자(주소) 전달

    for(int i=0; i<5; i++){
        std::println("{}",x[i]);
    }

    //////////////
    /*
    C++ constraint algorithm
    c++20부터 새로 제공되는 형태의 알고리즘
    컨테이너 이름도 전달 가능
    std::ranges namespace안에 제공 */
    std::ranges::sort(x,x+5); //
    std::ranges::sort(x); // 배열의 이름을 직접 넣어서 편하다. C++ 20에서만 
}
