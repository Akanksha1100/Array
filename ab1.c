#include <stdio.h>

// Function to print the elements of an array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[5] = {5, 2, 8, 1, 6}; // Declare and initialize the array

    // Printing the initial array
    printf("Initial array: ");
    printArray(arr, 5);

    // Modifying an element at a specific index
    arr[3] = 9;
    printf("Array after modifying element at index 3: ");
    printArray(arr, 5);

    // Accessing an element at a specific index
    int element = arr[2];
    printf("Element at index 2: %d\n", element);

    // Finding the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Size of the array: %d\n", size);

    // Searching for a specific value in the array
    int target = 8;
    int found = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            found = 1;
            break;
        }
    }
    if (found)
    {
        printf("The value %d is present in the array.\n", target);
    }
    else
    {
        printf("The value %d is not present in the array.\n", target);
    }

    // Sorting the array in ascending order using bubble sort
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Array after sorting in ascending order: ");
    printArray(arr, 5);

    // Performing calculations on array elements
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    printf("Sum of all elements: %d\n", sum);

    // Printing the array in reverse order
    printf("Array in reverse order: ");
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
