#include <stdio.h>

// Recursive linear search
int recursiveLinearSearch(int arr[], int size, int target, int index) {
    // Base case 1: element not found
    if (index >= size) {
        return -1;
    }
    
    // Base case 2: element found
    if (arr[index] == target) {
        return index;
    }
    
    // Recursive case: check next element
    return recursiveLinearSearch(arr, size, target, index + 1);
}

// Wrapper function for easier calling
int linearSearchRecursive(int arr[], int size, int target) {
    return recursiveLinearSearch(arr, size, target, 0);
}

int main() {
    int arr[] = {10, 25, 8, 14, 3, 19, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    
    
    printf("Enter element to search: ");
    scanf("%d", &target);
    
    int result = linearSearchRecursive(arr, size, target);
    
    if (result != -1) {
        printf("Element %d found at index %d\n", target, result);
    } else {
        printf("Element %d not found in the array\n", target);
    }
    
    return 0;
}