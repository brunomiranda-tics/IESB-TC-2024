/*
*
Instituição: IESB
Disciplina:  Teoria da Computação (TC)
Objetivo:    Fornecer conhecimentos e práticas de paradigmas da TC.
Professor:   Bruno Miranda [bruno.marcos@iesb.edu.br]
Data:        Mar2024

# Prática: Programas, Maquinas e Computacoes

# Exemplo: Programa Monolito
*
*/

#include<stdio.h>

int main(){

  double A1 = 0.0;
  double A2 = 0.0;
  double media_final = 0.0;

  printf("# # # # # # # # # # # # # # # # # # # # # # # # # # # # \n");
  printf("###  Programa Monolito para calculo da media final  ### \n\n");

  printf("\n-valores iniciais de A1: %f \n", A1);
  printf("\n-valores iniciais de A2: %f \n\n\n", A2);

  LER_VALORES:
  printf(">> Aluno, digite a sua nota A1 \n");
  scanf("%lf", &A1);

  printf(">> Aluno, digite a sua nota A2 \n");
  scanf("%lf", &A2);

  //goto CALC_MEDIA;

  printf("\n # valores lidos de A1: %.20lf \n", A1);
  printf("\n # valores lidos de A2: %.20lf \n", A2);

  printf("tec, tec, tec...\n");
  printf("tec, tec, tec...\n");
  printf("tec, tec, tec...\n");


  CALC_MEDIA:
  media_final = ((A1 * 0.4) + (A2 * 0.6));
  printf("\nA media calculada foi: %f", media_final);

  goto FINALIZA_PROG;

  // instrucoes que nao irao executar...
  int i = 10;
  printf("%d", i);


  FINALIZA_PROG:
  printf("\n\n");
  printf("# # # # # # # # # # # # # # # # # # # # # # # # # # # # \n");
  printf("# # # # # # # # # # # #   FIM   # # # # # # # # # # # # \n\n");

  return 0;
}
