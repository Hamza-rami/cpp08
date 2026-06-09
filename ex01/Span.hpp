#pragma once
#include <vector>
#include <list>
#include <stdexcept>
#include <algorithm>
#include <climits>
class Span
{
private:
    unsigned int _max;
    std::vector<int> nums;
public:
    Span(unsigned int N);
    Span(const Span &other);
    Span &operator=(const Span &other);
    ~Span();
    void addNumber(int val);
    int shortestSpan();
    int longestSpan();
    template <typename Iterator>
    void addNumbers(Iterator begin, Iterator end)
    {
        while (begin != end)
        {
            addNumber(*begin);
            begin++;
        }

    }
};
