#include <stdio.h>

int main (){

int contador = 1;
int valor;
int maiorvalor, menorvalor, soma = 0;
float media;

    printf ("Digite o %iº valor: ", contador);
    scanf ("%i", &valor);

    maiorvalor = valor;
    menorvalor = valor;
    soma += valor;

    do{
        contador++;

            printf ("Digite o %iº valor: ", contador);
            scanf ("%i", &valor);

            if (valor > maiorvalor)
            maiorvalor=valor;

            if (valor < menorvalor)
            menorvalor = valor;

       soma += valor;

    } while (contador < 10);
    media = soma/10;
    printf ("O maior valor eh %i \n", maiorvalor);
    printf ("O menor valor eh %i \n", menorvalor);
    printf ("A media dos valores eh: %.2f \n", media);


}