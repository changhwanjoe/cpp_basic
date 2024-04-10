//page 36-2
// 4.5
// 상수의 주소를 상수가 아닌것에 담음
int main()
{
	const int c = 10;

	int* p1 = static_cast<int*>(&c); // error 위험함
	int* p2 = reinterpret_cast<int*>(&c); // error. 상수성을 제거할 수 없으므로.
	int* p3 = const_cast<int*>(&c); // ok 상수의 주소를 integer 포인터에 담고싶다.

//	*p3 = 20; // 혼란에 빠짐. 하지말것 
}