#include <stdio.h>
#include <locale.h>
int main (){ 
    setlocale(LC_ALL, "");
    char disciplinas[3][200];
    float notas[3][3];
    float soma = 0, media[4];
    int i, j;
    int notasMultiplicadas = 0;
    for (i = 0; i < 3; i++) {
        printf("Digite o nome da %iª disciplina:\n", i+1);
        scanf("%s",&disciplinas[i]);
        for (j = 0; j < 3; j++) {
            printf("Digite a %iª nota: ", j +1);
            scanf("%f",&notas[i][j]);
            if (notas[i][j] > 10 || notas[i][j] < 0) {
                printf("Nota inválida!\n");
              break;
            }
            if (j < 2) {
              notasMultiplicadas = notas[i][j] * 3;
            }
            if (j >= 2) {
              notasMultiplicadas = notas[i][j] * 4;
            }
            soma += notasMultiplicadas;
        }
        media[i] = soma / 10;
        soma = 0;
        printf("\n");
      }
        for (i = 0; i < 3; i++) {
            printf("%iª disciplina: %s \n", i+1, disciplinas[i]);
            for (j = 0; j < 3; j++) {
                printf("%iª nota: %.1f \n", j+1, notas[i][j]);
            }
            printf("Média da %iª disciplina: %.1f \n", i + 1, media[i]);
          
            printf("\n");
        
          }
      return 0;
      }