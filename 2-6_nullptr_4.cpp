// NULLPTR #2 
// 4.6 page 32
// 결론 : 포인터 변수를 초기화 할 때는 0 을 쓰지 말고 nullptr을 쓰자! 
#include <iostream>

template<class F, class T>
void call(F f, T arg)  // int arg = 0
{					   // (2) std::nullptr_t arg = nullptr
	f(arg);
}

void foo(int  a) {}
void goo(int* p) {}

int main()
{
	foo(10); // ok. 정수 0으로 초기화 가능
	goo(0);	 // ok. 포인터 0으로 초기화 가능

	call(foo, 10); 	// foo(10). ok
//	call(goo, 0);  	// goo(0)==> goo(arg)
					// error
	call(goo, nullptr); // ok. 포인터를 초기화 할 때 null ptr 쓰면 문제 없음. (1)
}