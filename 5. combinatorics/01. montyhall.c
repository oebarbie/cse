#include <stdio.h>
#include <stdlib.h> // for random numbers
// rand() % 3 == [0;3) get a "random" integer number

int main() {

    int cnt = 0;

    for (int i=0; i<1000; i++) {

        int prize_door = rand() % 3;          // 0 OR 1 OR 2 // 2 // 2
        int contestant_door = rand() % 3;    // 0 OR 1 OR 2 // 1 // 1
        int host_door = contestant_door;    // 0 OR 1 OR 2 // 1 // 3

        while (contestant_door == host_door || host_door == prize_door) {
            host_door = rand() % 3;
        }

        // switch strategy

        if (contestant_door != prize_door) {
            cnt += 1;
        }
    }

    double ans = cnt / 1000.0;
    printf("ans is %f\n", ans);
    return 0;
}