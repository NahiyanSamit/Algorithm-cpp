// linear search algorithm in c++
// Linear search is a search algorithm that finds the position of a target value within an array.
// The linear search algorithm has a time complexity of O(n) and a space complexity of O(1).

#include <iostream>
#include <vector>

using namespace std;

int linear_search(vector<int> &arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) return i;
    }
    return -1;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 5;
    int index = linear_search(arr, target);
    if (index != -1) cout << "Element found at index " << index << endl;
    else cout << "Element not found" << endl;
    return 0;
}