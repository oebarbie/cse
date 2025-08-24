#include <stdio.h>

int main() {
    
    int nums[7];
    for (int i=0; i<7; i++) {
        scanf("%d", &nums[i]);
    }

    int cnt = 0;
    for (int i=0; i<7; i++) {
        for (int j=0; j<7; j++) {
            if (nums[i] == nums[j]) {
                cnt += 1;
            }
        }
        printf("%d ", cnt);
        cnt = 0;
    }
    printf("\n");
    return 0;
}