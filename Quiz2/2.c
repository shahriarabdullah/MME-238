#include<stdio.h>
#include<math.h>

int main()
{
double x,y=0,i;
printf("Enter value of x: ");
scanf("%lf",&x);


for(i=1;i<=15;i++){
    y+=pow(x,i)/i;
}

printf("\nThe summation is %lf\n",y);

}
