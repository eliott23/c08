# include <iostream>
# include <vector>
# include "Span.hpp"

int main()
{
    Span mySpan(3);
    mySpan.addNumber(4);
    mySpan.addNumber(8);
    mySpan.addNumber(9);
    try{
        mySpan.addNumber(8);
    }
    catch (std::exception)
    {
        std::cout << "Expected error" << std::endl;
    }
    Span anotherspan(10000);
	std::vector<int> k;
	for(int i = 0; i < 10000; i++)
		k.push_back(i);
    anotherspan.hyakuchki_canon(k);
    std::cout << anotherspan.shortestSpan() << std::endl;
    std::cout << anotherspan.longestSpan() << std::endl;
    try{
        anotherspan.addNumber(8);
    }
    catch (std::exception)
    {
        std::cout << "Expected error" << std::endl;
    }
}