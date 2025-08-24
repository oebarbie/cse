#include <stdio.h>

int calculate_sum(int a[5]) {
    int s = 0;
    for (int i=0; i<5; i++) {
        s += a[i];
    }
    return s;
}

int main() {
    int nums[5];
    for (int i=0; i<5; i++) {
        scanf("%d", &nums[i]);
    }

    int sum = calculate_sum(nums);
    printf("sum is %d\n", sum);
    return 0;
}