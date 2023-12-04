#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    int missing = nums.size();
    for (int i = 0; i < nums.size(); i++) {
        missing ^= i ^ nums[i];
    }
    return missing;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the list of distinct numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = missingNumber(nums);
    cout << "The missing number in the array is: " << result << endl;

    return 0;
}
// O(logn)
