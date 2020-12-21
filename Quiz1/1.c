#include<stdio.h>

int main()
{
    int h,k,l;
    scanf("%d%d%d",&h,&k,&l);

    if((h+k+l)%2==0)
        printf("Allowed\n");
    else
        printf("Forbidden\n");
}
