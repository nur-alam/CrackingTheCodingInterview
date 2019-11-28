// // C program to find the element that appears only once 
// #include<stdio.h> 

// // A Binary getAppearsOnce based function to find the element 
// // that appears only once 
// void getAppearsOnce(int *arr, int low, int high) 
// { 
// 	// Base cases 
// 	if (low > high) 
// 	return; 

// 	if (low==high) 
// 	{ 
// 		printf("The required element is %d ", arr[low]); 
// 		return; 
// 	} 

// 	int mid = (low + high) / 2; 

// 	if (mid%2 == 0) 
// 	{ 
// 		if (arr[mid] == arr[mid+1]) 
// 			getAppearsOnce(arr, mid+2, high); 
// 		else
// 			getAppearsOnce(arr, low, mid); 
// 	} 
// 	else 
// 	{ 
// 		if (arr[mid] == arr[mid-1]) 
// 			getAppearsOnce(arr, mid+1, high); 
// 		else
// 			getAppearsOnce(arr, low, mid-1); 
// 	} 
// } 

// int main() 
// {   
//     //int arr[] = {1, 1, 2, 2, 3, 3, 4};
// 	int arr[] = {1, 1, 2, 4, 4, 5, 5, 6, 6}; 
// 	int len = sizeof(arr)/sizeof(arr[0]); 
// 	getAppearsOnce(arr, 0, len-1); 
// 	return 0; 
// } 
