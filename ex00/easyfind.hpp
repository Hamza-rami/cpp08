#pragma once
#include <algorithm>
#include <stdexcept>

template <typename T>
typename T::value_type easyfind(T array, int e)
{
    typename T::iterator it = std::find(array.begin(), array.end(), e);
    if (it != array.end())
        return *it;
    else
        throw std::runtime_error("Not found"); 
}