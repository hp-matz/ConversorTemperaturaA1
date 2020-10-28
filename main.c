#include <stdio.h>

void converterParaCelsiu(void) 
{
  float resultadoemc;
  float t;
  printf("\nDigite a temperatura em Fahrenheit: ");
  scanf("%f", &t);
  resultadoemc = (t - 32) * 5 / 9;
  printf("\n%.0f°F em Celsius é %.1f°C",t, resultadoemc);
}

void converterParaFahrenheit(void) 
{
  float resultadoemf;
  float t;
  printf("\nDigite a temperatura em Celsius: ");
  scanf("%f", &t);
  resultadoemf = (t * 9/5) + 32;
  printf("\n%.1f°C em Fahrenheit é %.0f°F", t, resultadoemf);
}

int main(void) {
  /*Escreva um algoritmo, utilizando linguagem C, para entrar com um valor C ou F para determinar qual o tipo de conversão (Celsius ou Fahrenheit) e a temperatura a ser convertida. Ao final demonstrar o valor da conversão. Criar duas funções para a conversão: converterParaCelsiu() e converterParaFahrenheit() Observação: Para testar se a sua resposta está correta saiba que 100oC = 212F.*/

  char tipo = ' ';
  int i;
  int flag = 1;

  printf("Converter de Fahrenheit para Celsius digite 'c'\n\nConverter de Celsius para Fahrenheit digite 'f'\n");
  printf("\nDigite: ");
  for(i=0;i<=99;i++){
    scanf("%c", &tipo);
    switch (tipo)
    {
      case 'c':
        converterParaCelsiu();
        flag = 0;
        i = 99;
      break;
      case 'C':
        converterParaCelsiu();
        flag = 0;
        i = 99;
      break;
      case 'f':
        converterParaFahrenheit();
        flag = 0;
        i = 99;
      break;
      case 'F':
        converterParaFahrenheit();
        flag = 0;
        i = 99;
      break;
      default:
        printf("\nDigite: ");
    
    }
  }

  return 0;
}