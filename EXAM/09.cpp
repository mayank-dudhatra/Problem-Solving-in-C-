#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums = {4, 2, 8, 5, 1};

    // Sort the vector in ascending order
    std::sort(nums.begin(), nums.end());

    // Display the sorted array
    std::cout << "Sorted Array: ";
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}


