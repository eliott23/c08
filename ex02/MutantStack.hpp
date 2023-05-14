#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <vector>

template <class T>
class MutantStack : public std::stack<int, std::vector<int> >
{
	public:
		// Constructors
		MutantStack();
		MutantStack(const MutantStack &copy);
		
		// Destructor
		~MutantStack();
		
		// Operators
		MutantStack & operator=(const MutantStack &assign);
		// Subject
		// typedef std::vector<T> iterator;
		std::vector<T>::iterator begin();
		
	private:
	std::vector<T> &u_vec;
};

# include "MutantStack.tpp"

#endif