#include <stdio.h>

// Shell Sort
void shellSort(int arr[], int n) {
    int gap, i, j, temp;
    for (gap = n / 2; gap > 0; gap /= 2) {
        for (i = gap; i < n; i++) {
            temp = arr[i];
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];
            arr[j] = temp;
        }
    }
}

// Binary Search
int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main() {
    int arr[] = {50, 32, 54, 12, 95, 31, 11, 91};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

    // Input array
    printf("Data array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Shell Sort
    shellSort(arr, n);

    // Tampilkan hasil sorting
    printf("Data array setelah diurutkan secara ascending:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Cari angka 29
    int index = binarySearch(arr, 0, n - 1, 29);
    if (index != -1)
        printf("Angka 29 ditemukan pada index %d\n", index);
    else
        printf("Angka 29 tidak ditemukan\n");

    return 0;
}