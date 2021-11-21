#include <stdio.h>
#include <math.h>
#include "my_mat.h"

void A(int mat[10][10]){
     int i, j;
     for(i=0; i<=10; i++){
          for(j=0; j <=10; j++){
               scanf("%d", &mat[i][j]);
          }
     }

}
void B(int mat[10][10]){
    int i,j;
    int ans[][];
    scanf("%d %d", &i, &j);
    ans = C(mat);
     if(mat[i][j] >= 0){
         printf("%s", "True");
     }
     else {
         printf("%s", "False");
     }
}

void print_ans(int[][] ans);
void C(int[10][10] mat){
int[10][10] ans , i , j, k;
scanf("%d %d", &i, &j);
for(k=0; k <= 10; k++){
    for(i=0; i<=10; i++){
        for(j=0; j<=10; j++){
            ans[i][j]=fmin(ans[i][j],ans[i][k]+ans[k][j]);
        }
    }
}

print_ans(ans);}

void print_ans(int[][] ans){
    int i,j;
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            if (ans[i][j] == 0){
                 printf("%d", -1);
            }
            else{
                printf("%d", ans[i][j]);
            }  
        }
    }
}
