#include <stdio.h>

int digit_cnt(int num) {
    if (num < 10) {
        return 1;
    }
    return 1 + digit_cnt(num / 10);
}

int main() {

    int num;
    scanf("%d", &num);

    int res = digit_cnt(num);
    printf("result: %d", res);
    return 0;
}