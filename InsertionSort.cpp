#include <iostream> // Include the iostream library for input/output operations  

using namespace std;  

// Function to perform insertion sort on an array of integers  
void insertionSort(int n, int arr[]) {  
    // Iterate through the array starting from the second element  
    for (int i = 1; i < n; i++) {  
        int temp = arr[i]; // Store the current element to be inserted  
          int j = i - 1; 
        for ( ; j >= 0; j--) {   // Start checking from the element before the current one  
                                              // Shift elements of arr[0..i-1] that are greater than temp  
                                              // to one position ahead of their current position 
        
            if (arr[j] > temp) {  
                // If the current element is greater than temp, shift it right  
                arr[j + 1] = arr[j];  
            } else { // If not, stop shifting  
                break;  
            }  
        }  
        // Place the temp value in the correct position  
        arr[j + 1] = temp;  
    }  
}  
int main() {  
    int arr[] = {5,7,8,9,6}; // Sample array to be sorted  
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate number of elements in the array  

    insertionSort(n, arr); // Call the insertion sort function  

    // Print the sorted array  
    cout << "Sorted array: ";  
    for (int i = 0; i < n; i++) {  
        cout << arr[i] << " "; // Print each element followed by a space  
    }  
    cout << endl; // Newline for better formatting  

    return 0; // Indicate successful termination of the program  
}  