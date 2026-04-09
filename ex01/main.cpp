#include "Span.hpp"

int main()
{
Span sp(5);

std::vector<int> v;
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
v.push_back(5);

sp.addNumber(v.begin(), v.end());
std::cout << sp.longestSpan() << std::endl;
std::cout << sp.shortestSpan() << std::endl;
}