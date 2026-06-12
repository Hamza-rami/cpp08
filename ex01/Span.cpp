#include "Span.hpp"
#include <iostream>
Span::Span(unsigned int N) : _max(N)
{}

Span::~Span()
{
}

Span::Span(const Span &other): _max(other._max), nums(other.nums) 
{}

Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        _max = other._max;
        nums = other.nums;
    }
    return *this;
}

void Span::addNumber(long long N)
{
    if (nums.size() < _max)
        nums.push_back(N);
    else
        throw std::runtime_error("out of range");
}

long long Span::longestSpan()
{
    if (nums.size() <= 1)
        throw std::runtime_error("no element on vector");

    long long max_span = *std::max_element(nums.begin(), nums.end());
    long long min_span = *std::min_element(nums.begin(), nums.end());

    return (max_span - min_span);
}

long long Span::shortestSpan()
{
    if (nums.size() <= 1)
        throw std::runtime_error("no element on vector");
    
    std::sort(nums.begin(), nums.end());

    long long min_span = nums[1] - nums[0];

    for (size_t i = 1; i < nums.size() - 1; i++)
    {
        long long tmp = nums[i+1] - nums[i];
        if (tmp < min_span)
            min_span = tmp;
    }

    return min_span;
}