// 03.2 Object Oriented Programming
// Private, public

#include <string>

//struct Person
class Person
{
//private:
	std::string name;
	int age;

public:
	void setAge(int value)
	{
		if ( value >= 1 && value < 150 )
			age = value;
	}
};

int main()
{
	Person p;
//	p.age = -10; // 실수로 잘못 넣었을때. error
	p.setAge(-10);
}