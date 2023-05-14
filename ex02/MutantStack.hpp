#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <vector>

template <class T>
class MutantStack : public std::stack<T>
{
	public:
		// Constructors
		MutantStack();
		MutantStack(MutantStack &copy);
		
		// Destructor
		~MutantStack();
	
		// Operators
		MutantStack & operator=(const MutantStack &assign);

		// Subject
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin();
		iterator end();
		
	private:
	std::deque<T> &u_vec;
};

# include "MutantStack.tpp"

#endif