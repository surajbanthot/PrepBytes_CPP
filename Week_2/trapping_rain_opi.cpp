// // C++ program to find maximum amount of water that can 
// // be trapped within given set of bars. 
// #include <bits/stdc++.h> 
// using namespace std; 

// int findWater(int arr[], int n) 
// { 
// 	// left[i] contains height of tallest bar to the 
// 	// left of i'th bar including itself 
// 	int left[n]; 

// 	// Right [i] contains height of tallest bar to 
// 	// the right of ith bar including itself 
// 	int right[n]; 

// 	// Initialize result 
// 	int water = 0; 

// 	// Fill left array 
// 	left[0] = arr[0]; 
// 	for (int i = 1; i < n; i++) 
// 		left[i] = max(left[i - 1], arr[i]); 

// 	// Fill right array 
// 	right[n - 1] = arr[n - 1]; 
// 	for (int i = n - 2; i >= 0; i--) 
// 		right[i] = max(right[i + 1], arr[i]); 

// 	// Calculate the accumulated water element by element 
// 	// consider the amount of water on i'th bar, the 
// 	// amount of water accumulated on this particular 
// 	// bar will be equal to min(left[i], right[i]) - arr[i] . 
// 	for (int i = 0; i < n; i++) 
// 		water += min(left[i], right[i]) - arr[i]; 

// 	return water; 
// } 

// // Driver program 
// int main() 
// { 
// 	int arr[] = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 }; 
// 	int n = sizeof(arr) / sizeof(arr[0]); 
// 	cout << "Maximum water that can be accumulated is "
// 		<< findWater(arr, n); 
// 	return 0; 
// }


// C++ program to find maximum amount of water that can 
// be trapped within given set of bars. 
// Space Complexity : O(1) 

#include <iostream> 
using namespace std; 

int findWater(int arr[], int n) 
{ 
	// initialize output 
	int result = 0; 

	// maximum element on left and right 
	int left_max = 0, right_max = 0; 

	// indices to traverse the array 
	int lo = 0, hi = n - 1; 

	while (lo <= hi) { 
		if (arr[lo] < arr[hi]) { 
			if (arr[lo] > left_max) 
				// update max in left 
				left_max = arr[lo]; 
			else
				// water on curr element = max - curr 
				result += left_max - arr[lo]; 
			lo++; 
		} 
		else { 
			if (arr[hi] > right_max) 
				// update right maximum 
				right_max = arr[hi]; 
			else
				result += right_max - arr[hi]; 
			hi--; 
		} 
	} 

	return result; 
} 

int main() 
{ 
	int arr[] = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	cout << "Maximum water that can be accumulated is "
		<< findWater(arr, n); 
} 


