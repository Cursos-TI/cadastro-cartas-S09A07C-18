#include <stdio.h>

int main(){
                     // Declara(cria) as variavéis da carta 1
char Estado_1;
char codigo_1[20];
char nome_cidade_1[50];
int populacao_1;
float area_1;
float PIB_1;
int pontos_turisticos_1;

                                 // Declara (cria) as variavéis da carta 2
char Estado_2;
char codigo_2[25];
char nome_cidade_2[55];
int populacao_2;
float area_2;
float PIB_2;
int pontos_turisticos_2;

//Solicita ao usuário os dados da  Carta 1,lê e armazena esses valores em variavéis correspondentes

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

// Solicita os dados da Carta 2 ao usuário, lê e armazena essses valores em variáveis específicas

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


//Imprimi os a Carta 1

printf("------Carta 1------  \n");
printf("-Estado:   %c\n", Estado_1);
printf("-Código:   %s\n", codigo_1);
printf("-Nome da cidade:   %s\n", nome_cidade_1);
printf("-População:%d\n", populacao_1);
printf("-Área:%.2f km²\n", area_1);
printf("-PIB:%.2f bilhões de reais\n", PIB_1);
printf("-Número de pontos turísticos:%d\n", pontos_turisticos_1);


//Imprimi a Carta 2 

printf("------Carta 2------ \n");
printf("-Estado:   %c\n", Estado_2);
printf("-Código:   %s\n", codigo_2);
printf("-Nome da cidade:   %s\n", nome_cidade_2);
printf("-População:%d\n", populacao_2);
printf("-Área:%.2f km²\n", area_2);
printf("-PIB:%.2f bilhões de reais\n", PIB_2);
printf("-Número de pontos turísticos:%d\n", pontos_turisticos_2);







return 0;


}



/* Aprendizados:


- Vou usar scanf com variáveis tipo int,float,doubler, e char(números inteiros, decimais e caracteres) SEMPRE COLOCO O & ( E COMERCIAL)

- Especificadores de formato int e float não precisam de espaço antes podem ficar junto as aspas, ex : "%d"

- Já especificadores de string e char( caracteres e sequência de caracteres) precisam de um espaço ( faço com a tecla de espaço, um ou dois toques) ex:"  %c"


- Se o código estiver certo e o github persistir em erros pode recarregar a página 


- Programa é concluído depois de testes e falhas então preciso ser paciente em corrigir e digitar.


- Para acessar os próximos links é só entrar no link d e-mail que eles vão enviar , depois vai em codespaces, entra, e digita

*/

