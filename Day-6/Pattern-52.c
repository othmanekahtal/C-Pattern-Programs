#include <stdio.h>
#include <stdlib.h>
void main(){
    int line;
    printf("Enter Number of the line:");
    scanf("%d", &line);
    for (int i = line; i > 0; i--){
        for (int j = 0;j<line-i;j++){
            printf(" ");
        }
        for (int j = 1;j<i*2;j++){
            printf("%c",(64+i*2)-1);
        }
        printf("\n");
    }
}