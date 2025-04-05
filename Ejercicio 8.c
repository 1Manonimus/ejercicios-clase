a)
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int b;
    int res;
printf("introduce un número\n");
scanf("%d",&n);
printf("a que exponencial lo quieres\n");
scanf("%d",&b);
res=pow(n,b);
printf("El resultado es %d\n",res);
    
    return 0;
}

b)
#include <stdio.h>

int main()
{
    int n;
    int b;
    int res;
    int i=1;
    int mos=1;
printf("introduce un número\n");
scanf("%d",&n);
printf("a que exponencial lo quieres\n");
scanf("%d",&b);

while(i<=b)
{
    res=mos*n;
    mos=res;
    i=i+1;
}

printf("el resultado es; %d\n",res);
    
    return 0;
}
