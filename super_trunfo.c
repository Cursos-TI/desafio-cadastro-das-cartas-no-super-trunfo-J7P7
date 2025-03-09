#include <stdio.h>
int main() {

// aqui serao salvos os dados da primeira carta que o usuario ira disponibilizar 
char letra[50], codigo[50], nome[50]; //char me permite usar strings
int populacao, pontos;//int me permite usar numeros inteiros
float areakm2, pib;//float me permite usar numereos decimais

// aqui serao salvos os dados da segunda carta que o usuario ira disponibilizar
char letra2[50], codigo2[50], nome2[50];//char me permite usar strings
int populacao2, pontos2;//int me permite usar numeros inteiros
float areakm22, pib2;//float me permite usar numereos decimais

//aqui esta uma breve interaçao com o usuario   
printf("oi vamos começar a cadastrar as cartas para começar o jogo \n");
//printf e uma funçao que permoite ao programa exibir dados na tela

//aqui esta um bloco de comando onde o usuario injetara dados no programa
//printf e uma funçao que permite ao programa exibir dados na tela
//scanf e uma funçao que permite ao usuario injetar dados no programa

//BLOCO DE COMANDOS

printf("escolha uma letra de A ate H para representar a sua carta/estado \n");
scanf("%s", &letra);

printf("agora escolha um numero de 1 a 4 para formar o codigo da sua carta \n");
scanf("%s",&codigo);

printf("agora escolha o nome da sua cidade \n");
scanf("%s",&nome);

printf("agora escreva a quantidade de moradores da sua cidade \n");
scanf("%d",&populacao);

printf("agora escreva o tamaho da sua cidade em km² \n");
scanf("%f",&areakm2);

printf("agora escreva o pib/produto interno bruto da sua cidade \n");
scanf("%f",&pib);

printf("agora escreva a quantidade de pontos turistricos da sua cidade \n");
scanf("%d",&pontos);

//printf e uma funçao que permoite ao programa exibir dados na tela
//scanf e uma funçao que permite ao usuario injetar dados no programa

//aqui esta uma breve interaçao com o usuario onde eu faço o uso da funçao printf("")
printf("muito bem aqui estao as informaçaoes da sua primeira carta \n");

//resposta do programa ao usuario
printf("carta numero 1 \n");

printf("A letar da cidade e: %s \n", letra);
printf("O codigo da cidade e: %s%d%s \n",letra,0,codigo);
printf("O nome da cidade e: %s \n", nome);
printf("A populaçao da sua cidade e: %d \n", populacao);
printf("A area da sua cidade em metros quadrados e: %.2f%s \n", areakm2,"km²");
printf("O pib da sua cidade e: %.2f%s \n", pib,"bilhões de reais");
printf("A quantidade de pontos turisticos da sua cidade e: %d \n", pontos);

//TODOS OS COMENTARIOS ANTERIOMENTE VISTOS SE APLICAM A ESSA NOVA PARTE DO CODIGO

printf("agora vamos cadastrar a segunda carta \n");

printf("escolha uma letra de A ate H para representar a sua carta/estado\n");
scanf ("%s",&letra2);

printf("agora escolha um numero de 1 a 4 para formar o codigo da sua carta \n");
scanf("%s",&codigo2);

printf("agora escolha o nome da sua cidade \n");
scanf("%s",&nome2);

printf("agora escreva a quantidade de moradores da sua cidade \n");
scanf("%d",&populacao2);

printf("agora escreva o tamaho da sua cidade em km² \n");scanf("%f",&areakm22);

printf("agora escreva o pib/produto interno bruto da sua cidade \n");
scanf("%f",&pib2);

printf("agora escreva a quantidade de pontos turistricos da sua cidade \n");
scanf("%d",&pontos2);

printf("muito bem aqui estao as informaçaoes da sua segunda carta \n");

printf("carta numero 2 \n");

printf("A letra da cidade e: %s \n", letra2);
printf("O codigo da cidade e: %s%d%s \n", letra2, 0 ,codigo2);
printf("O nome da cidade e: %s \n",nome2);
printf("A populaçao da sua cidade e: %d \n", populacao2);
printf("A area da sua cidade em metros quadrados e: %.2f%s \n", areakm22, "km²");
printf("O pib da sua cidade e: %.2f%s \n", pib2, "bilhões de reais");
printf("A quantidade de pontos turisticos da sua cidade e: %d \n", pontos2);

printf("agora vamos para proxima etapa (FIM)");

peintf("DEUS SEJA LOUVADO !!!!! \n");

return 0;

}

