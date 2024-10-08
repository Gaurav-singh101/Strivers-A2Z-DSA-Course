#include <stdio.h>

int main() {
    int fr, fc, sr, sc;
    printf("Enter first row & column: ");
    scanf("%d %d", &fr, &fc);

    printf("Enter second row & column: ");
    scanf("%d %d", &sr, &sc);

    int a[fr][fc] , b[sr][sc] , result[fr][sc];
    
    if(fc != sr){
        printf("Mtrix can not be multiply");
        return 1 ;
    }

        printf("Enter 1st matix : \n");
        for(int i = 1 ; i <= fr ; i++){
            for(int j = 1 ; j <=fc ; j++){
                scanf("%d" , &a[i][j]);
            }
        }

        printf("Enter 2nd matix : \n");
        for(int i = 1 ; i <= sr ; i++){
            for(int j = 1 ; j <=sc ; j++){
                scanf("%d" , &b[i][j]);
            }
        }



    int sum = 0 ;
    for(int i = 1 ; i <= fr ; i++){
        for(int j = 1 ; j <= sc ; j++){
            for(int k = 1 ; k <= fc ; k++){
                sum += a[i][k] * b[k][j];
            }
                result[i][j] = sum ; 
                sum = 0 ;
        }
    }


for(int i = 1 ; i <= fr ; i++){
    for(int j = 1 ; j <= sc ; j++){
        printf("  %d" , result[i][j]);
    }
    printf("\n");


    return 0;
}
