#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) {
            printf("  ");
        }
        int val = 1;
        for (int k = 0; k <= i; k++) {
        printf("%4d", val);
        val = val * (i - k) / (k + 1);
        }
        printf("\n");
    }
    return 0;
}

