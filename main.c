#include <stdio.h>
#include <stdlib.h>

#include "sorting.h"

int main(int argc, char** argv) {
    int arr[] = {2, 1, 3, 5, 4};
    printa(arr, 5);
    printf("\n");
    // sort(selection_sort, arr, 5);
    quick_sort(arr, 0, 4);
    printa(arr, 5);
    printf("\n");
    return 0;
}
