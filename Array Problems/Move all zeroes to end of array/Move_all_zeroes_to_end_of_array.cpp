#include <bits/stdc++.h> 
using namespace std; 

void printArr(int arr[], int size) {
    for(int i = 0; i < size; i++) 
        cout << arr[i] << " ";
    cout << endl;
}

// with double traversal
void pushZeroToEnd(int arr[], int size) {

    int count = 0;

    for(int i = 0; i < size; i++) {
        if(arr[i] != 0) 
            arr[count++] = arr[i];
    }

    while(count < size) 
        arr[count++] = 0;

}
  
// Driver code 
int main() 
{ 
    int arr[] = {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    pushZeroToEnd(arr, size);
    printArr(arr, size);
} 