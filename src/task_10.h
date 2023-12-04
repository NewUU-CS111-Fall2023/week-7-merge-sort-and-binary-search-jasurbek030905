#include <iostream>
#include <vector>
#include <algorithm>

int kthFactor(int n, int k) {
    std::vector<int> factors;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            factors.push_back(i);
        }
    }
    
    std::sort(factors.begin(), factors.end());
    
    if (k <= factors.size()) {
        return factors[k - 1];
    }
    else {
        return -1;
    }
}

int main() {
    int n, k;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    std::cout << "Enter the value of k: ";
    std::cin >> k;
    
    int result = kthFactor(n, k);
    std::cout << "The kth factor of " << n << " is: " << result << std::endl;

    return 0;
}
// O(n)
