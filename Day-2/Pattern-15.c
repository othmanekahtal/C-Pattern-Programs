#include <stdio.h>
#include <stdlib.h>

void main(){
    int line;
    printf("Enter the Number of lines : ");
    scanf("%d",&line);
    for (int i = line;i>=1;i--){
        for (int j = 0; j < i; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}