// A Quick Sort algorithm in c++
// Quick sort is a sorting algorithm that divides the array into three parts, the pivot element, elements less than the pivot, and elements greater than the pivot.
// The quick sort algorithm has a time complexity of O(n log n) and a space complexity of O(log n).

#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) swap(arr[++i], arr[j]);
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quick_sort(vector<int> &arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}

int main() {
    vector<int> arr = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    quick_sort(arr, 0, arr.size() - 1);
    for (int i = 0; i < arr.size(); i++) cout << arr[i] << " ";
    return 0;
}