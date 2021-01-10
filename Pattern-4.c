#include <stdio.h>
#include <stdlib.h>
void main(void){
    int line;
    printf("Enter Number of Line :");
    scanf("%d", &line);
    for (int i = 0; i < line; i++)
    {
        for (int j = 1; j <= line; j++)
        {
            printf(" %d ", j);
        }
        printf("\n");
    }

}