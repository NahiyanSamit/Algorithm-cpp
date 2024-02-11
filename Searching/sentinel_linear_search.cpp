// Sentinel Linear Search algorithm in C++
// A sentinel linear search is a linear search algorithm that uses a sentinel value to reduce the number of comparisons. 
// The sentinel value is placed at the end of the array, and the target value is placed at the end of the array. 
// The algorithm then iterates through the array, comparing each element with the target value. 
// When the target value is found, the algorithm returns the index of the target value. 
// The sentinel linear search algorithm has a time complexity of O(n) and a space complexity of O(1).

#include <iostream>
#include <vector>

using namespace std;

int sentinel_linear_search(vector<int> &arr, int target) {
    int n = arr.size();
    int last = arr[n - 1];
    arr[n - 1] = target;
    int i = 0;
    while (arr[i] != target) i++;
    arr[n - 1] = last;
    if (i < n - 1 || arr[n - 1] == target) return i;
    return -1;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 5;
    int index = sentinel_linear_search(arr, target);
    if (index != -1) cout << "Element found at index " << index << endl;
    else cout << "Element not found" << endl;
    return 0;
}