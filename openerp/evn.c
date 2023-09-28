#include <stdio.h>

int main(){
    float giaDienCu[] = {1.728, 1.786, 2.074, 2.612, 2.919, 3.015};
    float giaDienMoi[] = {1.728, 2.074, 2.612, 3.111, 3.457};
    int soDien;
    float tienDienCu, tienDienMoi, chenhLech;
    switch (soDien)
    {
    case 0 ... 50:
        tienDienCu = giaDienCu[0]*soDien;
        break;
    case 51 ... 100:
        tienDienCu = giaDienCu[0]*soDien;
        break;
    case 101 ... 200:
        tienDienCu = giaDienCu[0]*soDien;
        break;
    case 201 ... 300:
        tienDienCu = giaDienCu[0]*soDien;
        break;
    case 301 ... 400:
        tienDienCu = giaDienCu[0]*50+giaDienCu[1]*50+giaDienCu[2]*100+giaDienCu[3]*100+(soDien-300)*giaDienCu[4];
        break;
    default:
        tienDienCu = giaDienCu[0]*50+giaDienCu[1]*50+giaDienCu[2]*100+giaDienCu[3]*100+giaDienCu[4]*100+ giaDienCu[5]*(soDien-400);
        break;
    }
}