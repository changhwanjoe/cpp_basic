// 4.1 page 30.
// pointer 0이 갖는 문제점 
int main()
#include <iostream>
/*
#ifdef __cplusplus
//	#define NULL 0
	#define NULL 0L
#else
	#define NULL (void*)0
#endif
*/
//함수 오버로딩
void foo(int   n) { std::cout << "int"   << std::endl;}
void foo(void* p) { std::cout << "void*" << std::endl;}

void goo(char* p) { std::cout << "char*" << std::endl;}

int main()
{
	foo(0);  		// foo(int) 버전으로 감 
	foo((void*)0);	// foo(void*) 버전으로 감 
//	foo(NULL);	// 

//	goo(0);    // ok
//	goo(NULL); // void* => char* 필요
			   // C 언어 : ok, C++ : error

	foo(nullptr);
	goo(nullptr);
}