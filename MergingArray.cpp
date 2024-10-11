#include<iostream>   // Include the iostream library for input and output operations  
using namespace std; // Use the standard namespace  

// Function to merge two sorted arrays into a third array  
void merge(int arr1[], int n, int arr2[], int m, int arr3[]) {  
    int i = 0; // Index for traversing arr1  
    int j = 0; // Index for traversing arr2  
    int k = 0; // Index for placing elements in arr3  

    // Loop to compare elements from both arrays until one of them is exhausted  
    while (i < n && j < m) {  
        if (arr1[i] < arr2[j]) {  
            arr3[k++] = arr1[i++]; // If arr1's element is smaller, place it in arr3  
        } else {  
            arr3[k++] = arr2[j++]; // Otherwise, place arr2's element in arr3  
        }  
    }  

    // Copy remaining elements from arr1, if there are any left  
    while (i < n) {  
        arr3[k++] = arr1[i++]; // Add remaining elements of arr1 to arr3  
    }  

    // Copy remaining elements from arr2, if there are any left  
    while (j < m) {  
        arr3[k++] = arr2[j++]; // Add remaining elements of arr2 to arr3  
    }  
}  

// Function to print the elements of an array  
void print(int ans[], int n) {  
    for (int i = 0; i < n; i++) {  
        cout << ans[i] << " "; // Print each element followed by a space  
    }  
    cout << endl; // Print a newline at the end for formatting  
}  

int main() {  
    // Initialize the first sorted array  
    int arr1[5] = {1, 3, 5, 7, 9}; // Array of size 5  
    // Initialize the second sorted array  
    int arr2[3] = {2, 4, 6}; // Array of size 3  

    // Create a third array to hold the merged results. Its size is the sum of the sizes of arr1 and arr2.  
    int arr3[8] = {0}; // Array of size 8 (5 + 3)  

    // Call the merge function  
    merge(arr1, 5, arr2, 3, arr3);  

    // Print the merged array  
    print(arr3, 8); // Print the merged result  

    return 0; // Indicate that the program ended successfully  
}