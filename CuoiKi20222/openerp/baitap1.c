#include <stdio.h>
#define DUOI60 10000
#define TREN60 8000

int main() {
    int soTuoi, soBuoc, yeuCau, soBuocKhac ; 
    int tongBuoc = 0;
   

    scanf("%d", &soTuoi);
    if (soTuoi < 60) {
        yeuCau = DUOI60;
    } else {
        yeuCau = TREN60;
    }

    while (1) {
        scanf("%d", &soBuoc);
        if (soBuoc == -1) {
            break;
        }
        tongBuoc += soBuoc;
    }

    soBuocKhac = yeuCau - tongBuoc;
    if (soBuocKhac <= 0) {
        printf("0\n");
    } else {
        printf("%d\n", soBuocKhac);
    }

    return 0;
}
