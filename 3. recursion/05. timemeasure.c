#include <stdio.h>
#include <time.h>

int digit_cnt(int num) {
    if (num < 10) {
        return 1;
    }
    return 1 + digit_cnt(num / 10);
}

int main() {

    clock_t start = clock();
    
    int sum = digit_cnt(123456);

    clock_t duration = clock() - start;

    double time_taken = ((double)duration)/CLOCKS_PER_SEC; // transform to double type
    printf("time taken %lf sec ", time_taken);
    return 0;
}