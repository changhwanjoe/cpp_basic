// NULLPTR #2 
// 4.6 page 33
// 결론 : 모든 종류의 포인터는 초기화에 사용 가능
// bool 변수의 직접 초기화(if문에 넣을수 있다) 에 사용이 가능. 

int main()
{
	int*    p1 = nullptr; // ok
	double* p2 = nullptr; // ok

	int n1 = nullptr;	// error
	int n2{nullptr};	// error

	bool b1 = nullptr;	// error 복사 초기화는 에러
	bool b2{nullptr};	// ok 직접 초기화는 가능. 

	if ( nullptr ) {}	// ok . if 문 안의 요소는 직접 초기화를 가능하게 해야함. 
}
