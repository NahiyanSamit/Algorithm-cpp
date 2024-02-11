// A binary search algorithm in c++
// Binary search is a search algorithm that finds the position of a target value within a sorted array.
// The binary search algorithm has a time complexity of O(log n) and a space complexity of O(1).

#include <iostream>
#include <vector>
using namespace std;

int binary_search(vector<int> &arr, int target) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};      // sorted array
    int target = 5;
    int index = binary_search(arr, target);
    if (index != -1) cout << "Element found at index " << index << endl;
    else cout << "Element not found" << endl;
    return 0;
}