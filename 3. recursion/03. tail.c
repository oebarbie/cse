#include <stdio.h>

int get_sum_t(int arr[5], int k, int s) { // k - curr arr index, s - curr sum
    if (k == -1) {
        return 0; // base case: defines the exit
    }
    return get_sum_t(arr, k-1, s+arr[k]); // recursive call is the last operation
}

int main() {

    int my_array[5];
    for (int i=0; i<5; i++) {
        scanf("%d", &my_array[i]);
    }

    int sum = get_sum_t(my_array, 4);

    printf("\nsum is: %d\n", sum);
}