#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

          // Declaração de Variavéis da Primeira Carta//

int main() {
  char Estado1;             // Estado será representado por uma única letra (A-Z)//   
  char Codigo1 [50];        // O Cógido da Cidade pode envolver números e letras //
  char Cidade1 [50];        
  int Populacao1;
  float Area1;
  float PIB1;
  int PontosTuristicos1;

          // Declaração de Variáveis da Segunda Carta//

  char Estado2;
  char Codigo2 [50];
  char Cidade2 [50];
  int Populacao2;
  float Area2;
  float PIB2;
  int PontosTuristicos2;

  int c;          // Variável para limpar o buffer // 
         
          // Cadastro para a Carta 1 // 

  printf("CADASTRO DA CARTA 1\n");
  printf("digite o código da carta:\n");
  scanf("%s",Codigo1);

  printf("Digite o Estado:\n");
  scanf(" %c",&Estado1);          // espaço antes de %c para ignorar enter anterior //


  printf("Digite o Nome da Cidade:\n");
  scanf("%s",Cidade1);

  printf("Digite o número da população:\n");
  scanf("%i",&Populacao1);

  printf("Digite a Área em km2:\n");
  scanf(" %f",&Area1);

  printf("Digite o PIB:\n");
  scanf("%f",&PIB1);

  printf("Digite o número de Pontos Turísticos:\n");
  scanf("%i",&PontosTuristicos1);

        // Cadastro para a Carta 2 // 
  
  printf("CADASTRO DA CARTA 2\n");
  printf("Digite o cógigo da carta\n");
  scanf("%s", Codigo2);

  printf("Digite o Estado:\n");
  scanf(" %c",&Estado2);

  printf("Digite o Nome da Cidade:\n");
  scanf("%s",Cidade2);

  printf("Digite o número da população:\n");
  scanf("%i",&Populacao2);

  printf("Digite a Área em km2:\n");
  scanf(" %f",&Area2);

  printf("Digite o PIB:\n");
  scanf("%f",&PIB2);

  printf("Digite o número de Pontos Turísticos:\n");
  scanf("%i",&PontosTuristicos2);


          // Exibição de resultados  // 
  printf("CARTA 1\n");
  printf("Código: %s\nEstado: %c\nCidade: %s\nPopulação: %i\nÁrea: %f km²\nPIB: %f\nPontos Turíticos: %i\n", Codigo1, Estado1, Cidade1, Populacao1, Area1, PIB1, PontosTuristicos1);

  printf("CARTA 2\n");
  printf("Código: %s\nEstado: %c\nCidade: %s\nPopulação: %i\nÁrea: %f km²\nPIB: %f\nPontos Turíticos: %i\n", Codigo2, Estado2, Cidade2, Populacao2, Area2, PIB2, PontosTuristicos2);


 


return 0;
} 
