/*
*
Instituição: IESB
Disciplina:  Teoria da Computação (TC)
Objetivo:    Fornecer conhecimentos e prática em desenvolvimento POO.
Professor:   Bruno Miranda [bruno.marcos@iesb.edu.br]
Data:        Mar2024

# Prática: Programas, Maquinas e Computacoes

# Exemplo: Programa Recursivo
*
*/

#include<stdio.h>

double rec_calcula_fatorial(int n);
void imprime_cabecalho_inicial();
void imprime_msg_final();

int main(void){

  int numero;
  double nr_fatorial;

  imprime_cabecalho_inicial();

	printf("\n>> Usuario, digite o numero para calcular o fatorial: ");
	scanf("%d", &numero);

	nr_fatorial = rec_calcula_fatorial(numero);

	printf("\n## Fatorial calculado: %d = %.0lf", numero, nr_fatorial);

	imprime_msg_final();

	getchar();

	return 0;
}

// funcao recursiva
double rec_calcula_fatorial(int numero){

  double nr_fatorial_calculado;

  if(numero <= 1){
    return 1;
  } else{
    nr_fatorial_calculado = numero * rec_calcula_fatorial(numero - 1);
    return (nr_fatorial_calculado);
  }

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
