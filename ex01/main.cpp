#include "Span.hpp"
#include <iostream>


int main()
{
    try
    {    
        Span sp = Span(10000);

        std::list<int> l;
        for (int i = 0; i < 10000; i++)
            l.push_back(i);

        sp.addNumbers(l.begin(), l.end());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
        return 0;
}