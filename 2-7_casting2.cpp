//4.9 page 35
// C++ 캐스팅으로 바꾸기 
#include <cstdlib>

int main()
{
//	int* p1 = (int*)malloc(100);// ok
	int* p1 = static_cast<int*>(malloc(100));// ok
	free(p1);

	int n = 10;
//	double* p2 = (double*)&n;  // ok
	double* p2 = static_cast<double*>(&n);
						// error 위험한 캐스팅은 에러를 일으킴

	const int c = 10; // 상수 포인터를 비상수 가르키도록
//	int* p3 = (int*)&c; 	   // ok
	int* p3 = static_cast<int*>(&c);
						// error
}

	