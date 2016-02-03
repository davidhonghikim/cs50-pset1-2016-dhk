/*
check50 2015.fall.pset1.greedy greedy.c
*/

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void){
    int tCount = 0;
    int counter = 0;
    int tMod = 0;
    int n = 0;
    printf("\nOh hai! How much change is owed?\n");
    
    n = (int)round(100*GetFloat());
    
    while(n<0){
        n=0;
        printf("How much change is owed\n?");
        n = (int)round(100*GetFloat());
    }
    
    tMod = n;  
    tCount = tMod/25;
    counter += tCount;
    tMod = tMod%25;
//    printf("Quarter - Mod = %i\n", tMod);
//    printf("Counter = %i coins\n", counter);
        
    tCount = tMod/10;
    counter += tCount;
    tMod = tMod%10;
//    printf("Dimes   - Mod = %i\n", tMod);
//    printf("Counter = %i coins\n", counter);    
    
    tCount = tMod/5;
    counter += tCount;
    tMod = tMod%5;
//    printf("Nickels - Mod = %i\n", tMod);
//    printf("Counter = %i coins\n", counter);
    
    tCount = tMod/1;
    counter += tCount;
//    printf("Pennies - Mod = %i\n", tMod);
//    printf("Counter = %i coins\n", counter);

    printf("%i\n", counter);   
}
