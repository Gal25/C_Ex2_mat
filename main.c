#include <stdio.h>
#include <math.h>
#include "my_mat.h"

int main(){
   
   char i;
   scanf("%c",&i);

   while (i != 'D'){

     if(i == 'A'){
          A();
     }
     if(i == 'B'){
          int ans[10][10] = A();
          B(ans);
     }
     if(i == 'C'){
        int ans[10][10] = A();
          C(ans);
     }

   }

return 0;
}
