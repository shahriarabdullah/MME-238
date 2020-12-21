#include<stdio.h>
#include<math.h>

int main()
{


    int Ys=370,Fs=440,E=205000,k=600;
    float n=0.2;

    double stress,strain=0,L=50;

    printf("Enter stress value (MPa): ");
    scanf("%lf",&stress);

    if(stress>=0 && stress <=Ys){
            strain=stress/E;
    } else if(stress>Ys && stress<Fs){
        strain=(stress-370)/k;
        strain=pow(strain,1/n);
        strain=strain+0.0018049;
    }

    L=L*(1+strain);

    printf("\Final length = %lf mm\n",L);







}
