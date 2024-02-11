// A Merge Sort algorithm in c++
// Merge sort is a sorting algorithm that divides the array into two halves, sorts them, and then merges them back together.
// The merge sort algorithm has a time complexity of O(n log n) and a space complexity of O(n).

#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &arr, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    vector<int> L(n1), R(n2);
    for (int i = 0; i < n1; i++) L[i] = arr[l + i];
    for (int i = 0; i < n2; i++) R[i] = arr[m + 1 + i];
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) arr[k] = L[i++];
        else arr[k] = R[j++];
        k++;
    }
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

void merge_sort(vector<int> &arr, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        merge_sort(arr, l, m);
        merge_sort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main() {
    vector<int> arr = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    merge_sort(arr, 0, arr.size() - 1);
    for (int i = 0; i < arr.size(); i++) cout << arr[i] << " ";
    return 0;
}