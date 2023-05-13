#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>

class Span
{
	public:
		// Constructors
		Span();
		Span(const Span &copy);
		Span(unsigned int s);
		
		// Destructor
		~Span();
		
		// Operators
		Span & operator=(const Span &assign);

		//Subject
		void	addNumber(int i);
		int		shortestSpan();
		int		longestSpan();
		void	hyakuchki_canon(int *arr);
		//Getters
		std::vector<int> getcont() const;
		unsigned int  getSize() const;
		
	private:
	std::vector<int> cont;	
	unsigned int size;
};

#endif