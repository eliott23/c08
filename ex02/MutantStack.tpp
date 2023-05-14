#include "MutantStack.hpp"

// Constructors
template <class T>
MutantStack<T>::MutantStack() : u_vec(this->c)
{
}

template <class T>
MutantStack<T>::MutantStack(MutantStack &copy) : u_vec(copy.c)
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
	this->u_vec = assign.c;
	return *this;
}

template <class T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return this->c.begin();
}

template <class T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (this->c.end());
}