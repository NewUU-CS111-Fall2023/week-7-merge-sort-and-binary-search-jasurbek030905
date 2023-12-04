#include <iostream>
using namespace std;

double recursivePow(double x, int n) {
    if (n == 0) {
        return 1.0;
    }
    if (n < 0) {
        x = 1 / x;
        n = -n;
    }
    if (n % 2 == 0) {
        return recursivePow(x * x, n / 2);
    } else {
        return x * recursivePow(x * x, (n - 1) / 2);
    }
}

int main() {
    double x = 2.0;
    int n = 10;
    cout << recursivePow(x, n) << endl;
    return 0;
}
// O(log n)
