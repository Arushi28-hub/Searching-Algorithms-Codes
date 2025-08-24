#include <stdio.h>

// Recursive binary search function
int binarySearch(int arr[], int low, int high, int target) {
    // Base case: search space is exhausted
    if (low > high) {
        return -1;
    }
    
    int mid = low + (high - low) / 2; // to prevent integer overflow 
    
    // If element is found at mid
    if (arr[mid] == target) {
        return mid;
    }
    
    // If element is smaller than mid, search left subarray
    if (target < arr[mid]) {
        return binarySearch(arr, low, mid - 1, target);
    }
    // Else search right subarray
    else {
        return binarySearch(arr, mid + 1, high, target);
    }
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 67, 89};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    
   
    
    printf("Enter number to search: ");
    scanf("%d", &target);
    
    int result = binarySearch(arr, 0, size - 1, target);
    
    if (result != -1) {
        printf("Element %d found at index %d\n", target, result);
    } else {
        printf("Element %d not found in the array\n", target);
    }
    
    return 0;
}