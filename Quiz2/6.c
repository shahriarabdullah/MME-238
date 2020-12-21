#include<stdio.h>

int main()
{
    int r=4,c=4,i,j,mat[r][c],trace=0;

//6a starts

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

//6a ends

//6b starts
for(i=0;i<=3;i++){
        trace+=mat[i][i];
}

printf("\nThe trace of the matrix is %d\n",trace);

//6b ends

}
