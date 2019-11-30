// https://www.geeksforgeeks.org/k-th-missing-element-in-an-unsorted-array/
// https://www.geeksforgeeks.org/find-the-element-that-appears-once-in-a-sorted-array/
// https://www.geeksforgeeks.org/last-duplicate-element-sorted-array/
// https://www.geeksforgeeks.org/search-an-element-in-a-sorted-and-pivoted-array/
//https://www.geeksforgeeks.org/find-minimum-element-in-a-sorted-and-rotated-array/
//https://www.geeksforgeeks.org/given-a-sorted-and-rotated-array-find-if-there-is-a-pair-with-a-given-sum/
//https://www.geeksforgeeks.org/check-if-an-array-is-sorted-and-rotated/
//https://www.geeksforgeeks.org/sort-rotated-sorted-array/


// https://www.geeksforgeeks.org/find-the-missing-number/
// https://www.geeksforgeeks.org/find-the-missing-number-in-a-sorted-array/
// https://www.geeksforgeeks.org/find-the-element-that-appears-once-in-a-sorted-array/

// Find the element that appears once in a sorted array
// Given a sorted array in which all elements appear twice (one after one) and one element appears only once. Find that element in O(log n) complexity.
// https://www.geeksforgeeks.org/find-element-appears-array-every-element-appears-twice/


#include<bits/stdc++.h>

using namespace std;

void printArr(int arr[], int size) {
    for(int i = 0; i< size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortInWaveForm(int arr[], int size) {
    sort(arr, arr+size);
    for(int i = 0; i < size - 1; i += 2) {
        swap(arr[i], arr[i+1]);
    }
}

int main() {
    int arr[] = {10, 90, 49, 2, 1, 5, 23};
    int size = sizeof(arr) / sizeof(arr[0]);
    sortInWaveForm(arr, size);
    printArr(arr, size);
}