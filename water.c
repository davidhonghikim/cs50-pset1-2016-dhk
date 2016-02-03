/*
check50 2015.fall.pset1.water water.c
*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = 0;
    int btls = 0;
    printf("\nWater!\n\n");
    printf("minutes: ");
    
    n = GetInt();
    btls = 192/16 * n;
    printf("bottle: %i\n", btls);
}
