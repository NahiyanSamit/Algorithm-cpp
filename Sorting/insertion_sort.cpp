// A Insertion Sort algorithm in c++
// Insertion sort is a sorting algorithm that sorts an array by shifting elements one by one and inserting the element at the correct position.
// The insertion sort algorithm has a time complexity of O(n^2) and a space complexity of O(1).

#include <iostream>
#include <vector>

using namespace std;

void insertion_sort(vector<int> &arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    vector<int> arr = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    insertion_sort(arr);
    for (int i = 0; i < arr.size(); i++) cout << arr[i] << " ";
    return 0;
}