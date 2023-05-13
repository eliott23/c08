#include "Span.hpp"
		//Getters
std::vector<int> Span::getcont() const
{
	return cont;
}

unsigned int  Span::getSize() const
{
	return size;
}


// Constructors
Span::Span()
{
	size = 0;
}

Span::Span(const Span &copy)
{
	size = copy.getSize();
	cont = copy.getcont();
}

Span::Span(unsigned int s)
{
	size = s;
}

// Destructor
Span::~Span()
{
}

// Operators
Span & Span::operator=(const Span &assign)
{
	size = assign.getSize();
	cont = assign.getcont();
	return *this;
}

//Subject
void	Span::addNumber(int i)
{
	if (size)
	{
		cont.push_back(i);
		size--;
	}
	else
	{
		std::exception e;	
		throw e;
	}
}

int	Span::shortestSpan()
{
	std::vector<int>::iterator a = cont.begin();
	std::vector<int>::iterator b = a + 1;
	int	s_p = abs(*a - *b);

	while (a != cont.end())
	{
		b = a + 1;
		while (b != cont.end())
		{
			if (abs(*a - *b) < s_p)
				s_p = (abs(*a - *b));
			b++;
		}
		a++;
	}
	return (s_p);
}

int	Span::longestSpan()
{
	std::vector<int> tmp = cont;
	sort(tmp.begin(), tmp.end());
	int l_p = abs(*(tmp.begin()) - *(tmp.end() - 1));

	return (l_p);
}

void	Span::hyakuchki_canon(std::vector<int> k)
{
	size_t s = k.size();
	std::exception &e;
	if (s > size)
		throw e;
	cont.insert(cont.end(), k.begin(), k.end());
}