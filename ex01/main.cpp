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
    std::cout << mySpan.shortestSpan() << std::endl;
    std::cout << mySpan.longestSpan() << std::endl;
}