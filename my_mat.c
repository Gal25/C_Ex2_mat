#include <stdio.h>
#define MAX_VALUE 100000000 //Define if there is no route between i j
#include "my_mat.h"
#define N 10 //The size of the rows and columns of the matrix

int mat[N][N];

void A(){
     int i, j;
     for(i=0; i<N; i++){
          for(j=0; j <N; j++){
               scanf("%d", &mat[i][j]);
          }
     }
}

//return the min value
int min(int x, int y){
    if (x < y){return x;}
    else {return y;}
}


void B(){

    int i,j,k, t,s;
    scanf("%d %d", &i, &j);
     int ans[N][N];

    for (t = 0; t< N; t++){
        for (s = 0; s < N; s++){
            ans[t][s] = mat[t][s];
            if(t!=s && mat[t][s]==0){
                ans[t][s]= MAX_VALUE;
            }
        }
    }
    for (k = 0; k < N; k++) {
        for (t = 0; t < N; t++) {
            for (s = 0; s < N; s++) {
                ans[t][s]= min(ans[t][s],ans[t][k]+ans[k][s]);
        


            }
        }
    }
   
     if(ans[i][j] != MAX_VALUE && i != j){
        printf("%s", "True\n");
     } 
    else{
        printf("%s", "False\n");
    } 
     
}


void calc(int t,int s){
    int ans[N][N], i, j, k;

    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            ans[i][j] = mat[i][j];
            if(i!=j && mat[i][j]==0){
                ans[i][j]= MAX_VALUE;
            }
        }
    }
    for (k = 0; k < N; k++) {
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
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

