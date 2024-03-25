//3.26 page 25

#include <iostream>

int foo()
{
    return 0;
}
int main()
{
    int ret = foo();
    
    if (ret==0) // 기존에 이렇게 했어야 하는애를
    {        
    }
    
    //C++17
    if(int ret=foo(); ret==0) // C++17 부터는 한줄로 만들수 있음

    switch (int n = foo();n)

    {
        case 1 : break;
    }

    //C++20  부터는 range-for 도 가능
    for( int x[3] = {1,2,3} ; auto n : x)
    {

    }
    //while( int cnt = 0 ; cnt < 10) // error

}