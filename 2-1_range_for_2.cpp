//3.25 page 25
#include <iostream>
#include <ranges> // cpp 20만 가능
bool is_odd_number(int n)
{
    return n % 2==1;
}
int main()
{
    int x[10] ={1,2,3,4,5,6,7,8,9,10};
    for( auto e : x ) 
    for( auto e : std::views::reverse(x) ) // 이렇게 하면 거꾸로 나옴 
    for( auto e : std::views::take(x,3 ) ) // 3개만 고름 ,1,2,3,
    for( auto e : std::views::reverse(std::views::take(x,3 )) ) // 3,2,1 3개만 골라서 뒤집음 
    for( auto e : std::views::drop(x,3 )) // 4 5 6 7 8 9 10 3개만 떨어뜨림 
    for( auto e : std::views::filter(x, 함수 ))  // 하나하나씩 함수에 넣어줌 
    for( auto e : std::views::filter(x, is_odd_number ))  // 1.3.5.7,9
    for( auto e : std::views::filter(x, [](int n){ return n % 2==1; } ))  // 1.3.5.7,9
    {
        std::cout<< e <<", ";       
    }
    std::cout <<std::endl;
  
}