// Jump Search algorithm in C++
// Jump search is a search algorithm that finds the position of a target value within a sorted array.
// The basic idea is to check fewer elements (than linear search) by jumping ahead by fixed steps or skipping some elements in place of searching all elements.
// The jump search algorithm has a time complexity of O(√n) and a space complexity of O(1).

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int jump_search(vector<int> &arr, int target) {
    int n = arr.size();
    int step = sqrt(n);
    int prev = 0;
    while (arr[min(step, n) - 1] < target) {
        prev = step;
        step += sqrt(n);
        if (prev >= n) return -1;
    }
    while (arr[prev] < target) {
        prev++;
        if (prev == min(step, n)) return -1;
    }
    if (arr[prev] == target) return prev;
    return -1;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};      // sorted array
    int target = 5;
    int index = jump_search(arr, target);
    if (index != -1) cout << "Element found at index " << index << endl;
    else cout << "Element not found" << endl;
    return 0;
}