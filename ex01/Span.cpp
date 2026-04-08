#pragma once
#include <vector>
#include <iostream>
#include <algorithm>

class Span
{
private:
    std::vector<int> data;
    unsigned int maxSize;
public:
    Span(int a);
    ~Span();
    void addNumber(int a);
    int shortestSpan() const;
    int longestSpan() const;

};

Span::Span(int a): maxSize(a)
{}

Span::~Span()
{}

void Span::addNumber(int a)
{
    if (data.size() > maxSize)
        throw std::runtime_error("span is full");
    data.push_back(a);
}

int Span::longestSpan() const
{
    if (data.size() < 2)
        throw std::runtime_error("the span not big");
    int max = *std::max_element(data.begin(), data.end());
    int min = *std::max_element(data.begin(), data.end());
    return (max - min);
}

int Span::shortestSpan() const
{
    if (data.size() < 2)
            throw std::runtime_error("Not enough elements");

        std::vector<int> tmp = data;
        std::sort(tmp.begin(), tmp.end());
    int minspan = tmp[1] - tmp[0];
    for (int i = 1; i < tmp.size(); i++)
    {
        int min = tmp[i] - tmp[i-1];
        if (min < minspan)
            minspan = min;
    }
    return minspan;
}