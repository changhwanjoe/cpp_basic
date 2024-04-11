//03.2 object oriented programming
// constructor, destructor
#include <iostream>
#include <string>

class Person
{
private:
	std::string name;
	int         age;

public:
	Person() //생성자
	{
		name = "kim";
		age = 20;
		std::cout << "Constructor"
						 << std::endl;
	}
	~Person() // 소멸자. 객체가 파괴될때
	{
		std::cout << "Destructor" << std::endl;
	}
};

int main()
{
	Person p;
	std::cout << "____" << std::endl;

}




