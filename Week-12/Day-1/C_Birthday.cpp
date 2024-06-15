#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> heights(n);

    for (int i = 0; i < n; i++) {
        std::cin >> heights[i];
    }

    std::sort(heights.begin(), heights.end());

    std::vector<int> result(n);
    int left = 0, right = n - 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            result[left++] = heights[i];
        } else {
            result[right--] = heights[i];
        }
    }

    for (int i = 0; i < n; i++) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
