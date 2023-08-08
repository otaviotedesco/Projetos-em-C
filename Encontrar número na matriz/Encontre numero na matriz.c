#include <stdio.h>

int main()
{

    int matriz[3][3], i, j;
    int numero;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Elemento [%i] [%i]", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }

    printf("Insira o numero a ser encontrado: ");
    scanf("%i", &numero);

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            if (matriz[i][j] == numero)
            {

                printf("O valor foi encontrado na linha [%i] e coluna [%i]", i, j);
            }

            else
            {

                printf("O valor nao foi encontrado\n");
            }
        }
    }
}