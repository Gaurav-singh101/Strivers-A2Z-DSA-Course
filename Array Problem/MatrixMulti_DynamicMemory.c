#include<stdio.h>
#include <stdlib.h>

int main(){

    int fr ,fc ,sr ,sc ;
    printf("Enter 1st row & column : ");
    scanf("%d %d" , &fr ,&fc);
    printf("Enter 2nd row & column : ");
    scanf("%d %d" , &sr ,&sc);

    if(fc != sr){
        printf("Matris cannot be multiply");
        return 1 ;
    }


    int **a = (int **)malloc(fr * sizeof(int *));
    int **b = (int **)malloc(sr * sizeof(int *));
    int **result = (int **)malloc(fr * sizeof(int *));

    for(int i = 0 ; i < fr ; i++){
        a[i] = (int *)malloc(fc * sizeof(int *));
        result[i] = (int *)malloc(sc * sizeof(int *));
    }

    for(int i = 0; i < sr; i++) {
       b[i] = (int *)malloc(sc * sizeof(int *));
    }


    printf("Enter 1st matrix:\n");
    for(int i = 0; i < fr; i++) {
        for(int j = 0; j < fc; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter 2nd matrix:\n");
    for(int i = 0; i < sr; i++) {
        for(int j = 0; j < sc; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Initializing the result matrix to zero
    for(int i = 0; i < fr; i++) {
        for(int j = 0; j < sc; j++) {
            result[i][j] = 0;
        }
    }

    // Performing matrix multiplication
    for(int i = 0; i < fr; i++) {
        for(int j = 0; j < sc; j++) {
            for(int k = 0; k < fc; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Resultant matrix:\n");
    for(int i = 0; i < fr; i++) {
        for(int j = 0; j < sc; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < fr; i++) {
        free(a[i]);
        free(result[i]);
    }
    for(int i = 0; i < sr; i++) {
        free(b[i]);
    }
    free(a);
    free(b);
    free(result);

    return 0 ;
}


