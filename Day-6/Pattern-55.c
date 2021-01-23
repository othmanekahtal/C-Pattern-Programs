#include <stdio.h>
#include <stdlib.h>
void main(){
    int line;
    printf("Enter Number of the line:");
    scanf("%d", &line);
    for (int i = 1;i<=line;i++){
        for(int j = 1;j<=i;j++){
            printf("%d",line-j);
        }
        printf("\n");
    }
    for (int i = 1;i<line;i++){
        for(int j = 1;j<=line-i;j++){
            printf("%d",line-j);
        }
        printf("\n");
    }
}