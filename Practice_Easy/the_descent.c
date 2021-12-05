#include <stdio.h>

/* 
*===================== The Goal =====================
*Destroy the mountains before your starship collides with one of them. 
*For that, shoot the highest mountain on your path.
*===================== The Rules =====================
*At the start of each game turn, you are given the height of the 8 mountains from left to right.
*By the end of the game turn, you must fire on the highest mountain by outputting its index (from 0 to 7).
*Firing on a mountain will only destroy part of it, reducing its height.
*Your ship descends after each pass.
*/

int main(void)

{
    int mountain_h;
    int shoot;
    int max_high;

    while (1)
    {
        shoot = 0;
        max_high = 0;
        for (int i = 0; i < 8; i++)
        {
            scanf("%d", &mountain_h);
            if (mountain_h > max_high)
            {
                max_high = mountain_h;
                shoot = i;
            }
        }
        printf("%d\n", shoot);
    }
    return (0);
}