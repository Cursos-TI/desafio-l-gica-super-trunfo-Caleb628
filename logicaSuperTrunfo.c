#include <stdio.h>

int main(){


    //printf("card1");
    char nome_da_cidade1[100], estado1[2], codigo1[4];
    char nome_da_cidade2[100], estado2[2], codigo2[4];
    int populacao1, p_turisticos1,  select_compare;
    int populacao2, p_turisticos2;
    float area1, pib1;
    float area2, pib2;


    // int a1 = 10 ,a2 = 20;
    // printf("a soma de %d e %d é: %d",a1,a2, a1 + a2);

   
    printf("Estado (variavel deve ser uma letra maiuscula unica): ");
    scanf("%1s", estado1);  // Lê no máximo 1 caractere
    printf("Código da Carta (a letra do estado seguida de um número de 01 a 04): ");
    scanf("%3s", codigo1);  // Lê no máximo 3 caracteres
    printf("Nome da cidade (não utilize espaços): ");
    scanf("%99s", nome_da_cidade1);  // Lê no máximo 99 caracteres
    printf("População (o número de habitantes da cidade): ");
    scanf("%d", &populacao1);
    printf("Área (em quilômetros quadrados): ");
    scanf("%f", &area1);
    printf("PIB (Produto Interno Bruto da cidade): ");
    scanf("%f", &pib1);

    printf("Cadastro da primeira carta concluído\n");

    // Cadastro da segunda carta
    printf("Estado (variavel deve ser uma letra maiuscula unica): ");
    scanf("%1s", estado2);  // Lê no máximo 1 caractere
    printf("Código da Carta (a letra do estado seguida de um número de 01 a 04): ");
    scanf("%3s", codigo2);  // Lê no máximo 3 caracteres
    printf("Nome da cidade (não utilize espaços): ");
    scanf("%99s", nome_da_cidade2);  // Lê no máximo 99 caracteres
    printf("População (o número de habitantes da cidade): ");
    scanf("%d", &populacao2);
    printf("Área (em quilômetros quadrados): ");
    scanf("%f", &area2);
    printf("PIB (Produto Interno Bruto da cidade): ");
    scanf("%f", &pib2);

    // Exibição das cartas
    printf("=================================================================================\n");
    printf("Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome_da_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Densidade Populacional: %f\n",populacao1 / area1);
    printf("PIB per Capita: %f\n", pib1 / populacao1 );


    printf("================================== vs ===========================================\n");

    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome_da_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Densidade Populacional: %f\n",populacao2 / area2);
    printf("PIB per Capita: %f\n", pib2 / populacao2 );

    printf("=================================================================================\n");

    printf("\n");
    printf("\n");
    printf("\n");
    printf("=========================== resultados do combate  ==============================\n");
    printf("\n");
    printf("Carta %s vs Carta %s\n", nome_da_cidade1, nome_da_cidade2);
   
    

printf(" qual valor voce quer comparar 1|População, 2|Área, 3|PIB, 4|Densidade Populacional, 5|PIB per Capita, 6|super poder:\n");
scanf("%d", &select_compare);
    switch (select_compare) {
        case 1:
            if(populacao1 > populacao2){
                printf("vencedor População: card1\n");
            } else{
                printf("vencedor População: card2\n");
            }
        
          break;
        case 2:
            if(area1 > area2){
                printf("vencedor Área: card1\n");
            } else{
                printf("vencedor Área: card2\n");
            }
          break;
        case 3:
            if(pib1 > pib2 ){
                printf("vencedor PIB: card1\n");
            } else{
                printf("vencedor PIB: card2\n");
            }
        
          break;
        case 4:
            if(populacao1 / area1 < populacao2 / area2 ){
                printf("vencedor Densidade Populacional: card1\n");
            } else{
                printf("vencedor Densidade Populacional: card2\n"); 
            }
          break;
        case 5:
            if(pib1 / populacao1 > pib2 / populacao2 ){
                printf("vencedor PIB per Capita: card1\n");
            } else{
                printf("vencedor PIB per Capita: card2\n"); 
            }
            
          break;
        case 6:
            if(populacao1 + area1 + (pib1 / populacao1 ) + 1 /(populacao1 / area1 ) >  populacao2 + area2 + (pib2 / populacao2 ) + 1 /(populacao2 / area2 )){
                printf("vencedor super poder: card1\n");
            } else{
                printf("vencedor super poder: card2\n");
            }
        
          break;
       
        default:
          printf("Looking forward to the Weekend");
      }


    
  
   
   
  
 
    
  
    
    
    return 0;  
}

