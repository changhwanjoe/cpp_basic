//3.25 page 28
// Reference 
#include <iostream>
#include <cstdlib>

int main()
{
    int n = 10;
    int* p = &n; // n의 주소를 가리키고 있는 p
    int& r =  n; // 레퍼런스. 

    r= 20;

    std ::cout << n << std::endl; //20
    std ::cout << &n << std::endl;
    std ::cout << &r << std::endl;
    
}