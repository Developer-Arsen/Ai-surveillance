#include <iostream> 

int find_max (int size, int * arr) {
    int max = arr[0];
    for (int i  = 0; i < size; i++) {
        if (max < arr[i]) max = arr[i];
    }
    return max;
}


int find_min (int size, int * arr) {
    int min = arr[0];
    for (int i  = 0; i < size; i++) {
        if (min > arr[i]) min = arr[i];
    }
    return min;
}


int find_mean (int size, int * arr) {
    int mean = 0;
    for (int i  = 0; i < size; i++) {
        mean += i;
    }
    return mean;
}

int main () {
    const int size = 5;
    int arr[] = {1,2,3,4,5};
    int max = find_max(size, arr);
    int min = find_min(size, arr);
    int mean = find_mean(size, arr);

    printf("max is: %d \nmin is: %d \nmean is: %d \n", max , min , mean);

    return 0;
}