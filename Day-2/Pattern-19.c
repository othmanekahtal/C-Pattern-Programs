#include <stdio.h>
#include <stdlib.h>

void main(){
    int line;
    printf("Enter the Number of lines : ");
    scanf("%d",&line);
    for (int i = line;i>=1;i--){
    int x = 1;
        for (int j = 0; j < i; j++)
        {
            printf(" %c ",x+64);
            x++;
        }
        printf("\n");

    }
}