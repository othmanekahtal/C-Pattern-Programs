#include <stdio.h>
#include <stdlib.h>
void main(){
    int line;
    printf("Enter Number of the line:");
    scanf("%d", &line);
    for (int i = 0; i < line; i++)
    {
        for (int j = 0;j<line-i;j++){
            printf(" ");
        }
        for (int j = 0 ;j<=i;j++){
            printf("%c",j+65);
        }
        for (int j = i;j>0;j--){
            printf("%c",j+64);
        }
        printf("\n");
    }
}