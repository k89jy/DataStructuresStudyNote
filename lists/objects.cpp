#include <iostream>
#include <string>



class People{

	public:
		int num;
		std::string city;

};

int main(){


	People people;
	people.num = 5000;
	people.city = "seoul";

	std::cout << people.city << std::endl;
	return 0;
}