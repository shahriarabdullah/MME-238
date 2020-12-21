#include<stdio.h>

int main()
{

float units,cost=0;

printf("Enter number of units consumed: ");
scanf("%f",&units);

if(units>0 && units<=100){
    cost=units*5;
} else if(units>100 && units<=130){
    cost=(100*5)+(units-100)*5.5;
} else if(units>130 && units<=150){
    cost=(100*5)+(30*5.5)+(units-130)*6;
} else if(units>150){
    cost=(100*5)+(30*5.5)+(20*6)+(units-150)*7;
}

printf("The total bill is %.2f\n",cost);

}
