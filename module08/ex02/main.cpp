#include "MutantStack.hpp"

#include <iostream>
#include <string>
#include <list>

# define WHITE "\033[0m"
# define BWHITE "\033[1;37m"
# define BGRAY "\033[1;29m"
# define BBLACK "\033[1;30m"
# define BRED "\033[1;31m"
# define BGREEN "\033[1;32m"
# define BYELLOW "\033[1;33m"
# define BBLUE "\033[1;34m"
# define BPURPLE "\033[1;35m"
# define BCYAN "\033[1;36m"

void clearScreen(void)
{
	for (int i = 0 ; i < 70; i++)
		std::cout << std::endl;
}

void iteratorsTests(MutantStack<int> &mstack, std::list<int> &compList)
{
	std::string temp;
	std::cout << std::endl << "🌀 Testing normal iterators 🌀" << std::endl;
	std::cout << std::endl << "⏬ This is "BGREEN"MStack"BBLUE" ⏬" << std::endl;
	for (MutantStack<int>::iterator it = mstack.begin() ; it != mstack.end() ; it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	for (std::list<int>::iterator it = compList.begin() ; it != compList.end() ; it++)
		std::cout << *it << " ";
	std::cout << std::endl << "⏫ This is "BPURPLE"compList"BBLUE" ⏫" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl << "⏰ Press Enter to Continue ... ⏰" << std::endl;
	std::getline(std::cin, temp);
	clearScreen();
	std::cout << "🌀 srotareti esrever gnitseT 🌀" << std::endl;
	std::cout << std::endl << "⏬ "BGREEN"kcatSM"BBLUE" si sihT ⏬" << std::endl;
	for (MutantStack<int>::reverse_iterator it = mstack.rbegin() ; it != mstack.rend() ; it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	for (std::list<int>::reverse_iterator it = compList.rbegin() ; it != compList.rend() ; it++)
		std::cout << *it << " ";
	std::cout << std::endl << "⏫ "BPURPLE"tsiLpmoc"BBLUE" si sihT ⏫" << std::endl;
	std::cout << std::endl;
}

int main()
{
	clearScreen();

	std::cout << BBLUE"🌀 Creating a new MutantStack "BGREEN"mstack"BBLUE"! 🌀" << std::endl;
	MutantStack<int> mstack;
	std::string temp;

	std::cout << "➕ Pushing"BWHITE" 5 "BBLUE"to "BGREEN"mstack"BBLUE"! ➕" << std::endl;
	mstack.push(5);
	std::cout << "➕ Pushing"BWHITE" 17 "BBLUE"to "BGREEN"mstack"BBLUE"! ➕" << std::endl;
	mstack.push(17);
	std::cout << "🔝 Displaying top of "BGREEN"mstack"BBLUE": " << mstack.top() << " 🔝" << std::endl;
	std::cout << "➖ Poping top off the "BGREEN"mstack"BBLUE"! ➖" << std::endl;
	mstack.pop();
	std::cout << "📏 Displaying "BGREEN"mstack"BBLUE"'s size: " << mstack.size() << " 📏" << std::endl;
	std::cout << "➕ Pushing"BWHITE" 3 "BBLUE"to "BGREEN"mstack"BBLUE"! ➕" << std::endl;
	mstack.push(3);
	std::cout << "➕ Pushing"BWHITE" 5 "BBLUE"to "BGREEN"mstack"BBLUE"! ➕" << std::endl;
	mstack.push(5);
	std::cout << "➕ Pushing"BWHITE" 737 "BBLUE"to "BGREEN"mstack"BBLUE"! ➕" << std::endl;
	mstack.push(737);
	std::cout << "➕ Pushing"BWHITE" 0"BBLUE" to "BGREEN"mstack"BBLUE"! ➕" << std::endl;
	mstack.push(0);
	std::cout << "✅ "BGREEN"Mstack"BBLUE" is ready for tests! ✅" << std::endl;
	std::cout << std::endl << "🌀 Creating a new std::list "BPURPLE"compList"BBLUE" with same values as "BGREEN"mstack"BBLUE"! 🌀" << std::endl;
	std::list<int> compList;
	compList.push_back(5);
	compList.push_back(17);
	compList.pop_back();
	compList.push_back(3);
	compList.push_back(5);
	compList.push_back(737);
	compList.push_back(0);
	std::cout << std::endl << "✅ "BPURPLE"compList"BBLUE" is ready for tests! ✅" << std::endl;

	std::cout << std::endl << "⏰ Press Enter to Continue ... ⏰" << std::endl;
	std::getline(std::cin, temp);
	clearScreen();
	iteratorsTests(mstack, compList);
	std::cout << std::endl << "🎮  End of tests  🎮\033[37m" << std::endl;
}
