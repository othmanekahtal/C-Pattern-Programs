#include <stdio.h>
#include <stdlib.h>
void main(){
    int line;
    printf("Enter Number of the line:");
    scanf("%d", &line);
    for (int i = 1;i<=line;i++){
        for (int j = 0;j<line-i+1;j++){
            printf(" ");
        }
        for (int j = i*2-1;j>0;j--){
            printf("%d",j);
        }
        printf("\n");
    }
}