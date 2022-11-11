#include <iostream>

#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> v = { 1,1,2,5,6,1,2,4 };

    std::cout << "[IN]: ";
    for (const auto& i : v) {
        std::cout << i << ' ';
    }std::cout << '\n';

    std::sort(v.begin(), v.end()); 
    auto it = std::unique(v.begin(), v.end());
    v.erase(it, v.end());

    std::cout << "[OUT]: ";
    for (const auto& i : v) {
        std::cout << i << ' ';
    }
    return 0;
}