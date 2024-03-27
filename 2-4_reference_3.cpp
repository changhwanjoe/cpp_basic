//3.28 page 28-2
// Reference 
#include <iostream>
#include <cstdlib>

void inc1(int n) { ++n; }
void inc2(int* p) { ++(*p); }
void inc3(int& r) { ++r; }

int main()
{
    int a =10, b=10, c=10;
    inc1(a);
    inc2(&b);
    //inc3(&c);
    inc3(c);

    std ::cout << a << std::endl; //10  call by value
    std ::cout << b << std::endl; //11  call by pointer
    std ::cout << c << std::endl; //11  call by reference

    
    
}