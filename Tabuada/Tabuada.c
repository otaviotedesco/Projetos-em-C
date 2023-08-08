#include <stdio.h>


int main (){

    int num, i;
    char res;

do
{


    printf ("Digite um numero de 1 a 10 ");
    scanf ("%i", &num);

    for ( i = 0; i <= 10; i++)
    {
        printf ("%i x %i = %i\n", num, i, num*i);
    }
    
    printf ("deseja continuar? s/n: ");
    scanf (" %c", &res);
    
    } while (res == 's' || res == 'S');
}




