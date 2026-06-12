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
    std::vector<long long> nums;
public:
    Span(unsigned int N);
    Span(const Span &other);
    Span &operator=(const Span &other);
    ~Span();
    void addNumber(long long val);
    long long shortestSpan();
    long long longestSpan();
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
