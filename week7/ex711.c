/*viết chương trình tính ra số gà số chó trong bài toán
Vừa gà vừa chó, bó lại cho tròn, 36 con, 100 chân chẵn
*/

#include <stdio.h>

int main(){
    int ga, cho;

    for (ga=1;ga<=36;ga++)
    {
        for(cho=36-ga; cho<=36; cho++)
        {
            if(2*ga+4*cho == 100)
            {
                printf("Ga: %d, cho: %d\n", ga, cho);
                
            }
            break;
        }
        
    }
    return 0;
}