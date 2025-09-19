#include <stdio.h>

    //Função para calcular super poder
    float superPoder(unsigned long int populacao, float area,float pib,int pontos_turisticos,float densidade,float pib_capita)
    {
        float super_poder;
        super_poder = (float)populacao + (float)area + (float)pib + (float)pontos_turisticos + (1.0f/densidade)+(float)pib_capita;
        return super_poder;
    };

int main() {     
           
    char estado_carta_1[50];
    char codigo_carta_1[50];
    char nome_cidade_carta_1[50];
    unsigned long int populacao_carta_1;
    float area_carta1;
    float pib_carta1;
    int pontos_turisticos_carta_1;
    float densidade_carta1;
    float pib_capita_carta1;
    float super_poder_carta1; 

    char estado_carta_2[50];
    char codigo_carta_2[50];
    char nome_cidade_carta_2[50];
    unsigned long int populacao_carta_2;
    float area_carta2;
    float pib_carta2;
    int pontos_turisticos_carta_2;
    float densidade_carta2;
    float pib_capita_carta2;
    float super_poder_carta2;

    printf("Adicione a carta 1\n");
    printf("Estado: ");
    scanf("%s",&estado_carta_1);
    printf("Código: ");
    scanf("%s",&codigo_carta_1);
    getchar();
    printf("Nome da cidade: ");
    fgets(nome_cidade_carta_1,50,stdin);
    printf("População: ");
    scanf("%i",&populacao_carta_1);
    printf("Área: ");
    scanf("%f",&area_carta1);
    printf("PIB: ");
    scanf("%f",&pib_carta1);
    printf("Número de Pontos Turísticos: ");
    scanf("%i",&pontos_turisticos_carta_1);    
    printf("\n");
    densidade_carta1 = populacao_carta_1/area_carta1;
    pib_capita_carta1 = pib_carta1/populacao_carta_1;

    printf("Adicione a carta 2\n");
    printf("Estado: ");
    scanf("%s",&estado_carta_2);
    printf("Código: ");
    scanf("%s",&codigo_carta_2);
    printf("Nome da cidade: ");
    getchar();
    fgets(nome_cidade_carta_2,50,stdin);
    printf("População: ");
    scanf("%i",&populacao_carta_2);
    printf("Área: ");
    scanf("%f",&area_carta2);
    printf("PIB: ");
    scanf("%f",&pib_carta2);
    printf("Número de Pontos Turísticos: ");
    scanf("%i",&pontos_turisticos_carta_2);
    densidade_carta2 = populacao_carta_2/area_carta2;
    pib_capita_carta2 = pib_carta2/populacao_carta_2;
    super_poder_carta1 = superPoder(populacao_carta_1,area_carta1,pib_carta1,pontos_turisticos_carta_1,densidade_carta1,pib_capita_carta1);
    super_poder_carta2 = superPoder(populacao_carta_2,area_carta2,pib_carta2,pontos_turisticos_carta_2,densidade_carta2,pib_capita_carta2);

    nome_cidade_carta_1[strcspn(nome_cidade_carta_1, "\n")] = '\0';
    printf("\n----Carta1---- \n");
    printf("Estado: %s\nCódigo: %s\nNome da cidade: %s\nPopulação: %i\n",estado_carta_1,codigo_carta_1,nome_cidade_carta_1,populacao_carta_1);
    printf("Área: %f Km² \nPIB: %f bilhões de reais \nNúmero de Pontos Turísticos:%i\n",area_carta1,pib_carta1,pontos_turisticos_carta_1);
    printf("Densidade populacional: %.2f hab/km² \n",densidade_carta1);
    printf("PIB per Capita: %.2f reais\n",pib_capita_carta1);
    //criei uma função para calcular super poder achei necessário apenas para essa parte.
    printf("Super Poder: %.2f de poder\n",super_poder_carta1);
    
    nome_cidade_carta_2[strcspn(nome_cidade_carta_2, "\n")] = '\0';
    printf("\n----Carta2---- \n");
    printf("Estado: %s\nCódigo: %s\nNome da cidade: %s\nPopulação: %i\n",estado_carta_2,codigo_carta_2,nome_cidade_carta_2,populacao_carta_2);
    printf("Área: %f Km² \nPIB: %f bilhões de reais \nNúmero de Pontos Turísticos:%i\n",area_carta2,pib_carta2,pontos_turisticos_carta_2);
    printf("Densidade populacional: %.2f hab/km²\n",densidade_carta2);
    printf("PIB per Capita: %.2f de poder\n",pib_capita_carta2);
    printf("Super Poder: %.2f de poder\n",super_poder_carta2);


    /*Não foi mensionado nada sobre quando os dados são iguais então não introduzi a lógica.
    */
    printf("\n-------Comparação de Cartas-------\n");
    printf(populacao_carta_1 > populacao_carta_2 ? "População: Carta 1 venceu (%i)\n":"População: Carta 2 venceu (%i)\n",(populacao_carta_1 > populacao_carta_2));
    printf(area_carta1 > area_carta2 ? "Área: Carta 1 venceu (%i)\n":"Área: Carta 2 venceu (%i)\n",(area_carta1 > area_carta2));
    printf(pib_carta1 > pib_carta2 ? "PIB: Carta 1 venceu (%i)\n":"PIB: Carta 2 venceu (%i)\n",(pib_carta1 > pib_carta2));
    printf(pontos_turisticos_carta_1 > pontos_turisticos_carta_2 ? "Pontos Turísticos: Carta 1 venceu (%i)\n":"Pontos Turísticos: Carta 2 venceu (%i)\n",(pontos_turisticos_carta_1 > pontos_turisticos_carta_2));
    printf(densidade_carta1 > densidade_carta2 ? "Densidade Populacional: Carta 1 venceu (%i)\n":"Densidade Populacional: Carta 2 venceu (%i)\n",(densidade_carta1 > densidade_carta2));
    printf(pib_capita_carta1 > pib_capita_carta2 ? "PIB per Capita: Carta 1 venceu (%i)\n":"PIB per Capita: Carta 2 venceu (%i)\n",(pib_capita_carta1 > pib_capita_carta2));
    printf(super_poder_carta1 > super_poder_carta2 ? "Super poder: Carta 1 venceu (%i)\n":"Super Poder: Carta 2 venceu (%i)\n",(super_poder_carta1 > super_poder_carta2));


    printf("\nComparação de cartas (Atributo: População):\n");

    printf("Carta 1 - %s - %s: %i\n",nome_cidade_carta_1,estado_carta_1,populacao_carta_1);
    printf("Carta 2 - %s - %s: %i\n\n",nome_cidade_carta_2,estado_carta_2,populacao_carta_2);

    if(populacao_carta_1 > pontos_turisticos_carta_2)
    {
        printf("Carta 1: (%s) venceu!\n",nome_cidade_carta_1);
    }else
    {
        printf("Carta 2: (%s) venceu!\n",nome_cidade_carta_2);
    }
    
    
    return 0;
}
