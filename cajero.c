#include <stdio.h>

int main (void)
{
    int monto =0;

    printf("Ingrese un monto a retirar: ");
    scanf("%d",&monto);
    
    int billete1 =0;
    int billete5 =0;
    int billete10 =0;
    int billete20 =0;
    int billete50 =0;
    int billete100 =0;
    
    if (monto<20)
    {
        printf ("Error");
        return 1;
    }
    else if (monto>5000)
    {
        printf ("Error");
        return 2;
    }
    else
    {
       printf ("Monto aceptado ");
    }
    while (monto>=100)
    {
        billete100++;
        monto=monto-100;
    }
    while (monto>=50)
    {
        billete50++;
        monto=monto-50;
    }
    while (monto>=20)
    {
        billete20++;
        monto=monto-20;
    }
    while (monto>=10)
    {
        billete10++;
        monto=monto-10;
    }
    while (monto>=5)
    {
        billete5++;
        monto=monto-5;
    }
    while (monto>=1)
    {
        billete1++;
        monto=monto-1;
    }

printf ("Billetes de 100: %d  ", billete100);
printf ("Billetes de 50: %d  ", billete50);
printf ("Billetes de 20: %d  ", billete20);
printf ("Billetes de 10: %d  ", billete10);
printf ("Billetes de 5: %d  ", billete5);
printf ("Billetes de 1: %d  ", billete1);

}