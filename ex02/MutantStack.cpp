#include "MutantStack.hpp"

// Constructors
template <class T>
MutantStack<T>::MutantStack() : u_vec(this->container())
{
}

template <class T>
MutantStack<T>::MutantStack(const MutantStack &copy) : u_vec(this->container())
{
	(void)copy;
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