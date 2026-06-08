#include "easyfind.hpp"
#include <ostream>
#include <vector>


int main()
{

    std::vector<int> h = {1, 2, 3, 4};
    try
    {
        std::cout << easyfind(h, 4);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    
    return 0;
}
