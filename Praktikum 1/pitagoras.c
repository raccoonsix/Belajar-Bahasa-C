#include <stdio.h>
#include <math.h>

int main(void) {
    int alas = 5;
    int tinggi = 12;

    int miring = (int)sqrt((alas * alas) + (tinggi * tinggi));
    
    int keliling = alas + tinggi + miring;
    int luas = (alas * tinggi) / 2;

    printf("diketahui :\n");
    printf("alas = %d cm\n", alas);
    printf("tinggi = %d cm\n\n", tinggi);

    printf("Jawab : \n");
    printf("Sisi A = %d cm\n", alas);
    printf("Sisi B = %d cm\n", tinggi);
    printf("Sisi C = %d cm\n", miring);
    
    printf("Keliling = %d cm\n", keliling);
    printf("Luas = %d cm\n", luas);

    return 0;
}