#include <stdio.h>

int main() {

    int a, b;
    scanf("%d %d", &a, &b);

    int sum = a + b;
    int sbtr = a - b;
    int mltpl = a * b;
    int dvsn = a / b;

    printf("sum: %d,\nsubtraction %d,\nmultiplication: %d,\ndivision: %d\n", sum, sbtr, mltpl, dvsn);
}