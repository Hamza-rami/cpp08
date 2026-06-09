#pragma once 

#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{

public:
    MutantStack(){};
    ~MutantStack(){};
    typedef typename std::deque<T>::iterator iterator;
    typename std::deque<T>::iterator begin()
    {
        return this->c.begin();
    }
    typename std::deque<T>::iterator end()
    {
        return this->c.end();
    }

};
