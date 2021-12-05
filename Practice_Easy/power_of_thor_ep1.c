#include <stdio.h>

/* 
*===================== The Goal =====================
*Your program must allow Thor to reach the light of power.
*===================== The Rules =====================
*Thor moves on a map which is 40 wide by 18 high. 
*Note that the coordinates (X and Y) start at the top left!
*This means the most top left cell has the coordinates "X=0,Y=0"
*and the most bottom right one has the coordinates "X=39,Y=17".
*At the end of the game turn, you must output the direction in which you want Thor to go among:
*"N" (North)
*"NE"(North-East)
*"E"(East)
*"SE"(South-East)
*"S"(South)
*"SW"(South-West)
*"W"(West)
*"NW"(North-West)
*/

int main()
{
    int light_x; // the X position of the light of power that Thor must reach.
    int light_y; // the Y position of the light of power that Thor must reach.
    int initial_tx; // the starting X position of Thor.
    int initial_ty; // the starting Y position of Thor.
    scanf("%d%d%d%d", &light_x, &light_y, &initial_tx, &initial_ty);
    int pos_y = initial_ty;
    int pos_x = initial_tx;
    while (1)
    {
        int remaining_turns;
        scanf("%d", &remaining_turns);
        if (pos_y > light_y && pos_y > 0)
        {
            printf("N");
            pos_y--;
        }
        if (pos_y < light_y && pos_y < 18)
        {
            printf("S");
            pos_y++;
        }
        if (pos_x < light_x && pos_x < 40)
        {
            printf("E");
            pos_x++;
        }
        if (pos_x > light_x && pos_x > 0)
        {
            printf("W");
            pos_x--;
        }
        printf("\n");
    }
    return 0;
}