//3.25 page 26

//동적 메모리 할당
#include <iostream>
#include <cstdlib>

int main()
{
    //C에서의 동적할당
    int* p1 = (int*)malloc(sizeof(int));
    free(p1);

    // c++ 에서의 동적할당
    int* p2 = new int; 
    delete p2;

    // 여러개 한번에 할당할 때 
    int* p3 = new int[10];
    delete[] p3;

    //------------ three way comaprison --------------------------
    //C++ 20 부터 
    int n1 = 20, n2 = 20;
    bool b1 = (n1<n2);

    auto ret (n1 <=> n2); //C++ 20;
    //ret 이 0이면 같다. ret>0  n1> n2 이다. ret<0 이면 n1<n2
    if (ret == 0)
        std :: cout << "n1 == n2" << std::endl;

    else if (ret>0)
        std :: cout << "n1 > n2" << std::endl;

    else if (ret<0)
        std :: cout << "n1 < n2" << std::endl;
    
    std::cout<<typeid(ret).name() << std::endl; // strong_ordering 이라는 구조체. 화면출력은 안되고 0하고의 크기 비교만 가능함. 
}