#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maximumBeautifulness(int n, vector<int>& perm) {
    int beauty = 0;
    for (int i = 0; i < n; i++) {
        beauty += abs(perm[i] - i - 1);
    }

    int maxIncrease = 0;
    for (int i = 0; i < n - 1; i++) {
        maxIncrease = max(maxIncrease, abs(perm[i + 1] - perm[i]) - 1); 
    }

    return beauty + maxIncrease;
}

int main() {
    int n;
    cin >> n;
    vector<int> perm(n);
    for (int i = 0; i < n; i++) {
        cin >> perm[i];
    }

    cout << maximumBeautifulness(n, perm) << endl;

    return 0;
}
time complexity is O(n)
