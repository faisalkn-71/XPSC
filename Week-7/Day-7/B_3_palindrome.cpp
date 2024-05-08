#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;
    std::string result = "";
    for (int i = 0; i < n; ++i) {
        if (i % 4 == 0 || i % 4 == 1) {
            result += 'a';
        } else {
            result += 'b';
        }
    }
    std::cout << result << std::endl;
    return 0;
}
