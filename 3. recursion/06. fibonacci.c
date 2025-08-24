#include <stdio.h>
#include <time.h>

unsigned long fib_rec(unsigned n) {
    if (n<=1) return n;
    return fib_rec(n-1) + fib_rec(n-2);
}

unsigned long fib_tr(unsigned prev, unsigned cur, unsigned n) {
    if (n==0) return cur;
    return fib_tr(cur, prev + cur, n-1);
}

unsigned long fib_tailrec(unsigned n) {
    if (n==0) return 0;
    return fib_tr(0, 1, n-1);
}

unsigned long fib_itr(unsigned n) {
    unsigned long a=1, b=1;
    if (n<2) return n;
    for (unsigned i=1; i<n; ++i) {
        b += a;
        a = b-a;
    }
    return a;
}

int main() {

    clock_t start = clock();
    unsigned long res = fib_rec(3);
    clock_t duration = clock() - start;
    double time_taken = ((double)duration)/CLOCKS_PER_SEC;
    printf("%lf", time_taken);

    clock_t start = clock();
    unsigned long res = fib_tr(1, 2, 3);
    clock_t duration = clock() - start;
    double time_taken = ((double)duration)/CLOCKS_PER_SEC;
    printf("%lf", time_taken);

    clock_t start = clock();
    unsigned long res = fib_tailrec(3);
    clock_t duration = clock() - start;
    double time_taken = ((double)duration)/CLOCKS_PER_SEC;
    printf("%lf", time_taken);

    clock_t start = clock();
    unsigned long5 res = fib_itr(3);
    clock_t duration = clock() - start;
    double time_taken = ((double)duration)/CLOCKS_PER_SEC;
    printf("%lf", time_taken);
}