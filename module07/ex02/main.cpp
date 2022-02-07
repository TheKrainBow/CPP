#include "Array.hpp"
#include <iostream>
#include <cstdlib>
#define MAX_VAL 750

void MyTests(void)
{
	std::cout << "We create an Array of int a, of size 10" << std::endl;
	Array<int> a(10);
	std::cout << "a[5] = " << a[5] << std::endl;
	std::cout << "We assign a[5] = 2" << std::endl;
	a[5] = 2;
	std::cout << "a[5] = " << a[5] << std::endl;
	std::cout << "We create an Array of int b with operator =" << std::endl;
	Array<int> b = a;
	std::cout << "a[5] = " << a[5] << std::endl;
	std::cout << "b[5] = " << b[5] << std::endl;
	std::cout << "We assign b[5] = 4" << std::endl;
	b[5] = 4;
	std::cout << "a[5] = " << a[5] << std::endl;
	std::cout << "b[5] = " << b[5] << std::endl;
	std::cout << "We create an Array of int c with copy constructor" << std::endl;
	Array<int> c(a);
	std::cout << "a[5] = " << a[5] << std::endl;
	std::cout << "b[5] = " << b[5] << std::endl;
	std::cout << "c[5] = " << c[5] << std::endl;
	std::cout << "We assign a[5] = 42" << std::endl;
	a[5] = 42;
	std::cout << "a[5] = " << a[5] << std::endl;
	std::cout << "b[5] = " << b[5] << std::endl;
	std::cout << "c[5] = " << c[5] << std::endl;
	std::cout << "a.size() = " << a.size() << std::endl;
	std::cout << "b.size() = " << b.size() << std::endl;
	std::cout << "c.size() = " << c.size() << std::endl;
}

void SubjectTest()
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp;
        tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return ;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
        numbers[i] = rand();
    delete [] mirror;
}

int main(void)
{
	std::cout << std::endl << "🌀   My Tests   🌀" << std::endl;
	MyTests();
	std::cout << std::endl << "🌀   Subject Test   🌀" << std::endl;
	SubjectTest();
	std::cout << std::endl << "🎮  End of tests  🎮\033[37m" << std::endl;
}