#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::vector<int> squares;
    std::transform(numbers.begin(), numbers.end(), std::back_inserter(squares), [](int n) { return n * n; });
    int sum = std::accumulate(numbers.begin(), numbers.end(), 0);
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Squares: ";
    for (int square : squares) {
        std::cout << square << " ";
    }
    std::cout << std::endl;
    std::sort(numbers.begin(), numbers.end(), std::greater<int>());
    std::cout << "Sorted in descending order: ";
    for (int number : numbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;
    return 0;
}
