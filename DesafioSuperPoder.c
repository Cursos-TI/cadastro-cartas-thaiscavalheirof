#include <stdio.h>

// Desafio Super Trunfo - Países
// Desafio: Calculando Densidade Populacional e PIB per Capita
// Objetivo: No nível Aventureiro, você expandirá o sistema para incluir propriedades calculadas, permitindo uma análise mais detalhada das cartas.

          // Declaração de Variavéis da Primeira Carta

int main() {
  char Estado1;             // Estado será representado por uma única letra (A-Z)  
  char Codigo1 [50];        // O Códido da Cidade pode envolver números e letras 
  char Cidade1 [50];        
  unsigned long int Populacao1;
  float Area1;
  float PIB1;
  int PontosTuristicos1;
  float DensidadePop1; 
  float PIBpercap1; 
  float Superpoder1; 
  float InversoDensidade1;

          // Declaração de Variáveis da Segunda Carta

  char Estado2;
  char Codigo2 [50];
  char Cidade2 [50];
  unsigned long int Populacao2;
  float Area2;
  float PIB2;
  int PontosTuristicos2;
  float DensidadePop2;
  float PIBpercap2;
  float Superpoder2; 
  float InversoDensidade2;

  int c;          // Variável para limpar o buffer 
         
          // Cadastro para a Carta 1 

  printf("CADASTRO DA CARTA 1\n");
  printf("digite o código da carta:\n");
  scanf("%s",Codigo1);

  printf("Digite o Estado:\n");
  scanf(" %c",&Estado1);          // espaço antes de %c para ignorar enter anterior 


  printf("Digite o Nome da Cidade:\n");
  scanf("%s",Cidade1);

  printf("Digite o número da população:\n");
  scanf("%lu",&Populacao1);

  printf("Digite a Área em km2:\n");
  scanf(" %f",&Area1);

  printf("Digite o PIB:\n");
  scanf("%f",&PIB1);

  printf("Digite o número de Pontos Turísticos:\n");
  scanf("%i",&PontosTuristicos1);

   DensidadePop1 = (float) Populacao1 / Area1;  // float para exibir resultados em casas decimais
   PIBpercap1 = (float) PIB1 / Populacao1;
   InversoDensidade1 = (float) 1 / DensidadePop1;
   Superpoder1 = (float) Populacao1 + PIB1 + PontosTuristicos1 + InversoDensidade1 + Area1 + PIBpercap1;

        // Cadastro para a Carta 2 
  
  printf("CADASTRO DA CARTA 2\n");
  printf("Digite o código da carta\n");
  scanf("%s", Codigo2);

  printf("Digite o Estado:\n");
  scanf(" %c",&Estado2);

  printf("Digite o Nome da Cidade:\n");
  scanf("%s",Cidade2);

  printf("Digite o número da população:\n");
  scanf("%lu",&Populacao2);

  printf("Digite a Área em km2:\n");
  scanf(" %f",&Area2);

  printf("Digite o PIB:\n");
  scanf("%f",&PIB2);

  printf("Digite o número de Pontos Turísticos:\n");
  scanf("%i",&PontosTuristicos2);

   DensidadePop2 = (float) Populacao2 / Area2; // float para exibir resultados em casas decimais
   PIBpercap2 = (float) PIB2 / Populacao2;
   InversoDensidade2 = (float) 1 / DensidadePop2;
   Superpoder2 = (float) Populacao2 + PIB2 + PontosTuristicos2 + InversoDensidade2 + Area2 + PIBpercap2;

          // Exibição de resultados  
  printf("CARTA 1\n");
  printf("Código: %s\nEstado: %c\nCidade: %s\nPopulação: %lu\nÁrea: %f km²\nPIB: %f\nPontos Turísticos: %i\nDensidade Populacional: %.2f\nPIB per capita %.2f\n", Codigo1, Estado1, Cidade1, Populacao1, Area1, PIB1, PontosTuristicos1, DensidadePop1, PIBpercap1);

  printf("Super poder da carta 1: %.2f\n", Superpoder1);

  printf("CARTA 2\n");
  printf("Código: %s\nEstado: %c\nCidade: %s\nPopulação: %lu\nÁrea: %f km²\nPIB: %f\nPontos Turísticos: %i\nDensidade Populacional: %.2f\nPIB per capita %.2f\n", Codigo2, Estado2, Cidade2, Populacao2, Area2, PIB2, PontosTuristicos2, DensidadePop2, PIBpercap2);

  printf("Super poder da carta 2: %.2f\n", Superpoder2); 

  int resultadopopulacao;
  int resultadoarea;
  int resultadopontosturisticos;
  int resultadoDensidadepop;
  int resultadoPIB;
  int resultadoPIBpercap; 
  int resultadoSuperpoder;

  resultadopopulacao = Populacao1 > Populacao2;
  resultadoarea = Area1 > Area2;
  resultadopontosturisticos = PontosTuristicos1 > PontosTuristicos2; 
  resultadoDensidadepop = DensidadePop1 < DensidadePop2;
  resultadoPIB = PIB1 > PIB2;
  resultadoPIBpercap = PIBpercap1 > PIBpercap2;
  resultadoSuperpoder = Superpoder1 > Superpoder2; 

  printf("\n=============RESULTADOS===============\n");
  printf("(0) CARTA 2 ganha; (1) CARTA 1 ganha\n");
  printf("Resultado População: %i\n", resultadopopulacao); 
  printf("Resultado Área: %i\n", resultadoarea);
  printf("Resultado Pontos Turísticos: %i\n", resultadopontosturisticos);
  printf("Resultado Densidade: %i\n", resultadoDensidadepop);
  printf("Resultado PIB: %i\n", resultadoPIB);
  printf("Resultado PIB Per Capita: %i\n", resultadoPIBpercap);
  printf("Resultado Super Poder: %i\n", resultadoSuperpoder);

return 0;
} 