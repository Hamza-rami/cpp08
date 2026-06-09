#include "Span.hpp"

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

void Span::addNumber(int N)
{
    if (nums.size() < _max)
        nums.push_back(N);
    else
        throw std::runtime_error("out of range");
}

int Span::longestSpan()
{
    if (nums.size() <= 1)
        throw std::runtime_error("no element on vector");

    int max_span = *std::max_element(nums.begin(), nums.end());
    int min_span = *std::min_element(nums.begin(), nums.end());

    return (max_span - min_span);
}

int Span::shortestSpan()
{
    if (nums.size() <= 1)
        throw std::runtime_error("no element on vector");
    
    std::sort(nums.begin(), nums.end());
    int min_span = INT_MAX;

    for (size_t i = 0; i < nums.size() - 1; i++)
    {
        int tmp = nums[i+1] - nums[i];
        if (tmp < min_span)
            min_span = tmp;
    }

    return min_span;
}