#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
  int resp;
  
  do
  {
  int humano,maquina;
  printf("Originalmente Janken ou popularmente PEDRA, PAPEL, TESOURA,\n");
  printf("o jogo japones de maos nao requer habilidade ou equipamentos.\n");
  printf("Uma extensao do jogo foi criada em algum momento chamada\n");
  printf("Pedra Papel Tesoura Largato Spock.\n\n");
  printf("As regras sao as seguintes:\n");
  printf("(1) Pedra quebra tesoura, esmaga Lagarto;\n");
  printf("(2) Papel sufoca pedra, refuta Spock;\n");
  printf("(3) Tesoura corta papel, corta Lagarto;\n");
  printf("(4) Spock esmaga Tesoura, vaporiza Pedra;\n");
  printf("(5) Lagarto envenena Spock, come Papel;\n");
  printf("Objetos iguais: empate.\n\n");
  printf("Qual sua escolha? (1), (2), (3), (4) ou (5) ");
  scanf("%d",&humano);
  switch(humano)
  {
  case 1: printf("Humano usou pedra.\n");
    break;
  case 2: printf("Humano usou papel.\n");
    break;
  case 3: printf("Humano usou tesoura.\n");
    break;
  case 4: printf("Humano usou Spock.\n");
    break;
  case 5: printf("Humano usou Lagarto.\n");
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
  case 4: printf("Humano usou Spock.\n");
    break;
  case 5: printf("Humano usou Lagarto.\n");
    break;
  }
  if(humano==maquina)
  {
    printf("Empate.\n\n");
  }
  if (humano==1 && maquina==3)
  {
   printf("Humano vence dessa vez!\n");
   printf("Mas espere so ate eu me desenvolver melhor!\n\n");
  }
    if (humano==2 && maquina==1)
  {
   printf("Humano vence dessa vez!\n");
   printf("Mas espere so ate eu me desenvolver melhor!\n\n");
  }
    if (humano==3 && maquina==2)
  {
   printf("Humano vence dessa vez!\n");
   printf("Mas espere so ate eu me desenvolver melhor!\n\n");
  }
    if (humano==4 && maquina==1)
  {	
   printf("Humano vence dessa vez!\n");
   printf("Mas espere so ate eu me desenvolver melhor!\n\n");
  }
    if (humano==4 && maquina==3)
  {
   printf("Humano vence dessa vez!\n");
   printf("Mas espere so ate eu me desenvolver melhor!\n\n");
  }
    if (humano==5 && maquina==2)
  {
   printf("Humano vence dessa vez!\n");
   printf("Mas espere so ate eu me desenvolver melhor!\n\n");
   }
    if (humano==5 && maquina==4)
  {
   printf("Humano vence dessa vez!\n");
   printf("Mas espere so ate eu me desenvolver melhor!\n\n");
  }
    if (humano==5 && maquina==1)
  {
   printf("Humano vence dessa vez!\n");
   printf("Mas espere so ate eu me desenvolver melhor!\n\n");
  }
  if (humano==3 && maquina==1)
  {
   printf("A maquina venceu\n");
   printf("Se ao menos os humanos pudessem entender a linguagem\n");
   printf("corporal das maquinas.\n\n");
   }
   if (humano==1 && maquina==2)
   {
   printf("A maquina venceu\n");
   printf("Se ao menos os humanos pudessem entender a linguagem\n");
   printf("corporal das maquinas.\n\n");
   }
   if (humano==2 && maquina==3)
   {
   printf("A maquina venceu\n");
   printf("Se ao menos os humanos pudessem entender a linguagem\n");
   printf("corporal das maquinas.\n\n");
   }
   if (humano==4 && maquina==1)
   {
   printf("A maquina venceu\n");
   printf("Se ao menos os humanos pudessem entender a linguagem\n");
   printf("corporal das maquinas.\n\n");
   }
   if (humano==4 && maquina==3)
   {
   printf("A maquina venceu\n");
   printf("Se ao menos os humanos pudessem entender a linguagem\n");
   printf("corporal das maquinas.\n\n");
   }
   if (humano==5 && maquina==4)
   {
   printf("A maquina venceu\n");
   printf("Se ao menos os humanos pudessem entender a linguagem\n");
   printf("corporal das maquinas.\n\n");
  }
  printf("Digite 1 para continuar ou 2 para cair fora!\n");
  scanf("%d",&resp);
  
  }while (resp==1);
  
  return 0;
}
