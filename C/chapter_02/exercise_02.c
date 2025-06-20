/*
 * Programa: Seleção de Roupas por Temperatura
 * Autor: Luis André Santos
 * Objetivo: Demonstração prática de condicionais if-else if-else em C
 * Descrição: O programa analisa a temperatura fornecida pelo usuário e
 *            recomenda a roupa adequada utilizando estruturas condicionais.
 *            É parte de um exercício de estudo para entender lógica de decisão.
 */

#include <stdio.h>

int main (){

    int temperatura;
  printf("____ESCOLHER ROUPA___\n\n");
  printf("Insira a temperatura do dia para escolher a roupa ideal\n");
  scanf("%d", &temperatura);

   if (temperatura < 0){
    printf("Muito Frio, use um casaco quente!\n");
   }
   else if 
   (temperatura >= 0 && temperatura < 10){
   printf("Temperatura fria, use casaco quente, proteja-se\n");
   }
   else if (temperatura >= 10 && temperatura < 20) {
   printf("Temperatura fria, use casaco leve\n");
   }
   else if (temperatura >=20 && temperatura < 25){
    printf("Temperatura moderada, use uma sweat-shirt, ou um casaco fino\n");
   }
   else if (temperatura >=25 && temperatura < 30){
    printf("Tempo quente, use t-shirt\n");
   }
   else if(temperatura >= 30 && temperatura < 35){
    printf("Tempo muito quente, CUIDADO, Hidrate-se\n");
   }

    return 0;
}