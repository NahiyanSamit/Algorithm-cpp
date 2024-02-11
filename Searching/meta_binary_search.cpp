// Meta binary search // One-sided binary search algorithm in C++
// Meta binary search is a search algorithm that finds the position of a target value within a sorted array.
// The meta binary search algorithm has a time complexity of O(log(log n)) and a space complexity of O(1).

#include <iostream>
#include <vector>

using namespace std;

int meta_binary_search(vector<int> &arr, int target) {
    int n = arr.size();
    int left = 0, right = n - 1;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) left = mid + 1;
        else right = mid;
    }
    if (arr[left] == target) return left;
    return -1;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};      // sorted array
    int target = 5;
    int index = meta_binary_search(arr, target);
    if (index != -1) cout << "Element found at index " << index << endl;
    else cout << "Element not found" << endl;
    return 0;
}