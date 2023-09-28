// #include <stdio.h>
// int main(){
//     int array[2][2][3]={0,1,2,3,4,5,6,7,8,9,10,11};
//     printf("%d", array[1][0][2]);
//     return 0;
// }
// #include <stdio.h>
// int main(){
//     int a=15,b=10,c=5;
//     if(a>b>c)
//     printf("True");
//     else
//     printf("False");
//     return 0;
// // }

// #include <stdio.h>
// #define PRINT printf("c");printf("c++");
// int main(){
//     float a=5.5;
//     if(a==5.5)
//     PRINT
//     else 
//     printf("Not equal");
//     return 0;
// }

// #include <stdio.h>
// #define SWAP(a,b) int t; t=a,a=b,b=t;
// int main(){
//     int a=10,b=12;
//     SWAP(a,b);
//     printf("a=%d, b=%d",a,b);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int arr[2];
//     arr[3]=10;
//     printf("%d",arr[3]);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     float a=0.7;
//     if(a<0.7)
//         printf("c");
//     else printf("c++");
//     printf("%.10f %.10f", 0.7, a);
//     return 0;
// // }

// #include <stdio.h>

// int main(){
//     int x;
//     for(x=-1;x<=10;x++)
//     {
//         if(x<5){
//          printf("f");
//         continue;
//         }   
        
//         else
//         break;
//         printf("jjf");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int i=1;
//     while(i<2){
//         printf("%d",i++);
//         if(i>10)
//         break;

//     }
//     printf("%d",i);
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int i=1;
//     switch(i){
//         printf("jdnfis");
//         case 1:
//         printf("jfd");
//         break;
//         case 2:
//         printf("hbsj");
//         break;
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int i=-3,j=2,k=0,m;
//     m=++i||++j&&++k;
//     printf("%d, %d, %d, %d", i, j, k, m);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int i=3;
//     i=++i;
//     printf("%d",i);

//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int i=2;
//     i=i--;
//     printf("%d",i);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int x=4,y,z;
//     y=--x;
//     z=x--;
//     printf("%d",x);
//     printf("%d,%d,%d", x,y,z);
//     return 0;
// }

// #include <stdio.h>
// #define CUBE b++

// int main()
// {
//     int a, b=3;
//     a=CUBE;
//     printf("%d",b);
//     return 0;
// }

// #include <stdio.h>
// #define SQUARE(x) x*x 

// int main(){
//     float s=10,u=30,t=2,a;
//     a=2*(s-u*t)/SQUARE(t);
//     printf("result = %f",a);
//     return 0;
// }

// #include <stdio.h>
// #define SI(p,n,r) p*n*r/100
// int main(){
//     float p=2500,r=3.5;
//     int n=3;
    
//     int a=SI(1500,2,2.5);
//     printf("%d",a);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int x = 30,*y,*z;
//     y=&x;
//     z=y;
//     *y=*z++;
//     printf("%dx=%d,y=%d,z=%d",&x,x,y,z);
// //     return 0;
// // }

// #include <stdio.h>
// #include <string.h>

// int main(){
//     char str[]="JavaTPoint";
//     printf("%s",str);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     char p[]="%d";
//     p[1]='c';
//     printf(p,65);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     void fun();
//     fun();
//     printf(" ");
//     return 0;
// }
// void fun(){
//     char c;
//     if((c=getchar())!='\n')
//     fun();
//     printf("%c",c);
// }

// #include <stdio.h>
// int main(){
//     printf(5+"Good Morning ");
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main(){
//     char *name="ann";
//     printf("%s",name);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main(){
//     char string1[80];
//     char string2[80] = "World";
//     strcpy(string1, "Hello");
//     strcpy(string2, string1);
//     printf("%s%s",string1, string2);
//     return 0;
// }

// #include <stdio.h>
// int f(int a, int b){
//     while(a!=b)
//         if(a>b)a=a-b;
//     else b=b-a;
//     return a;
// }

// void main(){
//     printf("%d", f(25,f(30,45)));
// }

// #include <stdio.h>
// #include <string.h>

// void main(){
//     char str[]={'a','b','\0','s','r','\0'};
//     printf("%d",strlen(str));
// }

#include <stdio.h>

int main(){
    int arr[3]={0,1,2};
    printf("%x %x %x", &arr[0],&arr[1],&arr[2]);
    return 0;
}