#include <stdio.h>
#define MAX_VALUE 100000000
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


int min(int x, int y){
    if (x < y){return x;}
    else {return y;}
}


void B(){

    int i,j,k, t,s;
    scanf("%d %d", &i, &j);
     int ans[10][10];

    for (t = 0; t< 10; t++){
        for (s = 0; s < 10; s++){
            ans[t][s] = mat[t][s];
            if(t!=s && mat[t][s]==0){
                ans[t][s]= MAX_VALUE;
            }
        }
    }
    for (k = 0; k < 10; k++) {
        for (t = 0; t < 10; t++) {
            for (s = 0; s < 10; s++) {
                ans[t][s]= min(ans[t][s],ans[t][k]+ans[k][s]);
        


            }
        }
    }
   
     if(ans[i][j] != MAX_VALUE && i != j){
        printf("%s", "True \n");
     } 
    else{
        printf("%s", "False \n");
    } 
     
}


void calc(int t,int s){
    int ans[10][10], i, j, k;

    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            ans[i][j] = mat[i][j];
            if(i!=j && mat[i][j]==0){
                ans[i][j]= MAX_VALUE;
            }
        }
    }
    for (k = 0; k < 10; k++) {
        for (i = 0; i < 10; i++) {
            for (j = 0; j < 10; j++) {
                ans[i][j]= min(ans[i][j],ans[i][k]+ans[k][j]);
        


            }
        }
    }

    if(ans[t][s] != MAX_VALUE && t!=s){
        printf("%d\n", ans[t][s]);
    }else{
        printf("-1\n");   
    }

}


void C(){
int i, j;   
scanf ("%d %d", &i, &j);
calc(i,j);
}
