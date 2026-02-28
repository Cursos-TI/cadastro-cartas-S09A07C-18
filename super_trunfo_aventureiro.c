#include <stdio.h>

int main(){

//Declara as variavéis da Carta 1 indicando seus formatos, ok 

char Estado_1;
char codigo_1[20];
char nome_cidade_1[50];
int populacao_1;
float area_1;
float PIB_1;
int pontos_turisticos_1;

//Declara as variavéis da Carta 2 indicando deus formatos,ok

char Estado_2;
char codigo_2[25];
char nome_cidade_2[55];
int populacao_2;
float area_2;
float PIB_2;
int pontos_turisticos_2;

//Solicita ao usuário os dados da Carta 1, armazenando os valores nas variavéis correspondentes,ok

printf("Insira os dados da Carta 1.  \n");

printf("Digite a letra do Estado: \n");
scanf("  %c", &Estado_1);

printf("Digite o código da carta 1: \n");
scanf("  %s", codigo_1);

printf("Digite o nome da cidade:  \n");
scanf("  %s", nome_cidade_1);

printf("Digite o número da população: \n");
scanf("%d", &populacao_1);

printf("Digite a área : \n");
scanf("%f", &area_1);

printf("Digite o PIB(Produto Interno Bruto):  \n");
scanf("%f",  &PIB_1);

printf("Digite o número de pontos turísticos:  \n");
scanf("%d", &pontos_turisticos_1);
printf("\n \n");



//Solicita ao usuário dados da Carta 2, armazenando os valores nas variavéis relacionadas,ok

printf("Insira os dados da Carta 2.  \n");

printf("Digite a letra do Estado: \n");
scanf("  %c", &Estado_2);

printf("Digite o código da carta 2: \n");
scanf("  %s", codigo_2);

printf("Digite o nome da cidade:  \n");
scanf("  %s", nome_cidade_2);

printf("Digite o número da população: \n");
scanf("%d", &populacao_2);

printf("Digite a área : \n");
scanf("%f", &area_2);

printf("Digite o PIB(Produto Interno Bruto):  \n");
scanf("%f",  &PIB_2);

printf("Digite o número de pontos turísticos:  \n");
scanf("%d", &pontos_turisticos_2);


//Calculando Densidade Populacional e PIB das Cartas que é o diferencial do nível aventureiro



 //Calcula a densidade populacional(população/área) da Carta 1


float densidade1 =  (float) populacao_1 / area_1;  //  O número da população 1 é convertido para float antes da divisão, para ficar float dividido por float



 //Calcula o PIB per Capita(PIB/População) da Carta 1

float PIB_per_Capita_1 = PIB_1 / (float) populacao_1; // o número da população 2 é convertido para float antes dessa divisão




//Calcula a densidade populacional(população/área) da Carta 2


float densidade2 =  (float) populacao_2 / area_2;  //  O número da população 2 é convertido para float antes da divisão, para ficar float dividido por float


//Calcula o PIB per Capita(PIB/População) da Carta 2

float PIB_per_Capita_2 = PIB_2 / (float) populacao_2; // número de população 2 é convertido para float antes dessa divisão




// Imprimi os dados da Carta 1,ok

printf("------Carta 1------  \n");
printf("-Estado:   %c\n", Estado_1);
printf("-Código:   %s\n", codigo_1);
printf("-Nome da cidade:   %s\n", nome_cidade_1);
printf("-População:%d\n", populacao_1);
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
printf("-População:%d\n", populacao_2);
printf("-Área:%.2f km²\n", area_2);
printf("-PIB:%.2f bilhões de reais\n", PIB_2);
printf("-Número de pontos turísticos:%d\n", pontos_turisticos_2);
printf("Densidade Populacional:%.2f hab/km²\n", densidade2);
printf("PIB per Capita:%.2f reais\n", PIB_per_Capita_2);





/*Números de teste1

População 1 :3000000
Área1: 500000.00:
Densidade1:6.00
PIB:9000000.00

PIB per capita: 3.00

*/ 



/*Números de teste2

População 2 :4500000
Área 2: 250000.00:
Densidade2:18.00
PIB:13500000.00

PIB per capita: 3.00

*/ 



return 0;




}


///