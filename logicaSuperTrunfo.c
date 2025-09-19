#include <stdio.h>
#include <string.h>

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
    int opcao;

    printf("---------Selecione o atributo a ser comparado--------\n");
    printf("População(1)\n");
    printf("Área(2)\n");
    printf("Pib(3)\n");
    printf("Números de pontos turísticos(4)\n");
    printf("Densidade demográfica(5)\n\n");

    printf("Escolha uma opção: ");
    scanf("%i",&opcao);

    printf("\n\n--------Adicione a carta 1--------\n");
    printf("Estado: ");
    scanf("%s",estado_carta_1);
    printf("Código: ");
    scanf("%s",codigo_carta_1);
    getchar();
    printf("Nome da cidade: ");
    fgets(nome_cidade_carta_1,50,stdin);
    printf("População: ");
    scanf("%lu",&populacao_carta_1);
    printf("Área: ");
    scanf("%f",&area_carta1);
    printf("PIB: ");
    scanf("%f",&pib_carta1);
    printf("Número de Pontos Turísticos: ");
    scanf("%i",&pontos_turisticos_carta_1);    
    printf("\n");
    densidade_carta1 = populacao_carta_1/area_carta1;
    pib_capita_carta1 = pib_carta1/populacao_carta_1;

    printf("--------Adicione a carta 2--------\n");
    printf("Estado: ");
    scanf("%s",estado_carta_2);
    printf("Código: ");
    scanf("%s",codigo_carta_2);
    printf("Nome da cidade: ");
    getchar();
    fgets(nome_cidade_carta_2,50,stdin);
    printf("População: ");
    scanf("%lu",&populacao_carta_2);
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
    printf("Estado: %s\nCódigo: %s\nNome da cidade: %s\nPopulação: %lu\n",estado_carta_1,codigo_carta_1,nome_cidade_carta_1,populacao_carta_1);
    printf("Área: %f Km² \nPIB: %f bilhões de reais \nNúmero de Pontos Turísticos:%i\n",area_carta1,pib_carta1,pontos_turisticos_carta_1);
    printf("Densidade populacional: %.2f hab/km² \n",densidade_carta1);
    printf("PIB per Capita: %.2f reais\n",pib_capita_carta1);
    //criei uma função para calcular super poder achei necessário apenas para essa parte.
    printf("Super Poder: %.2f de poder\n",super_poder_carta1);
    
    nome_cidade_carta_2[strcspn(nome_cidade_carta_2, "\n")] = '\0';
    printf("\n----Carta2---- \n");
    printf("Estado: %s\nCódigo: %s\nNome da cidade: %s\nPopulação: %lu\n",estado_carta_2,codigo_carta_2,nome_cidade_carta_2,populacao_carta_2);
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


    printf("\n--------Comparação de cartas (Atributo: População):--------\n");    

    switch (opcao)
    {
        case 1:

    printf("Carta 1 - %s - %s: %lu\n",nome_cidade_carta_1,estado_carta_1,populacao_carta_1);
    printf("Carta 2 - %s - %s: %lu\n\n",nome_cidade_carta_2,estado_carta_2,populacao_carta_2);

    if(populacao_carta_1 > pontos_turisticos_carta_2)
    {
        printf("Carta 1: (%s) venceu!\n",nome_cidade_carta_1);
    }else if(populacao_carta_1 < pontos_turisticos_carta_2)
    {
        printf("Carta 2: (%s) venceu!\n",nome_cidade_carta_2);
    }else
    {
        printf("Houve um empate\n");
    }
        break;

        case 2:
    printf("Carta 1 - %s - %s: %f\n",nome_cidade_carta_1,estado_carta_1,area_carta1);
    printf("Carta 2 - %s - %s: %f\n\n",nome_cidade_carta_2,estado_carta_2,area_carta2);

    if(area_carta1 > area_carta2)
    {
        printf("Carta 1: (%s) venceu!\n\n",nome_cidade_carta_1);
    }else if(area_carta1 < area_carta2)
    {
        printf("Carta 2: (%s) venceu!\n\n",nome_cidade_carta_2);
    }else
    {
        printf("Houve um empate\n\n");
    }
        break;

        case 3:
    printf("Carta 1 - %s - %s: %f\n",nome_cidade_carta_1,estado_carta_1,pib_carta1);
    printf("Carta 2 - %s - %s: %f\n\n",nome_cidade_carta_2,estado_carta_2,pib_carta2);
    if(pib_carta1 > pib_carta2)
    {
        printf("Carta 1: (%s) venceu!\n\n",nome_cidade_carta_1);
    }else if(pib_carta1 < pib_carta2)
    {
        printf("Carta 2: (%s) venceu!\n\n",nome_cidade_carta_2);
    }else
    {
        printf("Houve um empate\n\n");
    }
        break;

        case 4:
    printf("Carta 1 - %s - %s: %i\n",nome_cidade_carta_1,estado_carta_1,pontos_turisticos_carta_1);
    printf("Carta 2 - %s - %s: %i\n\n",nome_cidade_carta_2,estado_carta_2,pontos_turisticos_carta_2);
    if(pontos_turisticos_carta_1 > pontos_turisticos_carta_2)
    {
        printf("Carta 1: (%s) venceu!\n\n",nome_cidade_carta_1);
    }else if(pontos_turisticos_carta_1 < pontos_turisticos_carta_2)
    {
        printf("Carta 2: (%s) venceu!\n\n",nome_cidade_carta_2);
    }else
    {
        printf("Houve um empate\n\n");
    }
        break;
        case 5:
    printf("Carta 1 - %s - %s: %f\n",nome_cidade_carta_1,estado_carta_1,densidade_carta1);
    printf("Carta 2 - %s - %s: %f\n\n",nome_cidade_carta_2,estado_carta_2,densidade_carta2);
    if(densidade_carta1 < densidade_carta2)
    {
        printf("Carta 1: (%s) venceu!\n\n",nome_cidade_carta_1);
    }else if(densidade_carta1 > densidade_carta2)
    {
        printf("Carta 2: (%s) venceu!\n",nome_cidade_carta_2);
    }else
    {
        printf("Houve um empate\n\n");
    }
        break;    
    default:
        printf("Você não escolheu um atributo para comparação\n");
        break;
    }   
    
    
    return 0;
}
