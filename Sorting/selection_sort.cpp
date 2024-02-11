// A Selection Sort algorithm in c++
// Selection sort is a sorting algorithm that sorts an array by repeatedly finding the minimum element from the unsorted part and putting it at the beginning.
// The selection sort algorithm has a time complexity of O(n^2) and a space complexity of O(1).

#include <iostream>
#include <vector>

using namespace std;

void selection_sort(vector<int> &arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) min_index = j;
        }
        swap(arr[i], arr[min_index]);
    }
}

int main() {
    vector<int> arr = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    selection_sort(arr);
    for (int i = 0; i < arr.size(); i++) cout << arr[i] << " ";
    return 0;
}