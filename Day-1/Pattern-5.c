#include <stdio.h>
#include <stdlib.h>
void main(void){
    int line;
    char alphabet[] = {"ABCDEFGHIKLMNOPQRSTVXYZ"};
    printf("Enter Number of the line:");
    scanf("%d", &line);
    for (int i = 0;i<line;i++)
    {
        for (int j = 0;j<line;j++){
            printf(" %c ",alphabet[i]);
        }
        printf("\n");
    }
}