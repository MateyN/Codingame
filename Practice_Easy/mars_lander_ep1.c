#include <stdio.h>

/* 
=============================== HINT ===============================
*If your vertical speed is less than or equal to -40 (shuttle falling too fast), 
*then you need to slow your descent: outputting a thrust power of 4 will do this.
*If your vertical speed is greater than -40 (shuttle falling slowly enough),
*then you may let gravity take over and save fuel: outputting a thrust power of 0 will do this.
*/

int main()
{
    int surface_n; // the number of points used to draw the surface of Mars.
    scanf("%d", &surface_n);
    for (int i = 0; i < surface_n; i++)
    {
        int land_x; // X coordinate of a surface point. (0 to 6999)
        int land_y; // Y coordinate of a surface point. By linking all the points together in a sequential fashion, you form the surface of Mars.
        scanf("%d%d", &land_x, &land_y);
    }

    while (1)
    {
        int X;
        int Y;
        int h_speed; // the horizontal speed (in m/s), can be negative.
        int v_speed; // the vertical speed (in m/s), can be negative.
        int fuel; // the quantity of remaining fuel in liters.
        int rotate; // the rotation angle in degrees (-90 to 90).
        int power; // the trust power (0 to 4).
        scanf("%d%d%d%d%d%d%d", &X, &Y, &h_speed, &v_speed, &fuel, &rotate, &power);
        if (v_speed <= -40)
        printf("0 4\n");
        else
        printf("0 0\n");
    }
    return 0;
}