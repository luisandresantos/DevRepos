#include <stdio.h>

int main() {
float peso, altura, IMC;
    
    printf("==================================\n\n");
    printf("Calculadora de IMC!\n\n");
    printf("Insira o seu peso em kg: ");
    scanf("%f", &peso);
    printf("Insira a sua altura em metros (m): ");
    scanf("%f", &altura);

    IMC = peso / (altura * altura);

    if (IMC < 18.5){
      printf("Abaixo do peso, pode comer um XBURGER, tranquilo %.2f\n", IMC);
    }
    else if (IMC >= 18.5 && IMC < 24.9){
      printf("Está no peso normal, continue assim %.2f\n", IMC);
    }
    else if (IMC >= 24.9 && IMC < 29.9){
      printf("Está em sobrepreso, comer menos hidratos e mais verduras\n");
      printf("precisa de fazer ligueira dieta e regrar a alimentação %.2f\n", IMC);
    }
    else if (IMC >= 29.9 && IMC < 34.9){
      printf("Obesidade grau 1, CUIDADO, CUIDE DE SI %.2f", IMC);
    }
    else {
      printf("Obesidade grau 2 ou superior, procure ajuda, olhe pela sua saúde! %.2f\n", IMC);
    }


    return 0;
}