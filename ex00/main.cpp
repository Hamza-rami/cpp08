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
    v.push_back(4);

    std::list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);


    std::deque<int> d;
    d.push_back(1);
    d.push_back(2);
    try
    {
        std::cout << *easyfind(v, 4) << '\n';
        std::cout << *easyfind(l, 3) << '\n';
        std::cout << *easyfind(d, 4) << '\n';
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    
    return 0;
}
