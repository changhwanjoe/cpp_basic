//#include "Person.h"
#include "s2_6_Person.h"
Person::Person(const std::string& n, int a)
{
	name = n;
	age = a;
}
void Person::setAge(int a) 
{
	 age = a;
}