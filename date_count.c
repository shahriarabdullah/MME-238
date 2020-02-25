//Abdullah Shahriar
//22.02.2020
#include<stdio.h>
#include<math.h>

int main()
{
  
    int days,year,month,day,day_count=0,month_count;
    int days_in_month[]={31,28,31,30,31,30,31,31,30,31,30,31};

    printf("Enter number of days: ");
    scanf("%d",&days);

    year=days/365; //Calculating year

    //Calculating month
    for(month_count=0;day_count<=days%365;month_count++){
    day_count+=days_in_month[month_count];
    }

    day=day_count-days_in_month[month_count-1]-(days%365); //Calculating day

    printf("%d years %d months %d days",year,month_count-1,abs(day));

}
