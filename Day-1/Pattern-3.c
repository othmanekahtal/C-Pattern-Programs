#include <stdio.h>
#include <stdlib.h>

void main(void) {
    int line;
    printf("Enter Number of line :");
    scanf("%d",&line);
    for (int i = 1;i<=line;i++)
    {
        for (int j = 1;j<=line;j++)
        {
            printf(" %d ", i);
        }
        printf("\n");
    }
}
