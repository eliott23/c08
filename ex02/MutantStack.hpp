#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <vector>

template <class T>
class MutantStack : public std::stack<T, std::vector<T> >
{
	public:
		// Constructors
		MutantStack();
		MutantStack(const MutantStack &copy);
		
		// Destructor
		~MutantStack();
		
		// Operators
		MutantStack & operator=(const MutantStack &assign);
		//Subject
		typedef std::vector<T> iterator;
		
	private:
	std::vector<T> &u_vec;
};

#endif