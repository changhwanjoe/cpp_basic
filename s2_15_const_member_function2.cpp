#include <iostream>

class Point
{
public:
	int xpos, ypos;

	Point(int x, int y) : xpos{x}, ypos{y} {}

	void set(int x, int y) 
	{
		xpos = x;
		ypos = y;
	}
	void print() const // 멤버 변수 값 바꾸지 않겠다. 호출 할 수 있게 해달라.
	{
//		xpos = 10; // error 바꿀수 없음
		std::cout << xpos << ", " << ypos << std::endl;
	}
};
int main()
{
	const Point pt(1, 2);

//	pt.set(10, 20); // error

	pt.print();     // ok
}
