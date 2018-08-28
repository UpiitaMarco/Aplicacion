#include <stdio.h>
#include <stdlib.h>
#define g 9.81

int main(int argc, char *argv[])
{
int di,pr;
char x;
printf("Instituto Politecnico Nacional \nUnidad Profesional Interdisciplinaria en Ingenieria y Tecnologias Avanzadas \n\nIntroduccion a la Programacion \nPractica 1. Problema de Aplicacion: \nDiseno e implementacion de un programa que obtenga el volumen de agua \no Diesel de un pozo de forma cilindrica.");
printf("\n\nSeleccione el fluido del pozo: Agua(A) o Diesel(D)");
scanf("%c",&x);
printf("Ingrese la diametro del pozo en metros:");
scanf("%d",&di);
printf("Defina la presion del pozo:");
scanf("%d",&pr);
system("PAUSE");	
return 0;
}
