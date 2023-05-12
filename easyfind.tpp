#include <iostream>
#include <vector>

template <class T>
void    easyfind(T container, int i)
{
    std::exception e;
    if (container.end() == std::find(container.begin(), container.end(), i))
        throw e;
    else
        std::cout << "element found!" << std::endl;
}
