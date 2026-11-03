#include <stdio.h>

int main() {
    int j;
    scanf("%d", &j);
    int total = 0;
    if (j <= 0) {
        printf("Invalid\n");
    } else {
        for (int i = 1; i <= j; i++) {
            printf("%d", i);
            total += i;
        }
    }
    printf("\nTotal: %d\n", total);
    
    return 0;
}