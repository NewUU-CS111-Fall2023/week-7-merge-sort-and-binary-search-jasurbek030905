#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int kthSmallest(vector<vector<int>>& matrix, int k) {
    int n = matrix.size();
    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            minHeap.push(matrix[i][j]);
        }
    }

    int result = 0;
    for (int i = 0; i < k; i++) {
        result = minHeap.top();
        minHeap.pop();
    }

    return result;
}

int main() {
    int n = 3;
    int k = 8;
    vector<vector<int>> matrix = {{1, 5, 9}, {10, 11, 13}, {12, 13, 15}};

    cout << kthSmallest(matrix, k) << endl;

    return 0;
}
// time complexity is O(k*logn)
