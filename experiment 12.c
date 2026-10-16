
#include <stdio.h>

int main() {

    int rows = 3;
    int cols = 15;

    for (int i = 1; i <= rows; i++) {
    for (int j = 1; j <= cols; j++) {
    if ((i + j) % 4 == 0 || (j - i + 4) % 4 == 2) {
    printf("*");
    } else {
    printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
