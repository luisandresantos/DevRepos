#include <stdio.h>

int main() {
    float nota1, nota2, media;
    
    printf("Sistema de Aprovação\n");

    //Leitura e validação  única com if-else (nota1)
    printf("Digite a primeira nota: "); // Vai ser imprimido e lido por scanf 
    scanf("%f", &nota1);                 //(neste caso nao necessita quebra de linha "\n");

    if (nota1 < 0 || nota1 > 20){
      printf("Impossivel, nota invalida (0 a 20). Programa continua mas com erro de entrada\n");
    }

    //Leitura e validação  única com if-else (nota2)
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    if (nota2 < 0 || nota2 > 20){
      printf("Impossivel, nota invalida (0 a 20). Programa continua mas com erro de entrada\n");
    }

    media = (nota1 + nota2) / 2;

    if (media >= 18 && media <= 20){ // se media for maior ou igual a 18
      printf("Aprovado com distinção, nota escelente \n");
    }
    else if (media > 20){
      printf("Media apenas pode ser de 0 a 20, por favor repita o programa");
    }
    else if (media >= 14 && media < 18){ // se media maior ou igual a 15 e menor que 18
      printf("Aprovado, bom trabalho, continue a esforçar-se \n");
    }
    else if (media >= 9.5 && media < 14){ // mesma lógica
      printf("Aprovado, esforce-se para melhorar e terá escelentes resultados \n");
    }
    else if (media >= 5 && media < 9.5){
      printf("Recuperação de nota, inscrito na segunda via (ESTUDE) \n");
    }
    else{
      printf("Reprovado, perdeu o módulo \n");
    }                                    
    return 0;
}