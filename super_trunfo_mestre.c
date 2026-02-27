#include <stdio.h>

int main(){

//Declara as variavéis da Carta 1 indicando seus formatos,dessa vez população 1 armazena números positivos maiores no formato unsigned long int

char Estado_1;
char codigo_1[20];
char nome_cidade_1[50];
unsigned long int populacao_1;
float area_1;
float PIB_1;
int pontos_turisticos_1;



//Declara as variavéis da Carta 2 indicando seus formatos,dessa vez a população 2 armazena números positivos maiores no formato unsigned long int

/*char Estado_2;
char codigo_2[25];
char nome_cidade_2[55];
unsigned long int populacao_2;
float area_2;
float PIB_2;
int pontos_turisticos_2;*/



//Solicitei só os dados númericos 
//Solicita ao usuário os dados da Carta 1, imcompleto armazenando os valores nas variavéis correspondente,

printf("Insira os dados da Carta 1.  \n");


printf("Digite o número da população: \n");
scanf("%lu", &populacao_1);

printf("Digite a área : \n");
scanf("%f", &area_1);

printf("Digite o PIB(Produto Interno Bruto):  \n");
scanf("%f",  &PIB_1);

printf("Digite o número de pontos turísticos:  \n");
scanf("%d", &pontos_turisticos_1);
printf("\n \n");


//Solicita ao usuário dados da Carta 2, imcompleto armazenando os valores nas variavéis relacionadas

/*printf("Insira os dados da Carta 2.  \n");

printf("Digite o número da população: \n");
scanf("%lu", &populacao_2);

printf("Digite a área : \n");
scanf("%f", &area_2);

printf("Digite o PIB(Produto Interno Bruto):  \n");
scanf("%f",  &PIB_2);

printf("Digite o número de pontos turísticos:  \n");
scanf("%d", &pontos_turisticos_2);*/





//Calcula a densidade populacional(população/área) da Carta 1


float densidade1 =  (float) populacao_1 / area_1;  //  O número da população 1 é convertido para float antes da divisão, para ficar float dividido por float



 //Calcula o PIB per Capita(PIB/População) da Carta 1

float PIB_per_Capita_1 = PIB_1 / (float) populacao_1; // o número da população 2 é convertido para float antes dessa divisão




//Calcula a densidade populacional(população/área) da Carta 2


//float densidade2 =  (float) populacao_2 / area_2;  //  O número da população 2 é convertido para float antes da divisão, para ficar float dividido por float


//Calcula o PIB per Capita(PIB/População) da Carta 2

//float PIB_per_Capita_2 = PIB_2 / (float) populacao_2; // número de população 2 é convertido para float antes dessa divisão



// Tirar os comentários para finalizar complementado com a solicitação dos dados não númericos

// Printa só so dados númericos da Carta 1

/*printf("------Carta 1------  \n");
printf("-População:%lu\n", populacao_1);
printf("-Área:%.2f km²\n", area_1);
printf("-PIB:%.2f bilhões de reais\n", PIB_1);
printf("-Número de pontos turísticos:%d\n", pontos_turisticos_1);
printf("Densidade Populacional:%.2f hab/km²\n", densidade1);
printf("PIB per Capita:%.2f reais\n", PIB_per_Capita_1);*/


//Printa só os dados númericos da Carta 2

/*printf("------Carta 2------ \n");
printf("-População:%lu\n", populacao_2);
printf("-Área:%.2f km²\n", area_2);
printf("-PIB:%.2f bilhões de reais\n", PIB_2);
printf("-Número de pontos turísticos:%d\n", pontos_turisticos_2);
printf("Densidade Populacional:%.2f hab/km²\n", densidade2);
printf("PIB per Capita:%.2f reais\n", PIB_per_Capita_2);
*/




//Calculando o Super Poder 1


// Converte o número da População1 para float e o número de Pontos Turísticos para float

float populacao_para_f1 = (float) populacao_1;

float pontos_turisticos_f1 = (float) pontos_turisticos_1;

// Calcula o inverso da Densidade Populacional ( 1/ Densidade Populacional) e armazena em uma variável float 

float inverso_dp1 = 1/ densidade1;


//Realiza a soma(Super Poder 1) da Carta 1: Soma de População, Área, PIB, Pontos Turísticos,PIB per Capita mais o Inverso de Densidade Populacional


float soma_1 = populacao_para_f1 + area_1 + PIB_1 + pontos_turisticos_f1 + PIB_per_Capita_1 + inverso_dp1;


float Super_Poder_1 = soma_1;


// Saída de Teste  da Carta 1

printf("-População:%lu\n", populacao_1);
printf("-Área:%.2f km²\n", area_1);
printf("-PIB:%.2f bilhões de reais\n", PIB_1);
printf("-Número de pontos turísticos:%d\n", pontos_turisticos_1);
printf("Densidade Populacional:%.2f hab/km²\n", densidade1);
printf("PIB per Capita:%.2f reais\n", PIB_per_Capita_1);
printf("Super Poder: %.f \n", Super_Poder_1);




return 0;

}