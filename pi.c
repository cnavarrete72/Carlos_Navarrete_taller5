#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#define SEED 35791246

int main()
{
   int iteraciones=100000;
   double x;
   double y;
   int n=0;
   double circulo;
   double pi;

   srand(SEED);
   for ( int i=0; i<iteraciones; i++) {
      x = (double)rand()/RAND_MAX;
      y = (double)rand()/RAND_MAX;
      circulo = x*x+y*y;
      if (circulo<=1)
	{
	  n++;
	}
      }
   pi=(double)n/iteraciones*4;
   FILE *out = fopen("resultados.txt","a"); /* Abrir el archivo*/
   fprintf(out, "El valor de la constante pi es: %g \n", pi);
}
