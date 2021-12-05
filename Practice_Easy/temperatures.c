#include <stdio.h>

/* 
*===================== The Goal =====================
*In this exercise, you have to analyze records of temperature to find the closest to zero.
*===================== The Rules =====================
*Write a program that prints the temperature closest to 0 among input data.
If two numbers are equally close to zero, positive integer has to be considered closest to zero
(for instance, if the temperatures are -5 and 5, then display 5).
*/

int main()
{
    int n;
    int max_positive;
    int max_negative;

    max_positive = 5527;
    max_negative = -274;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int t;
        scanf("%d", &t);
        if (t >= 0 && t < 5527 && t < max_positive)
        max_positive = t;
        if (t < 0 && t > -274 && t > max_negative)
        max_negative = t;
    }
    if (max_positive == 5527 && max_negative == -274)
    {
        printf("0\n");
        return (0);
    }
    if ((max_positive <= max_negative * -1) || max_negative <= -274)
    {
        printf("%d\n", max_positive);
        return (0);
    }
    if (max_positive > max_negative * -1)
    {
        printf("%d\n", max_negative);
        return (0);
    }
}