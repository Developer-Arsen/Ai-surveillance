#include <iostream>

void swap(int * a, int * b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void bubbleSort(int * arr, size_t size) {
    for (int step = 0; step < size; ++step) {
        for (int i = 0; i < size - step; ++i) {
            if (arr[i] > arr[i + 1]) {
                swap(&arr[i], &arr[i+1]);
            }
        }
    }
}

void selectionSort(int * arr, size_t size) {
  for (int step = 0; step < size - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) {
      if (arr[i] < arr[min_idx])
        min_idx = i;
    }
    swap(&arr[min_idx], &arr[step]);
  }
}

void printArr(int * arr, size_t size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i];
    }
    std::cout << std::endl;
}

int main () {
    const int size = 10;
    int arr[] = {1,5,3,4,7,8,5,6,9,8};
    
    typedef void (*Sort) (int *, size_t);
    Sort sort = NULL;
    
    enum Sorting {
        BUBLE = 1,
        SELECTION
    };

    char selected = 0;
    std::cout << "Please enter your selection type" << std::endl << "1: Buble" << std::endl << "2: Selection" << std::endl;
    std::cin >> selected; 
    
    if (selected == BUBLE) { sort = bubbleSort;}
    else { sort = selectionSort; }

    sort(arr, size);
    printArr(arr, size);

    return 0;
}