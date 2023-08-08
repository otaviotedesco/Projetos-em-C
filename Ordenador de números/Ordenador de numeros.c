#include <stdio.h>
int main (){


int a, b, c;

printf ("Digite 3 valores diferentes, e apos vamos ordenar eles em ordem crescente\n");
printf ("Digite o primeiro numero\n");
scanf ("%i", &a);
printf ("Digite o segundo numero\n");
scanf ("%i", &b);
printf ("Digite o terceiro numero\n");
scanf ("%i", &c);

    if (a > b && b > c)
    { 
        printf ("A ordem dos numeros eh %i, %i, %i", a, b, c);
    }
    else if (a > b && c > b)
    { 
        printf ("A ordem dos numeros eh %i, %i, %i,",a, c, b);
    }
   
    else if (b > a && a > c )
    {
        printf ("A ordem dos numeros eh %i, %i, %i,", b, a, c);
    }
    
    else if (b > c && c > a)
    { 
        printf ("A ordem dos numeros eh %i, %i, %i", b, c, a);
    }
    else if (c > a && a > b )
    { 
        printf ("A ordem dos numeros eh %i, %i, %i", c, a, b);
    }
    else if (c > b && b > a)
    {
        printf ("A ordem dos numeros eh %i, %i, %i", c, b, a);
    }

}