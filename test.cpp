#include <vector>
#include <iostream>

int main(int argc, char const *argv[])
{
    std::vector<int> v;

    std::cout << v.size() << " " << v.capacity() << "\n";
    v.push_back(1);
    std::cout << v.size() << " " << v.capacity() << "\n";
    v.push_back(2);
    std::cout << v.size() << " " << v.capacity() << "\n";
    v.push_back(3);
    std::cout << v.size() << " " << v.capacity() << "\n";
    v.push_back(3);
    std::cout << v.size() << " " << v.capacity() << "\n";
    v.push_back(3);
    std::cout << v.size() << " " << v.capacity() << "\n";
    return 0;
}
