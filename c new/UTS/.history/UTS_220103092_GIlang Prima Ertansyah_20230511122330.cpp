#include <stdio.h>
using namespace std;

int main() {
    int arr[] = {50, 32, 54, 12, 95, 31, 11, 91};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, index;

    printf("UTS Pemrograman C\n");
    printf("================================================\n");
    printf("Nama: Gilang prima Ertansyah\n");
    printf("NIM: 220103092\n");
    printf("================================================\n");
    printf("\n\n");

    // Input array
    printf("Data array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    // Shell Sort
    int gap, temp;
    for (gap = n / 2; gap > 0; gap /= 2) {
        for (i = gap; i < n; i++) {
            temp = arr[i];
            for (int j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }

    // Sorted array
    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    // Binary Search
    int low = 0, high = n - 1, key = 29;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            index = mid;
            break;
        }
        else if (arr[mid] > key) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    if (low > high) {
        printf("Angka %d tidak ditemukan dalam array\n", key);
    }
    else {
        printf("Angka %d ditemukan pada index ke-%d dalam array yang telah diurutkan\n", key, index);
    }
    return 0;
}