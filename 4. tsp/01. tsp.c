#include <limits.h>
#include <stdio.h>

int shortest_path_length(int distances[4][4]) {

    int optPathLength = INT_MAX;
    int city0 = 0;

    for (int city1=1; city1<4; city1++) {
        for (int city2=1; city2<4; city2++) {
            for (int city3=1; city3<4; city3++) {
                if (city1 != city2 && city1 != city3 && city2 != city3) {
                    int pathLength = distances[city0][city1] +
                                     distances[city1][city2] +
                                     distances[city2][city3] +
                                     distances[city3][city0];
                    if (pathLength < optPathLength) {
                        optPathLength = pathLength;
                    }
                }

            }
        }
    }
    return optPathLength;
}

int main() {
    
}