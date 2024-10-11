#include <vector>  // Include the vector library for using the vector container  
using namespace std; // Use the standard namespace to avoid prefixing std:: for standard library components  

// Function to perform bubble sort on a vector of integers  
void bubbleSort(vector<int>& arr, int n) {   
    // Outer loop for each pass (n-1 passes total)  
    for (int i = 1; i < n; i++) {  
        bool swapped = false; // Flag to check if any swapping occurs in this pass  

        // Inner loop for comparing adjacent elements  
        // The range of the inner loop decreases with each outer loop iteration  
        for (int j = 0; j < n - i; j++) {  
            // If the current element is greater than the next element, swap them  
            if (arr[j] > arr[j + 1]) {  
                swap(arr[j], arr[j + 1]); // Swap the two elements  
                swapped = true; // Set swapped to true since a swap occurred  
            }  
        }  

        // If no elements were swapped during this pass, the array is already sorted  
        if (swapped == false) {  
            break; // Exit the loop early since further passes are unnecessary  
        }  
    }  
}  