#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> frequencyMap;
    for (int num : nums) {
        frequencyMap[num]++;
    }

    auto compare = [&](int a, int b) {
        return frequencyMap[a] > frequencyMap[b];
    };
    priority_queue<int, vector<int>, decltype(compare)> pq(compare);

    for (auto& pair : frequencyMap) {
        pq.push(pair.first);
        if (pq.size() > k) {
            pq.pop();
        }
    }

    vector<int> result;
    while (!pq.empty()) {
        result.push_back(pq.top());
        pq.pop();
    }
    return result;
}

int main() {
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = 2;
    vector<int> result = topKFrequent(nums, k);

    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
// O(nlog(k))
