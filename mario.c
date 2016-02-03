/*
check50 2015.fall.pset1.mario mario.c
*/

#include <stdio.h>
#include <cs50.h>
#include <string.h>

void printLevel(int n);

int main(void)
{
    printf("\n\nMario!\n\n");
    printf("Please enter a number between 1 and 23!\n");
    
    int n = GetInt();
    
    while(n < 0 || n > 23){      
        printf("Height: ");
        n = GetInt();
    }
    printLevel(n);
}

void printLevel(int n){
   int count = n;
   for(int i = count; i > 0; i--){
        for(int j = 1; j < count; j++){
            printf(" ");
        }
        for(int j = n - count; j > 0; j--){
            printf("#");
        }
        count--;
        printf("##\n");
    }
}
