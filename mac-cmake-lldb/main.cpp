// g++ main.cpp -g -o a.out
#include <iostream>
#include <string>

int main() {
    std::string s = "hello world";

    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += i;
    }

    std::cout << s << "\n";
    std::cout << "sum=" << sum << "\n";

    return 0;
}