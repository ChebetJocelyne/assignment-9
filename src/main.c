#include <stdio.h>

int main() {
    // Declare and initialize a 3D array named scores
    int scores[3][2][2] = {
        {{33, 52}, {10, 12}},
        {{45, 98}, {35, 60}},
        {{84, 76}, {80, 42}}
    };

    // Nested loop to print the elements of the array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                printf("scores[%d][%d][%d] = %d\n", i, j, k, scores[i][j][k]);
            }
        }
    }

    return 0;
}