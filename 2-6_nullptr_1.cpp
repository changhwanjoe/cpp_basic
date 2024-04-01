// 4.1 page 30.
// 핵심 pointer 초기화 할때 nullptr 를 사용하자
int main()
{
	int  n1 = 0;
	int* p1 = 0; 	// ok

	int* p2 = 10; 	// 0이 아닌 다른 정수형은 포인터로 변환 될 수 없음 error
	int* p3 = n1; 	// error


	int* p4 = nullptr;    	// ok
	void(*p5)() = nullptr;	// 함수 포인터 초기화 할때도 ok

	int  n2 = nullptr; // 정수를 초기화 할 수는 없음. error
}
