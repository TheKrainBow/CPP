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

	std::cout << "🧠 Default Constructor" << std::endl;
	for (int i = 0; i < 100; ++i)
	{
		_ideas[i] = ideas[rand() % 11];
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
	*this = copy;
}

Brain::~Brain()
{
	std::cout << "🧠 Destructor" << std::endl;
}