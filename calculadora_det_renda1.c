#include <stdio.h>


float modelo1 ()
{
printf ("Modelo de Economia Fechada e Sem Governo\n");

  float i, ca, pmc, y;

printf ("Para determinar a renda, digite os valores das seguintes vari�veis.\n");
  printf ("Consumo aut�nomo: ");
    scanf ("%f", &ca);
  printf ("Propens�o Marginal a Consumir: ");
          scanf ("%f", &pmc);
printf ("Investimento: ");
  scanf("%f", &i);
if (i < 0 || ca < 0 || pmc < 0 || pmc > 1) {
printf ("As vari�veis n�o podem ser menores que zero, e a propens�o marginal a consumir n�o pode ser menor que 0 nem maior que 1.\n");
  return 0;
    }
  else {
    //equa��o da renda
      y = (1 /(1 - pmc)) * (ca + i);
  }
    printf("A renda de equil�brio �:  %.2f\n", y);
}

float modelo2 ()
{
printf ("Modelo de Economia Fechada e Com Governo\n");

float i, ca, pmc, y, g, t, tr;
printf ("Para determinar a renda, digite os valores das seguintes vari�veis.\n");
  printf ("Consumo aut�nomo: ");
    scanf ("%f", &ca);
  printf ("Propens�o Marginal a Consumir: ");
          scanf ("%f", &pmc);
printf ("Investimento: ");
         scanf("%f", &i);
printf ("Gastos do governo: ");
         scanf ("%f", &g);
printf ("Al�quota de impostos: ");
        scanf ("%f", &t);
printf ("Transfer�ncias: ");
        scanf ("%f", &tr);
  if (ca < 0 || i < 0 || g < 0 || tr < 0 || pmc < 0 || pmc > 1 || t < 0 || t > 1)
  {printf ("As vari�veis n�o podem ser menores que zero, e a propens�o marginal a consumir e a al�quota de impostos n�o podem ser menor que zero e nem maior que um.\n");
    return 0;
    }
  else {
      y = (1 /(1 - pmc * (1 - t))) * (ca + i + g + tr);
    }
    printf("A renda de equil�brio �:  %.2f\n", y);
 return 0;
    }

float modelo3 ()
{
printf ("Economia Aberta e com Governo\n");

float i, ca, pmc, y, g, t, tr, x, m;
printf ("Para determinar a renda, digite os valores das seguintes vari�veis.\n");
  printf ("Consumo aut�nomo: ");
    scanf ("%f", &ca);
  printf ("Propens�o Marginal a Consumir: ");
          scanf ("%f", &pmc);
printf ("Investimento: ");
         scanf("%f", &i);
printf ("Gastos do governo: ");
         scanf ("%f", &g);
printf ("Al�quota de impostos: ");
        scanf ("%f", &t);
printf ("Transfer�ncias: ");
        scanf ("%f", &tr);
printf ("Exporta��es: ");
        scanf ("%f", &x);
printf ("Importa��es: ");
        scanf ("%f", &m);

if (ca < 0 || i < 0 || g < 0 || tr < 0 || x < 0 || m < 0 || pmc < 0 || pmc > 1 || t < 0 || t > 1) {
  printf ("As vari�veis n�o podem ser menores do que zero, e a propens�o marginal a consumir e a al�quota de impostos n�o podem ser menor que zero e nem maior que um.");
  return 0;
  }
else {
    //equa��o da renda
      y = (1 /(1 - pmc * (1 - t))) * (ca + i + g + tr + (x - m));}
    printf("A renda de equil�brio �:  %.2f\n", y);
}
int main(void) {

int op;

  //Menu de modelos
printf ("Calculadora de Renda de Equil�brio\n");

printf ("Escolha o modelo:\n");
printf ("1 � Economia Fechada e Sem Governo\n");
printf ("2 � Economia Fechada e Com Governo\n");
printf ("3 � Economia Aberta e Com Governo\n");
scanf ("%d", &op);

switch (op)
{
case 1:
  //Economia Fechada e Sem Governo
  modelo1 ();
break;

case 2:
//Economia Fechada e Com Governo
  modelo2 ();
break;

case 3:
//Economia Aberta e Com Governo
  modelo3 ();
break;
  }
system ("pause");
  return 0;
}
