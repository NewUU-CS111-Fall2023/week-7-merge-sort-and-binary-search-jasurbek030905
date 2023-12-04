#include <iostream>
#include <vector>
using namespace std;

pair<int, int> searchInsertPosition(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            return {1, mid};
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return {-1, left};
}

int main() {
    vector<int> nums = {1, 3, 5, 6};
    int target = 5;
    pair<int, int> result = searchInsertPosition(nums, target);

    cout << result.first << " " << result.second << endl;

    return 0;
}
// O(log nums)
