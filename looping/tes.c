#include <stdio.h>

int main() {
    int nilai;
    scanf("%d", &nilai);
    int kehadiran;
    scanf("%d", &kehadiran);

    if (nilai >= 70) {
        if (kehadiran >= 70) {
            printf("Anda Lulus");
        } else {
            printf("Kehadiran Kureng Boy");
        }
    } else {
        printf("Lu Bego");
    }

    return 0;
}