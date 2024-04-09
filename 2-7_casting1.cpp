// 4.6 page 34
// explicit casting #1

#include <cstdlib>

int main()
{
	int* p1 = (int*)malloc(sizeof(int)*10); // C 방식의 캐스팅. 위험한 캐스팅
	free(p1);


	int n = 10;
//	double* p2 = &n; // error
	double* p2 = (double*)&n; // ok C스타일의 명시적 포인터는 cpp 컴파일러가 ok 한다. 
	// but 의도한건지 실수인지 알 수 없음.
	*p2 = 3.4;
//-----------------------
// 상수의 주소를 상수가 아닌것에 담게 된다면? 
//	const int c = 10;
	const int c = n;

//	int* p3 = &c; // error. 상수이므로 바꿀수 없음. 
	int* p3 = (int*)&c; // ok. C스타일의 캐스팅이 먹혀버림. 문제임. 
	
	*p3 = 20;
	std::cout << c << std::endl; 	// ??
	std::cout << *p3 << std::endl;  // ?
}
