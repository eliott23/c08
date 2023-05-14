#include "MutantStack.hpp"

// Constructors
template <class T>
MutantStack<T>::MutantStack() : u_vec(this->c)
{
}

template <class T>
MutantStack<T>::MutantStack(const MutantStack &copy) : u_vec(copy->c)
{
}

// Destructor
template <class T>
MutantStack<T>::~MutantStack()
{
}

// Operators
template <class T>
MutantStack<T> & MutantStack<T>::operator=(const MutantStack &assign)
{
	u_vec = assign.container();
	return *this;
}

template <class T>
std::vector<T>::iterator MutantStack<T>::begin()
{
	return this->c.begin();
}