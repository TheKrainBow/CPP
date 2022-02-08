#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack<T>();
		~MutantStack<T>();
		MutantStack<T>(const MutantStack& ref);
		MutantStack& operator = (const MutantStack& ref);

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin();
		iterator end();
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		const_iterator cbegin() const;
		const_iterator cend() const;

		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		reverse_iterator rbegin();
		reverse_iterator rend();
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
		const_reverse_iterator crbegin() const;
		const_reverse_iterator crend() const;
};

template <typename T>
MutantStack<T>::MutantStack(): std::stack<T>() {}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const &toCopy): std::stack<T>(toCopy) {}

template <typename T>
MutantStack<T>::~MutantStack(void) {}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack<T> const &toCopy) {
	std::stack<T>::operator=(toCopy);
	return (*this);
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() { return (std::stack<T>::c.begin()); }
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() { return (std::stack<T>::c.end()); }
template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin() { return (std::stack<T>::c.rbegin()); }
template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend() { return (std::stack<T>::c.rend()); }
template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cbegin() const { return (static_cast<const T>(std::stack<T>::c.begin())); }
template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cend() const { return (static_cast<const T>(std::stack<T>::c.end())); }
template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crbegin() const { return (static_cast<const T>(std::stack<T>::c.rbegin())); }
template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crend() const { return (static_cast<const T>(std::stack<T>::c.rend())); }
#endif