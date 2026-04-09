#pragma once
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdexcept>

class Span
{
private:
    std::vector<int> data;
    unsigned int maxSize;

public:
    Span(unsigned int a);
    Span(const Span& other);
    Span& operator=(const Span& other);
    ~Span();

    void addNumber(int a);
    int shortestSpan() const;
    int longestSpan() const;

    template <typename Iterator>
    void addNumber(Iterator begin, Iterator end);
};

template <typename Iterator>
void Span::addNumber(Iterator begin, Iterator end)
{
    size_t distance = std::distance(begin, end);

    if (data.size() + distance > maxSize)
        throw std::runtime_error("span is full");

    while (begin != end)
    {
        data.push_back(*begin);
        ++begin;
    }
}