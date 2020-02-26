#include<bits/stdc++.h>

using namespace std;

void printArr(int* arr, int size) {
  int i = 0;
  for(i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}

void productArray(int arr[], int n) {

  int i , j;

  int *left = (int *)malloc(n*sizeof(int));
  int *right = (int *)malloc(n*sizeof(int));
  int *prod = (int *)malloc(n*sizeof(int));

  left[0] = 1, right[n - 1] = 1;

  for(i = 1; i < n; i++) {
    left[i] = arr[i-1] * left[i-1];
  }

  for(j = n - 1; j >= 0; j--) {
    right[j - 1] = arr[j] * right[j];
  }

  for(i = 0; i < n; i++)
    prod[i] = left[i] * right[i];

  printArr(prod,n);

}


int main() {
  int arr[] = {1,2,3,4};
  int size = sizeof(arr) / sizeof(arr[0]);
  cout << "The product array is: \n";
  productArray(arr, size);
}
// arr[] : [1,2,3,4]
// Output: [24,12,8,6]
// prod = [1,1,2,6];
