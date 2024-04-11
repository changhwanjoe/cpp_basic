// c++ 언어에서만 가능한 구조체 안에 함수 넣기.

#include <iostream>

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;

	int getArea()
	{
		return (right - left) * (bottom - top);
	}
	void draw()
	{
		std::cout << "Draw Rect" << std::endl;
	}
};
int main()
{
	Rect rc = {1, 1, 10, 10};

	int n = rc.getArea();
	rc.draw();
}