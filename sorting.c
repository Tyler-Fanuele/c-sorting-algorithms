#include "sorting.h"

#include <stdio.h>

void printa(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
    }
}

void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sort(void (*sort)(int*, int), int* arr, int size) { sort(arr, size); }

void bubble_sort(int* arr, int size) {
    int i, j;

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void selection_sort(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        int mindex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[mindex]) {
                mindex = j;
            }
        }
        swap(&arr[mindex], &arr[i]);
    }
}

int partition(int* arr, int low_val, int high_val) {
    int pivot = arr[high_val];
    int i = (low_val - 1);

    for (int j = low_val; j <= high_val - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high_val]);
    return i + 1;
}

void quick_sort(int* arr, int low_val, int high_val) {
    int Part;
    if (low_val < high_val) {
        Part = partition(arr, low_val, high_val);
        quick_sort(arr, low_val, Part - 1);
        quick_sort(arr, Part + 1, high_val);
    }
}
