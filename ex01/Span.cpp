#include "Span.hpp"

Span::Span(unsigned int a) : maxSize(a) {}

Span::Span(const Span& other)
{
    *this = other;
}

Span& Span::operator=(const Span& other)
{
    if (this != &other)
    {
        this->data = other.data;
        this->maxSize = other.maxSize;
    }
    return *this;
}

Span::~Span() {}

void Span::addNumber(int a)
{
    if (data.size() >= maxSize)
        throw std::runtime_error("span is full");
    data.push_back(a);
}

int Span::longestSpan() const
{
    if (data.size() < 2)
        throw std::runtime_error("Not enough elements");
    int max = *std::max_element(data.begin(), data.end());
    int min = *std::min_element(data.begin(), data.end());
    return (max - min);
}

int Span::shortestSpan() const
{
    if (data.size() < 2)
            throw std::runtime_error("Not enough elements");

        std::vector<int> tmp = data;
        std::sort(tmp.begin(), tmp.end());
    int minspan = tmp[1] - tmp[0];
    for (size_t i = 1; i < tmp.size(); i++)
    {
        int diff = tmp[i] - tmp[i - 1];
        if (diff < minspan)
            minspan = diff;
    }
    return minspan;
}
