#include <stdio.h>

int main() {
    int pilihan;
    scanf("%d", &pilihan);

    switch (pilihan) {
        case 1:
            printf("Kopi");
        
        case 2:
            printf("Mie Ayam");
            break;
            default: 
            printf("Ga tersedia men");
    }

    return 0;
}