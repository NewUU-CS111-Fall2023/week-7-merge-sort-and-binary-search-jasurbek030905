#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> mergeSortedArrays(int N, int M, vector<int> &A, vector<int> &B) {
    vector<int> result;
    int i = 0, j = 0;

    while (i < N && j < M) {
        if (A[i] >= B[j]) {
            result.push_back(A[i]);
            i++;
        } else {
            result.push_back(B[j]);
            j++;
        }
    }

    while (i < N) {
        result.push_back(A[i]);
        i++;
    }

    while (j < M) {
        result.push_back(B[j]);
        j++;
    }

    sort(result.begin(), result.end(), greater<int>());

    return result;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        vector<int> A(N), B(M);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        for (int i = 0; i < M; i++) {
            cin >> B[i];
        }
        vector<int> result = mergeSortedArrays(N, M, A, B);
        for (int i = 0; i < N + M; i++) {
            cout << result[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
//  O(N + M) time complexity
