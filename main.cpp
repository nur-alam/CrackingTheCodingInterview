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


// C program to find the element that appears only once 
#include<stdio.h> 

// A Binary Search based function to find the element 
// that appears only once 
void search(int *arr, int low, int high) 
{ 
	// Base cases 
	if (low > high) 
	return; 

	if (low==high) 
	{ 
		printf("The required element is %d ", arr[low]); 
		return; 
	} 

	int mid = (low + high) / 2; 

	if (mid%2 == 0) 
	{ 
		if (arr[mid] == arr[mid+1]) 
			search(arr, mid+2, high); 
		else
			search(arr, low, mid); 
	} 
	else 
	{ 
		if (arr[mid] == arr[mid-1]) 
			search(arr, mid+1, high); 
		else
			search(arr, low, mid-1); 
	} 
} 

int main() 
{   
    //int arr[] = {1, 1, 2, 2, 3, 3, 4};
	int arr[] = {1, 1, 2, 4, 4, 5, 5, 6, 6}; 
	int len = sizeof(arr)/sizeof(arr[0]); 
	search(arr, 0, len-1); 
	return 0; 
} 
