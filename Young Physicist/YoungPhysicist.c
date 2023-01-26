#include<stdio.h>

int main(){
    int i, j, n, x1=0, x2=0, x3=0;
    scanf("%d",&n);
    int a[n*n][n*n];

    for(i=0; i<n; i++){
       for(j=0; j<n; j++){
         scanf("%d",&a[i][j]);
       }
       x1 = x1+a[i][0];
       x2 = x2+a[i][1];
       x3 = x3+a[i][2];
    }

    if(x1==0 && x2==0 && x3==0)
        printf("YES");
    else
        printf("NO");
}
