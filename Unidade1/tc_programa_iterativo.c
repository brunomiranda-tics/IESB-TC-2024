/*
*
Instituição: IESB
Disciplina:  Teoria da Computação (TC)
Objetivo:    Fornecer conhecimentos e práticas de paradigmas da TC.
Professor:   Bruno Miranda [bruno.marcos@iesb.edu.br]
Data:        Mar2024

# Prática: Programas, Maquinas e Computacoes

# Exemplo: Programa Iterativo
*
*/

#include<stdio.h>

double calcula_media_final(double pA1, double pA2);
void imprime_msg_final();
void imprime_cabecalho_inicial();
double ler_valor_prova();

int main(){

  double A1 = 0.0;
  double A2 = 0.0;
  double media_final = 0.0;

  imprime_cabecalho_inicial();

  printf(">> Aluno, digite a sua nota A1 \n");
  A1 = ler_valor_prova();

  printf(">> Aluno, digite a sua nota A2 \n");
  A2 = ler_valor_prova();

  media_final = calcula_media_final(A1, A2);

  printf("\n## Prezado alun@, sua media final eh: %.2lf", media_final);

  if(media_final >= 5.0){
    printf("\n## Parabens alun@! Voce foi aprovado.");
  }

  imprime_msg_final();

  return 0;
}

double ler_valor_prova(){
  double temp = -1.0;

  while(temp < 0.0){
    scanf("%lf", &temp);
  }

  return temp;
}

double calcula_media_final(double pA1, double pA2){
	double media = 0.0;
	media = ((pA1 * 0.4) + (pA2 * 0.6));

  return media;
}

void imprime_cabecalho_inicial(){
  printf("\n\n");
  printf("# # # # # # # # # # # # # # # # # # # # # # # # # # # # \n");
  printf("###  Programa Iterativo para calculo da media final  ### \n\n");
}

void imprime_msg_final(){
  printf("\n\n\n\n");
  printf("- - - - - - - - - - - - - FIM - - - - - - - - - - - - - \n");
  printf("# # # # # # # # # # # # # # # # # # # # # # # # # # # # \n");
}
