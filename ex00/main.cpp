#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <deque>

int main()
{
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    std::list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);

    std::deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);

    try
    {
        std::cout << "Vector: " << *easyfind(v, 2) << std::endl;
        std::cout << "List: "   << *easyfind(l, 6) << std::endl;
        std::cout << "Deque: "  << *easyfind(d, 2) << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}