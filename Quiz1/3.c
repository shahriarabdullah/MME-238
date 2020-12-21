#include<stdio.h>

int main()
{

int r=4,c=4,i,j,mat[r][c],sum=0;

//3a starts

for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&mat[i][j]);
        }
}

printf("\nThe matrix you entered is\n\n");

for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
}

//3a ends


//3b starts
for(i=2;i==2;i++){
    for(j=0;j<c;j++){
        sum+=mat[i][j];
    }
}

printf("The sum of elements of third row is %d\n",sum);

//3b ends

//3c starts
sum=(mat[1][2]%10)+(mat[1][2]/10);
printf("The sum of digits of %d is %d\n",mat[1][2],sum);
//3c ends

//For 3d check


}
