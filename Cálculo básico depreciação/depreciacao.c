#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main (){
int tempo, valor, vf; 


printf ("------------------");
printf("Calculo de depreciação de bens \n");
printf ("De acordo com os dados, os maquinarios perdem certa de 7,3 por cento em valor por ano\n");
printf ("Informe o valor do bem que voce gostaria de saber\n");
scanf ("%i.", &valor);
printf ("Quanto voce pretende ficar com o bem\n?");
scanf ("%i", &tempo);
vf=valor-((valor*0.073)*tempo);
printf ("O valor do bem depois de %i anos eh:R$ %.i ", tempo, vf);
 



}