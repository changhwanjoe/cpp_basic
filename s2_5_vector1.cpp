#include <iostream>

int main()
{
	int arr[5]; // 일반적인 배열은 크기를 바꿀수가 없다.

	int* buff = new int[5];

	buff[0] = 10;
	//----------------------------------
	int* temp = new int[10];

	memcpy( temp, buff, sizeof(int)*5);
	delete[] buff;

	buff = temp;
	//----------------------------------
	buff[7] = 10;
	
	delete[] buff;
}