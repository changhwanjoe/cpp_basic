//4.1 page 29-2 
// const reference
//foo 함수에서는 rc를 바꾸면 안된다 라는 조건이 있을때
struct Rect
{
	int left;
	int top;
	int right;
	int bottom;
};

//void foo( Rect r ) // 이렇게 하면 call by value . 원본을 수정하지 않겠다. 메모리에 대한 오버헤드 있음. 
void foo( const Rect& r ) // 참조로 받으면 오버헤드 없이 변수를 수정하지 않겠다는 
{
	r.left = 100; // 수정하려는 시도 error
}

int main()
{
	Rect rc = {1, 1, 5, 5};
	foo(rc);
}