#include <iostream>
#include <vector>
#include <ranges>

// Define a Concept for types that can be sorted
template <typename T>
concept Sortable = requires(T a, T b)
{
    {a < b} -> std::convertible_to<bool>;
};

// Use the Range library to sort a vector in descending order
auto descending_sort(std::vector<Sortable> auto& vec)
{
  return vec | std::views::reverse | std::views::sort(std::greater<>());
}

int main()
{
    std::vector<int> v{6, 2, 8, 1, 10};
    auto sorted = descending_sort(v);
    for (auto elem : sorted)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}
