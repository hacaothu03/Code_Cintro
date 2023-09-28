#include<stdio.h> 
int main() { 
double UV;
scanf("%lf",&UV); 
if(UV >= 0 && UV < 3) 
printf("muc thap"); 
else if(UV >= 3 && UV < 6) 
printf("muc trung binh"); 
else if(UV >= 6 && UV < 8 )
printf("muc cao"); 
else if(UV >= 8 && UV <= 11) 
printf("muc rat cao"); 
else if(UV > 11) 
printf("muc nguy hiem"); 
return 0; 
}