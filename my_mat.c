#include <stdio.h>
#include <math.h>
#include "my_mat.h"

int A(){
     int i, j;
     int mat[10][10];
     for(i=0; i<=10; i++){
          for(j=0; j <=10; j++){
               scanf("%d", &mat[i][j]);
          }
     }
     return mat;

}

void B(int mat[10][10]){
    int i,j;
    // int ans[10][10];
    scanf("%d %d", &i, &j);
    // ans = C(mat);
     if(mat[i][j] >= 0){
         printf("%s", "True");
     }
     else {
         printf("%s", "False");
     }
}

int min(int x, int y);
void print_ans(int ans[10][10]);
void C(int mat[10][10]){
int ans[10][10] , i , j, k;
scanf("%d %d", &i, &j);
for(k=0; k <= 10; k++){
    for(i=0; i<=10; i++){
        for(j=0; j<=10; j++){
            ans[i][j]= min(ans[i][j],ans[i][k]+ans[k][j]);
        }
    }
}

print_ans(ans);
}

void print_ans(int ans[10][10]){
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

int min(int x, int y){
    if (x < y){return x;}
    else {return y;}
}
