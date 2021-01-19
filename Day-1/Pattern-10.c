#include <stdio.h>
#include <stdlib.h>
void main(){
    int line;
    printf("Enter Number of the line:");
    scanf("%d", &line);
    for (int i = 0;i<line;i++){
        int n = 1;
        for (int j = line; j > i; j--)
        {
            printf(" %d ", n);
            n++;
        }
        printf("\n");
    }
}