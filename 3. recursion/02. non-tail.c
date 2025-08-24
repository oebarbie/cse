#include <stdio.h>

int get_sum_nt(int arr[5], int k) {

    if (k == -1) {
        return 0; // base case: defines the exit
    }

    return arr[k] + get_sum_nt(arr, k-1); // function calls itself
}


int main() {

    int my_array[5];
    for (int i=0; i<5; i++) {
        scanf("%d", &my_array[i]);
    }

    int sum = get_sum_nt(my_array, 4);
    
    printf("\nsum is: %d", sum);
}