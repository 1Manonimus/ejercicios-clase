#include <stdio.h>

int main()
{
    int n;
    int sum;
    int i=0;
    int acum=0;
printf("introduzca el número de terminos que deseé que muestre la siguiente serie 5, 10, 15, 20 ...etc.\n");
scanf("%d",&n);

while(i!=n && n!=0)
{
    sum =acum+5;
    acum=sum;
    i=i+1;
    printf ("%d, ",sum);

}

    if(n==0)
{
    printf("no se agrego ningun número de terminos\n");
}



    return 0;
}
