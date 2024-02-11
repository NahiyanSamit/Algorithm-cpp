// A Bubble Sort algorithm in c++
// Bubble sort is a sorting algorithm that sorts an array by comparing adjacent elements and swapping them if they are in the wrong order.
// The bubble sort algorithm has a time complexity of O(n^2) and a space complexity of O(1).

#include <iostream>
#include <vector>

using namespace std;

void bubble_sort(vector<int> &arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
        }
    }
}

int main() {
    vector<int> arr = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    bubble_sort(arr);
    for (int i = 0; i < arr.size(); i++) cout << arr[i] << " ";
    return 0;
}