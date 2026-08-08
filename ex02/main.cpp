#include <iostream>
#include <string>

int main(void)
{
	//string variable
	std::string string = "HI THIS IS BRAIN";
	//string reference
	std::string &stringREF = string;
	//string pointer
	std::string *stringPTR = &string;

	std::cout << "adress variable:" << &string << std::endl;
	std::cout << "adress reference:" << &stringREF << std::endl;
	std::cout << "adress pointer:" << stringPTR << std::endl;

	std::cout << std::endl;

	std::cout << "value variable:" << string << std::endl;
	std::cout << "value reference:" << stringREF << std::endl;
	std::cout << "value pointer:" << *stringPTR << std::endl;
	return (0);
}
