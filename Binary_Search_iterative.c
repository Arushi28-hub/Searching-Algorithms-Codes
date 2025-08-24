#include <stdio.h>

// Non-recursive binary search function
int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;//used intead of simple(low+high)/2 coz it prevents integer overflow 
        
        // Check if target is found at mid
        if (arr[mid] == target) {
            return mid;
        }
        
        // If target is greater, search right half
        if (arr[mid] < target) {
            low = mid + 1;
        }
        // If target is smaller, search left half
        else {
            high = mid - 1;
        }
    }
    
    // Target not found
    return -1;
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 67, 89};
    int size = sizeof(arr) / sizeof(arr[0]);  //size of fn gives size in bytes
    int target;
    
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    
    printf("Enter number to search: ");
    scanf("%d", &target);
    
    int result = binarySearch(arr, size, target);
    
    if (result != -1) {
        printf("Element %d found at index %d\n", target, result);
    } else {
        printf("Element %d not found in the array\n", target);
    }
    
    return 0;
}