#include <stdio.h>

int main() {
    
    int nums[5];
    for (int i=0; i<5; i++) {
        scanf("%d", &nums[i]);
    }

    int sum = 0;
    for (int i=0; i<5; i++) {
        sum += nums[i];
    }

    printf("sum is %d", sum);
    return 0;
}