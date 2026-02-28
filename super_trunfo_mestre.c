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

char Estado_2;
char codigo_2[25];
char nome_cidade_2[55];
unsigned long int populacao_2;
float area_2;
float PIB_2;
int pontos_turisticos_2;


//Solicita ao usuário os dados da Carta 1, armazenando os valores nas variavéis correspondentes ok 

printf("Insira os dados da Carta 1.  \n");

printf("Digite a letra do Estado: \n");
scanf("  %c", &Estado_1);

printf("Digite o código da carta 1: \n");
scanf("  %s", codigo_1);

printf("Digite o nome da cidade:  \n");
scanf("  %s", nome_cidade_1);

printf("Digite o número da população: \n");
scanf("%lu", &populacao_1);

printf("Digite a área : \n");
scanf("%f", &area_1);

printf("Digite o PIB(Produto Interno Bruto):  \n");
scanf("%f",  &PIB_1);

printf("Digite o número de pontos turísticos:  \n");
scanf("%d", &pontos_turisticos_1);
printf("\n \n");


//Solicita ao usuário dados da Carta 2, armazenando os valores nas variavéis relacionadas

printf("Insira os dados da Carta 2.  \n");

printf("Digite a letra do Estado: \n");
scanf("  %c", &Estado_2);

printf("Digite o código da carta 2: \n");
scanf("  %s", codigo_2);

printf("Digite o nome da cidade:  \n");
scanf("  %s", nome_cidade_2);

printf("Digite o número da população: \n");
scanf("%lu", &populacao_2);

printf("Digite a área : \n");
scanf("%f", &area_2);

printf("Digite o PIB(Produto Interno Bruto):  \n");
scanf("%f",  &PIB_2);

printf("Digite o número de pontos turísticos:  \n");
scanf("%d", &pontos_turisticos_2);





//Calcula a densidade populacional(população/área) da Carta 1


float densidade1 =  (float) populacao_1 / area_1;  //  O número da população 1 é convertido para float antes da divisão, para ficar float dividido por float



 //Calcula o PIB per Capita(PIB/População) da Carta 1

float PIB_per_Capita_1 = PIB_1 / (float) populacao_1; // o número da população 2 é convertido para float antes dessa divisão




//Calcula a densidade populacional(população/área) da Carta 2


float densidade2 =  (float) populacao_2 / area_2;  //  O número da população 2 é convertido para float antes da divisão, para ficar float dividido por float


//Calcula o PIB per Capita(PIB/População) da Carta 2

float PIB_per_Capita_2 = PIB_2 / (float) populacao_2; // número de população 2 é convertido para float antes dessa divisão




//Calculando o Super Poder 1


// Converte o número da População1 para float e o número de Pontos Turísticos1 para float

float populacao_para_f1 = (float) populacao_1;

float pontos_turisticos_f1 = (float) pontos_turisticos_1;


// Calcula o inverso da Densidade Populacional 1 ( 1/ Densidade Populacional) e armazena em uma variável float 

float inverso_dp1 = 1/ densidade1;


//Realiza a soma(Super Poder 1) da Carta 1: Soma de População, Área, PIB, Pontos Turísticos,PIB per Capita mais o Inverso de Densidade Populacional


float soma_1 = populacao_para_f1 + area_1 + PIB_1 + pontos_turisticos_f1 + PIB_per_Capita_1 + inverso_dp1;


float Super_Poder_1 = soma_1;





//Calculando o Super Poder 2


// Converte o número da População2 para float e o número de Pontos Turísticos 2 para float

float populacao_para_f2 = (float) populacao_2;

float pontos_turisticos_f2 = (float) pontos_turisticos_2;



// Calcula o inverso da Densidade Populacional 2 ( 1/ Densidade Populacional) e armazena em uma variável float 

float inverso_dp2 = 1/ densidade2;




//Realiza a soma(Super Poder 2) da Carta 2: Soma de População, Área, PIB, Pontos Turísticos,PIB per Capita mais o Inverso de Densidade Populacional


float soma_2 = populacao_para_f2 + area_2 + PIB_2 + pontos_turisticos_f2 + PIB_per_Capita_2 + inverso_dp2;


float Super_Poder_2 = soma_2;



// Comparação das Cartas:


int comparacao1_populacao = populacao_1 > populacao_2;

int comparacao2_area = area_1 > area_2;

int comparacao3_PIB = PIB_1 > PIB_2;


int comparacao4_pontosturis = pontos_turisticos_1 > pontos_turisticos_2;

int comparacao5_DP = densidade1 < densidade2;

int comparacao6_perCapita = PIB_per_Capita_1 > PIB_per_Capita_2;

int comparacao7_SuperP = Super_Poder_1 > Super_Poder_2;





// Imprimi os dados da Carta 1, ok 

printf("--------Carta 1-------- \n");
printf("-Estado:   %c\n", Estado_1);
printf("-Código:   %s\n", codigo_1);
printf("-Nome da cidade:   %s\n", nome_cidade_1);
printf("-População:%lu \n", populacao_1);
printf("-Área:%.2f km²\n", area_1);
printf("-PIB:%.2f bilhões de reais\n", PIB_1);
printf("-Número de pontos turísticos:%d\n", pontos_turisticos_1);
printf("Densidade Populacional:%.2f hab/km²\n", densidade1);
printf("PIB per Capita:%.2f reais\n", PIB_per_Capita_1);



//Imprimi os dados da Carta 2, ok

printf("------Carta 2------ \n");
printf("-Estado:   %c\n", Estado_2);
printf("-Código:   %s\n", codigo_2);
printf("-Nome da cidade:   %s\n", nome_cidade_2);
printf("-População:%lu\n", populacao_2);
printf("-Área:%.2f km²\n", area_2);
printf("-PIB:%.2f bilhões de reais\n", PIB_2);
printf("-Número de pontos turísticos:%d\n", pontos_turisticos_2);
printf("Densidade Populacional:%.2f hab/km²\n", densidade2);
printf("PIB per Capita:%.2f reais\n", PIB_per_Capita_2);


// Printa o resultado das comparações 

printf("--------Comparação de Cartas--------  \n");
printf("População: Carta 2 venceu (%d) \n", comparacao1_populacao);
printf("Área: Carta 1 venceu (%d) \n", comparacao2_area);
printf("PIB : Carta 1 venceu (%d)\n", comparacao3_PIB);
printf("Pontos Turísticos: Carta 1 venceu (%d) \n", comparacao4_pontosturis);
printf("Densidade Populacional: Carta 1 venceu (%d) \n", comparacao5_DP);
printf("PIB per Capita: Carta 1 venceu (%d)\n", comparacao6_perCapita);
printf("Super Poder : Carta 1 venceu (%d) \n", comparacao7_SuperP);



return 0;

}