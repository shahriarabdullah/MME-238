//Abdullah Shahriar
//04.03.2020
#include<stdio.h>

int main()
{
    int i,j,n;
    int matrix[4][4]={
        {13,44,33,43},
        {14,11,41,21},
        {43,24,12,34},
        {34,31,23,21}
    };

    //Use the following block if you wan't to input a matrix by yourself

    /*for(i=0;i<=3;i++){
        for(j=0;j<=3;j++){
            scanf("%d",&matrix[i][j]);
        }
    }*/

n=matrix[0][0];

while(matrix[(n/10)-1][(n%10)-1]!=n){
    n=matrix[(n/10)-1][(n%10)-1];
}

printf("\nThe treasure is %d\n",n);

}