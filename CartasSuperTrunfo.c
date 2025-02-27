#include <stdio.h>

int main(){

char estado[50], estado2[50];
char codigo[50], codigo2[50];
char cidade[50], cidade2[50];
int populacao, populacao2;
float areakm, areakm2;
float pib, pib2;
int pontoturistico, pontoturistico2;

//Obtendo as características da carta 01

printf("Digite o estado: \n");
scanf("%s", &estado);

printf("Digite o código da carta: \n");
scanf("%s", &codigo);

printf("Digite a cidade: \n");
scanf("%s", &cidade);

printf(" Digite a população: \n");
scanf("%d", &populacao);

printf(" Digite sua área em Km²: \n");
scanf("%f", &areakm),

printf("Digite o PIB: \n");
scanf("%f", &pib);

printf("Digite a quantidade de pontos turísticos: \n");
scanf("%d", &pontoturistico);


//Características da carta 01

printf("O estado é: %s - Código: %s\n", estado, codigo);
printf("A cidade é: %s - Com uma população de: %d Milhões de pessoas\n", cidade, populacao);
printf(" Sua área em Km² é de: %.3f Km² - Com um PIB de: %.2f Milhões\n", areakm, pib);
printf(" Contando com: %.d pontos turísticos\n", pontoturistico);




//Obtendo as caracteristicas da carta 02

printf("Digite o estado: \n");
scanf("%s", estado2);

printf("Digite o código da carta: \n");
scanf("%s", codigo2);

printf("Digite a cidade: \n");
scanf("%s", cidade2);

printf(" Digite a população: \n");
scanf("%d", &populacao2);

printf(" Digite sua área em Km²: \n");
scanf("%f", &areakm2),

printf("Digite o PIB: \n");
scanf("%f", &pib2);

printf("Digite a quantidade de pontos turísticos: \n");
scanf("%d", &pontoturistico2);

//Características da carta 02

printf("O estado é: %s - Código: %s\n", estado2, codigo2);
printf("A cidade é: %s - Com uma população de: %d Milhões de pessoas\n", cidade2, populacao2);
printf(" Sua área em Km² é de: %.3f Km² - Com um PIB de: %.2f Milhões\n", areakm2, pib2);
printf(" Contando com: %.d pontos turísticos\n", pontoturistico2);


return 0;


}