#include <stdio.h>
#include <math.h>
#include "my_mat.h"

int mat[10][10];

void A(){
     int i, j;
     for(i=0; i<10; i++){
          for(j=0; j <10; j++){
               scanf("%d", &mat[i][j]);
          }
     }
}



void B(){
int i,j;
scanf("%d %d", &i, &j);
   
     if(mat[i][j] > 0){
        printf("%s", "True \n");
     } 
    else{
        printf("%s", "False \n");
    } 
     
}

int min(int x, int y){
    if (x < y){return x;}
    else {return y;}
}

void calc(int i_c,int j_c){
    int ans[10][10], i, j, k;

    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            ans[i][j] = mat[i][j];
        }
    }
    for (k = 0; k < 10; k++) {
        for (i = 0; i < 10; i++) {
            for (j = 0; j < 10; j++) {
                ans[i][j]= min(ans[i][j],ans[i][k]+ans[k][j]);
        


            }
        }
    }

    if(ans[i_c][j_c]>0){
    printf("%d\n", ans[i_c][j_c]);
    }else{
    printf("-1\n");   
    }

}


void C(){
int i, j;   
scanf ("%d %d", &i, &j);
calc(i,j);
}
