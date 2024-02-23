#include <iostream>

void swap(int * a, int * b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void bubbleSort(int * arr, int size) {
    for (int step = 0; step < size; ++step) {
        for (int i = 0; i < size - step; ++i) {
            if (arr[i] > arr[i + 1]) {
                swap(&arr[i], &arr[i+1]);
            }
        }
    }
}

void selectionSort(int * arr, int size) {
  for (int step = 0; step < size - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) {
      if (arr[i] < arr[min_idx])
        min_idx = i;
    }
    swap(&arr[min_idx], &arr[step]);
  }
}

int main () {
    const int size = 10;
    int arr[] = {1,5,3,4,7,8,5,6,9,8};
    void * ptr = NULL;
}