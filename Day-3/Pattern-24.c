#include <stdio.h>
#include <stdlib.h>
void main(){
    int line;
    printf("Enter Number of the line:");
    scanf("%d", &line);
    for (int i = 1;i<=line;i++){// loop for lines:
        for (int j = 1;j<=line-i;j++){// loop for whitespace:
        printf("   ");// hna whitespace fiha 3
        }
        for (int k = 1; k <= i ;k++){ // loop for stars:
        printf(" * ");// hna whitespace fiha 2
        }
        printf("\n");
    }
}