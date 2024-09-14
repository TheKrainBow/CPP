
#include "easyfind.hpp"

int		main(void) {
	std::vector<int> my_vector;
	std::list<int> my_list;

	//vector --> should output "Int found"
	for (int i = 0; i < 5; i++)
		my_vector.push_back(i);
	if (easyfind(my_vector, 2))
		std::cout << "Int found" << std::endl;
	else
		std::cout << "Int not found" << std::endl;

	//list --> should output "Int not found"
	for (int i = 0; i < 10; i++)
		my_list.push_back(i * 2);
	if (easyfind(my_list, 9))
		std::cout << "Int found" << std::endl;
	else
		std::cout << "Int not found" << std::endl;
	
	return (0);
}