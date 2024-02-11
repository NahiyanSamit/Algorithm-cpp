// Ternery Search algorithm in C++
// Ternary search is a search algorithm that finds the position of a target value within a sorted array.
// The ternary search algorithm has a time complexity of O(log3 n) and a space complexity of O(1).

#include <iostream>
#include <vector>

using namespace std;

int ternary_search(vector<int> &arr, int target) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid1 = left + (right - left) / 3;
        int mid2 = right - (right - left) / 3;
        if (arr[mid1] == target) return mid1;
        if (arr[mid2] == target) return mid2;
        if (target < arr[mid1]) right = mid1 - 1;
        else if (target > arr[mid2]) left = mid2 + 1;
        else {
            left = mid1 + 1;
            right = mid2 - 1;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};      // sorted array
    int target = 5;
    int index = ternary_search(arr, target);
    if (index != -1) cout << "Element found at index " << index << endl;
    else cout << "Element not found" << endl;
    return 0;
}