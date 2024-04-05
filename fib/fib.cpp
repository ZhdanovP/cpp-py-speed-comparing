#include <iostream>
#include <chrono>

unsigned long long fib(int n) {
    if (n < 2) return n;
    return fib(n-1) + fib(n-2);
}

int main() {
    int n = 35;  // Change this for different inputs
    auto start_time = std::chrono::high_resolution_clock::now();
    auto result = fib(n);
    auto end_time = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time).count();
    std::cout << "Result: " << result << std::endl;
    std::cout << "C++ execution time: " << duration / 1000000.0 << " seconds" << std::endl;
    return 0;
}
