#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main()
{
     std::vector<int> myVector;
     myVector.push_back(1);
     myVector.push_back(2);
     myVector.push_back(3);
     try{
        easyfind(myVector, 5);
     }
     catch (...)
     {
        std::cout << "ooops" << std::endl;
     }
    easyfind(myVector, 2);
}