#include<stdio.h>
#include<math.h>

//Abdullah Shahriar
//22.12.2020


// If the series is as following-
// y=x^1/1! + x^2/2! + ... + x^n/n!
// then use function for factorials

int factorial(int n){ //this function returns n!
    int f=1, i=1;

    for(i=1;i<=n;i++){
        f*=i;
    }

    return f;

}


int main()
{

double x,y=0,i;
printf("Enter value of x: ");
scanf("%lf",&x);


for(i=1;i<=5;i++){ //Instead of 15 used 5 to avoid integer overflow
    y+=pow(x,i)/factorial(i); //Calling the factorial function
}

printf("\nThe summation is %lf\n",y);

}
