#include<stdio.h> 
int main() { 
    double vmax, s, v, mua; 
    scanf("%lf %lf %lf", &vmax, &s, &v); 
    mua=s* (v/1000); 
    if(mua < vmax) 
    printf("%.2f", mua); 
    else printf("%.2f", vmax); 
    return 0;
    }