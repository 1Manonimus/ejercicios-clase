#include <stdio.h>

int main()
{
    int n;
    float sum;
    int mayor=0;
    int menor=0;
    float pro;
    int b=0;
    int i=1;
    printf("Introduzca 10 números, con base a estos se obtendra su suma, su media, el número mayor introducido y el número menor introducido\n");
while(i<=10)
{
    printf("Introduzca el valor %.d\n",i);
    scanf("%d",&n);
    sum=sum+n;

    if(n>mayor)
    {
        mayor=n;
    }
    if(n<menor)
    {
        menor=n;
    } 
    
i=i+1;
}

pro=sum/10;
if(mayor=menor)
{
    printf("La suma de los 10 números introducidos es; %.0f\n",sum);
    printf("El promedio de los 10 números introducidos es; %.2f\n",pro);
    printf("Se introdujo un mismo número 10 veces, el cual es;%d\n",mayor);
}
else
{
printf("La suma de los 10 números introducidos es; %.0f\n",sum);
printf("El promedio de los 10 números introducidos es; %.2f\n",pro);
printf("El mayor número intriducido es;%d\n",mayor);
printf("el menor número introducido es;%d\n",menor);
}
    return 0;
}
