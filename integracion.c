#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#define SEED 35791246

double mifuncion(double x);
int main()
{

  int iteraciones=100000;
  int dentro=0;
  double intervalox=(1.0-0.0);
  double intervaloy=(1.0-0.0);
  double x;
  double y;
  double func;

  for (int i=0; i<iteraciones;i++)
    {  
      x = (double)rand()/RAND_MAX;
      y = (double)rand()/RAND_MAX;
      func = mifuncion(x);
      if(y<func)
	{
	  dentro++;
	}
    }
  
  double integral=(double)dentro/(double)iteraciones*(intervalox*intervaloy);
  FILE *out = fopen("resultados.txt","a"); /* Abrir el archivo*/
  fprintf(out, "El valor de la integral es: %g \n", integral);
}

double mifuncion(double x)
{
  return exp(-x);
}
