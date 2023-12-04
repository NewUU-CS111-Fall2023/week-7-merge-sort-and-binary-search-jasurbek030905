#include <iostream>
#include <vector>
using namespace std;

int findKthPositive(vector<int>& arr, int k) {
    int left = 0;
    int right = arr.size();
    int missing;
    
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] - (mid + 1) < k) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    
    // At this point, left is the smallest index that makes arr[left] - (left + 1) >= k
    missing = left + k;
    
    return missing;
}

int main() {
    int n, k;
    cout << "Enter the value of n and k: ";
    cin >> n >> k;
    
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = findKthPositive(arr, k);
    cout << "The kth positive integer missing from the array is: " << result << endl;

    return 0;
}
// O(n)
