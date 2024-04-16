#include <iostream>

class Rect
{
	int x, y, w, h;
	mutable int cnt = 0; // mutable member 데이터 : 상수 객체에서 값을 바꿀 수 있게 해달라
public:
	Rect(int x, int y, int w, int h)
		: x{x}, y{y}, w{w}, h{h} { } 

	int getArea() const 
	{
//		static int cnt = 0;
		++cnt;
		std::cout << cnt << std::endl;
		return w * h;
	}
};

int main()
{
	Rect r1(1,1,10,10);
	Rect r2(1,1,10,10);

	r1.getArea();
	r2.getArea();
	r2.getArea();
}