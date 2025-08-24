#include <stdio.h>

int main() {

    int N, value, sum = 0;
    printf("how many number to add?\n");
    scanf("%d", &N);
    printf("enter %d integers\n", N);
    
    for(int i=1; i<=N; i++) {
        scanf("%d", &value);
        sum = sum + value;
    }
    printf("sum = %d", sum);
    return 0;
}