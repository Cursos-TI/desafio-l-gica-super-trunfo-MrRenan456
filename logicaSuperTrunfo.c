#include <stdio.h>

int main() {
    int populacao;
    float area;
    int pontosTuristicos;
    float pib;
    float densidadePopulacional;
    float pibPercapita;
    char codigoCarta1[4];
    char nomeCidade1[50];
    // cidade dois

    char nomeCidade2[50];
    char codigoCarta2[4];

    int populacao2;
    float area2;
    int pontosTuristicos2;
    float pib2;
    float densidadePopulacional2; 
    float pibPercapita2;


    printf("CARTA: \n");
    scanf(" %3s", codigoCarta1); 

    printf("Nome da sua cidade: \n");
    scanf(" %50s", nomeCidade1); 

    printf("A área da sua cidade (em km²): \n");
    scanf("%f", &area);

    printf("Quantos pontos turísticos tem a sua cidade?: \n");
    scanf("%d", &pontosTuristicos);

    printf("A população da cidade: \n");
    scanf("%d", &populacao);

    printf("O PIB da cidade (em milhões): \n");
    scanf("%f", &pib);

    // Cálculo das novas propriedades
    densidadePopulacional = populacao / area;
    pibPercapita = pib / populacao;
    // Exibição das informações organizadas
    printf("\n= INFORMAÇÕES DA CIDADE1 =\n");
    printf("Código da Carta: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Área: %.2f km²\n", area);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);
    printf("População: %d habitantes\n", populacao);
    printf("PIB: %.2f milhões\n", pib);
    printf(" Densidade Populacional: %.2f hab/km²\n", densidadePopulacional);
    printf(" PIB per Capita: %.2f milhões por habitante\n", pibPercapita);
// segunda parte do código

    printf("CARTA2: \n");
    scanf(" %3s", codigoCarta2); 

    printf("Nome da sua cidade2: \n");
    scanf(" %50s", nomeCidade2); 

    printf("A área da sua cidade2 (em km²): \n");
    scanf("%f", &area2);

    printf("Quantos pontos turísticos tem a sua cidade?: \n");
    scanf("%d", &pontosTuristicos2);

    printf("A população da cidade2: \n");
    scanf("%d", &populacao2);

    printf("O PIB da cidade2 (em milhões): \n");
    scanf("%f", &pib2);

    // Cálculo das novas propriedades
    densidadePopulacional2 = populacao2 / area2;
    pibPercapita2 = pib2 / populacao2;
    // Exibição das informações organizadas
    printf("\n===== INFORMAÇÕES DA CIDADE2 =====\n");
    printf("Código da Carta: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Área2: %.2f km²\n", area2);
    printf("Pontos Turísticos2: %d\n", pontosTuristicos2);
    printf("População2: %d habitantes\n", populacao2);
    printf("PIB2: %.2f milhões\n", pib2);
    printf("---------------------------------\n");
    printf(" Densidade Populacional2: %.2f hab/km²\n", densidadePopulacional2);
    printf(" PIB per Capita2: %.2f milhões por habitante\n", pibPercapita2);
    printf("=================================\n");

    
    if(populacao > populacao2){
        printf("A Carta: %s", nomeCidade1);
        printf("é a vencedora!!%d\n", populacao, populacao2);
    }
    else{
        printf("A Carta: %s\n", nomeCidade1);
        printf("perdeu!!%d\n", populacao, populacao2);
        printf("A Carta: %s\n", nomeCidade2);
        printf("é a vencedora!!%d\n", populacao2);
    }   

    return 0;
}
