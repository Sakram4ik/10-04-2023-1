
#include <iostream>
#include <string>

using namespace std;

class Person
{
	public:
		string name;
		int age;
		string lastName;
};
string FirstLastName(Person* person)
{
	return person->name + " " + person->lastName;
}
void print(Person* person)
{
	cout << FirstLastName(person) << " is " << person->age << " years old" << endl;
}


int main()
{
	Person person;
	person.name = "Marry";
	person.age = 23;
	person.lastName = "Harson";
	cout << "Meet " << person.name<< endl;
  print(&person);
	
	return 0;
}
