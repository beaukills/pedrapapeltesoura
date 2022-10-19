#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
  int resp;
  
  do
  {
  int humano,maquina;
  printf("Originalmente XXX (Janken) ou popularmente PEDRA, PAPEL, TESOURA,\n");
  printf("o jogo japonês de mãos não requer habilidade ou equipamentos,\n");
  printf("apenas duas pessoas.\n\n");
  printf("As regras são simples:\n");
  printf("(1) Pedra quebra tesoura;\n");
  printf("(2) Papel sufoca pedra;\n");
  printf("(3) Tesoura corta papel;\n");
  printf("Objetos iguais: empate.\n\n");
  printf("Qual sua escolha? (1), (2) ou (3)");
  scanf("%d",&humano);
  switch(humano)
  {
  case 1: printf("Humano usou pedra.\n");
    break;
  case 2: printf("Humano usou papel.\n");
    break;
  case 3: printf("Humano usou tesoura.\n");
    break;
  default: printf("Escolha inválida.\n");
  }
  srand(time(NULL));
  maquina = ("%d",rand()%3 + 1);
  switch(maquina)
  {
  case 1: printf("Maquina usou pedra.\n");
    break;
  case 2: printf("Maquina usou papel.\n");
    break;
  case 3: printf("Maquina usou tesoura.\n");
    break;
  }
  if(humano==maquina)
  {
    printf("Empate.");
  }
  if (humano==1 && maquina==3)
  {
   printf("Humano vence dessa vez!\n");
   printf("Mas espere só até eu me desenvolver melhor!");
  }
    if (humano==2 && maquina==1)
  {
   printf("Humano vence dessa vez!\n");
   printf("Mas espere só até eu me desenvolver melhor!");
  }
    if (humano==3 && maquina==2)
  {
   printf("Humano vence dessa vez!\n");
   printf("Mas espere só até eu me desenvolver melhor!");
  }
  else if((humano==3 && maquina==1) || (humano==1 && maquina==2) ||
	(humano==2 && maquina==3))
    {
  printf("A maquina venceu\n");
  printf("Se ao menos os humanos pudessem entender a linguagem\n");
  printf("corporal das maquinas.");
  }
 printf("Digite 1 para continuar ou 2 para sair\n");
    scanf("%d",&resp);
  
  }while (resp==1);
  
  return 0;
}