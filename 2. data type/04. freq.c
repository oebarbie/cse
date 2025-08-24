#include <stdio.h>

int main() {
    
    int nums[7];
    for (int i=0; i<7; i++) {
        scanf("%d", &nums[i]);
    }

    int cnt = 1;
    for (int i=1; i<7; i++) {
        if (nums[i] == nums[0]) {
            cnt += 1;
        }
    }
    
    printf("%d\n", cnt);
    return 0;
}