#include <stdio.h>

int main() {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

/*penjelasannya untuk i = 1, i kurang dari 3 lalu i ditambah 1, Sama halnya dengan for didalamnya untuk j = 1, lalu j kurang dari 3 kemudian j ditambah 1. lalu dilakuakan fungsi print untuk print * print diluar scope looping berfungsi untuk membuat baris baru guna mencetak bintang menjadi 3x3*/