#include <stdio.h>
#include <math.h>

int main() {

    double x1, x2, a, b, c, d;
    scanf("%lf %lf %lf", &a, &b, &c);

    d = b*b - 4*a*c;

    if (d>0) {
        x1 = (-b + quad(d))/(2*a);
        x2 = (-b - quad(d))/(2*a);
        printf("2 solutions: %lf", &x1, &x2);
    }
    else if (d<0) {
        printf("no solutions");
    }
    else if (d=0) {
        x1 = x2 = -b/(2*a);
        printf("x1 = x2 = %2lf", &x1);
        return 0;
    }

    if (d>0) {
    
    }

    
}