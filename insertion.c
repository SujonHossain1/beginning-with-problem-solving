#include <stdio.h>

void display(int arr[], int n)
{
    // Traversal
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
};
int insertData(int arr[], int size, int element, int capacity, int index)
{
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;

    return 1;
};

void delete (int arr[], int size, int index)
{
}

int main()
{
    int arr[100] = {2, 3, 23, 3};
    int size = 4, element = 24, capacity = 100, index = 3;

    display(arr, size);
    size += 1;
    insertData(arr, size, element, capacity, index);
    display(arr, size);
}
