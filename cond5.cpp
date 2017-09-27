#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{   setlocale (LC_ALL, "");
    
    int n1, n2, dif;
    
    printf ("Informe um número inteiro: ");
    scanf ("%d", &n1);
    
    printf ("\nInforme outro número inteiro: ");
    scanf ("%d", &n2);
    
    if (n1>n2)
    {
       dif = n1-n2;
       printf ("O primeiro número é o maior.\nA diferença entre os dois é de: %d\n", dif);
    }else
    {
       dif = n2-n1;
       printf ("O segundo número é o maior.\nA diferença entre os dois é de: %d\n", dif);
     }   
  system("PAUSE");	
  return 0;
}
