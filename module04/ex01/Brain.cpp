#include "Brain.hpp"

Brain::Brain()
{
	const std::string ideas[] = {
		"Sleep",
		"Run",
		"Eat",
		"Eat even More",
		"Play",
		"Steal some food",
		"Eat the stolen food",
		"Walk",
		"Pee",
		"Poo",
		"Make noise"
	};

	std::cout << "Brain's Constructor" << std::endl;
	for (int i = 0; i < 100; ++i)
	{
		_ideas[i] = ideas[rand() % (sizeof(ideas) / sizeof(std::string))];
	}
}

Brain &Brain::operator=(const Brain &copy)
{
	for (int i = 0; i < 100; ++i)
		_ideas[i] = copy._ideas[i];
	return *this;
}


Brain::Brain(const Brain &copy)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = copy._ideas[i];
}

Brain::~Brain()
{
	std::cout << "Brain's Destructor" << std::endl;
}