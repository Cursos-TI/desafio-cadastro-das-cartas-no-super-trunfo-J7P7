//DEUS SEJA SEMPRE LOUVADO!!!!!! // DEUS NA FRENTE DE TUDO!!!!!!

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
int main() {

	// Aqui serão salvos os dados que o usuário ira disponibilizar.
	char letra[50], codigo[50], nome[50], letra2[50], codigo2[50], nome2[50], menu, nome01[50], nome02[50]; //char me permite usar strings.
	int populacao = 0, pontos = 0, populacao2 = 0, pontos2 = 0, menu2, menu1;  //int me permite usar numeros inteiros.
	float areakm2 = 0, denssidade = 0, pib = 0, areakm22 = 0, denssidade2 = 0, pib2 = 0;//float me permite usar numereos decimais.


	

	printf("#### MENU PARA INICIAR O JOGO #####\n");// Uma leve interação com o usuário usando a função printf.

	// esse e o menu inicial do jogo.
	printf("APERTE p PARA COMEÇAR O JOGO COMPARACAO DE CARTAS\n");
	printf("APERTE c PARA ACESSAR AS CONFIGURAÇOES DO JOGO \n");
	printf("APERTE s PARA SAIR DO JOGO \n");
	printf("APERTE d PARA ENTRAR NO MODO COMPARACAO DE ATRIBUTOS\n");
	scanf("%c", &menu);



	// aqui usamos o switch para estruturar o nosso jogo com decisões.
	switch (menu) {

	case 'd':

		// AQUI E UM JOGO SECUNDÁRIO QUE RODA AO SELECIONAR A OPÇÃO D NO MENU INICIAL
		printf("oi vamos começar o modo comparaçao de atributos\n\n");
		
		printf("nesse modo voce vai escolher um atributo que voce quer usar contra o atributo da carta do seu oponente\n\n");
		
		printf("## escolha um atributo para sua carta e coloque o valor que corresponde ##\n\n");


		printf("jogador numero 1 digite o nome do seu pais\n\n");
		
		scanf("%s", &nome01,"\n\n");


        printf("ATRIBUTOS \n");
		
		printf("1 para populaçao\n");
		printf("2 para area\n");
		printf("3 para pib\n");
		printf("4 para numero de pontos turisticosn\n");
		printf("5 para denssidade demografica\n\n");
		printf("escolha um dos atributos acima\n");
		scanf("%d", &menu1);

			
		if (menu1 == 1) {
			printf("digite a populaço\n");
			scanf("%d", &populacao);
		}

		else if (menu1 == 2) {
			printf("digite a area\n");
			scanf("%f", &areakm2);
		}

		else if (menu1 == 3) {
			printf("digite o pib\n");
			scanf("%f", &pib);
		}

		else if (menu1 == 4) {
			printf("digite o numero de pontos turisticos\n");
			scanf("%d", &pontos);
		}

		else if (menu1 == 5) {
			printf("digite a denssidade demografica\n");
			scanf("%d", &denssidade);
		}
		else {
			printf("nenhuma opçao valida\n");
		}
	
		printf("\n");
		printf("jogador numero 2 digite o nome do seu pais\n\n");
		scanf("%s", &nome02,"\n");
	
		printf("ATRIBUTOS\n");
		printf("1 para populaçao\n");
		printf("2 para area\n");
		printf("3 para pib\n");
		printf("4 para numero de pontos turisticos\n");
		printf("5 para denssidade demografica\n\n");
		printf("escolha um dos atriubutos acima\n");
		scanf("%d", &menu2);


		if (menu2 == 1) {
			printf("digite a populaçao\n");
			scanf("%d", &populacao2);
		}

		else if (menu2 == 2) {
			printf("digite a area\n");
			scanf("%f", &areakm22);
		}

		else if (menu2 == 3) {
			printf("digite o pib\n");
			scanf("%f", &pib2);
		}

		else if (menu2 == 4) {
			printf("digite o numero de pontos turisticos\n");
			scanf("%d", &pontos2);
		}

		else if (menu2 == 5) {
			printf("digite a denssidade demografica\n");
			scanf("%d", &denssidade2);
		}

		else {
			printf("erro na opeçao\n");
		}


		printf("\n");
		if (denssidade + populacao + areakm2 + pib + pontos == populacao2 + areakm22 + pib2 + pontos2 + denssidade2) {
			printf("### EMPATE ###\n");
		}

	
		printf("\n");
		printf("%s\n",nome01);

		if (denssidade < denssidade2){
			printf("ganou no atributo denssidade com uma denssidade de:%.2f\n", denssidade);
		}
		else if (denssidade > denssidade2){
			printf("perdeu no atributo denssidade com uma denssidade de:%.2f\n", denssidade);
		}
		

	    else if (populacao > populacao2){
			printf("ganhou no atributo de populaçao com uma populaçao de:%.2d\n", populacao);		
		}
		else if (populacao < populacao2){
			printf("perdeu no atributo de populaçao com uma populaçao de:%.2d\n", populacao);
		}
		

	    else if (areakm2 > areakm22){
			printf("ganhou na area quadrada com uma area de:%.2f\n", areakm2);
		}
		else if(areakm2 < areakm22){
			printf("perdeu na area quadrada com uma area de:%.2f\n", areakm2);
		}
		

        else if (pib > pib2){
			printf("ganhou no pib com um pib de :%.2f\n", pib);	
		}
		else if (pib < pib2){
			printf("perdeu no pib com um pib de :%.2f\n", pib);
        }
		

		else if (pontos > pontos2){
			printf("ganhou nos pontos com:%.2d%s\n", pontos, "pontos turisticos\n");
	    }
		else if (pontos < pontos2){
			 printf("perdeu nos pontos com:%.2d%s\n", pontos, "pontos turisticos\n");
		}
		
		
		printf("\n");
		printf("%s\n",nome02);

	    if (denssidade > denssidade2){
			printf("ganou no atributo denssidade com uma denssidade de:%.2f\n", denssidade2);
		}
		else if (denssidade < denssidade2) {
			printf("perdeu no atributo denssidade com uma denssidade de:%.2f\n", denssidade2);
		}
		

        else if (populacao < populacao2){
			printf("ganhou no atributo de populaçao com uma populaçao de:%.2d\n", populacao2);
		}
		else if (populacao > populacao2) {
			printf("perdeu no atributo de populaçao com uma populaçao de:%.2d\n", populacao2);
		}
		

		else if (areakm2 < areakm22){
			printf("ganhou na area quadrada com uma area de:%.2f\n", areakm22);
		}
		else if (areakm2 > areakm22) {
			printf("perdeu na area quadrada com uma area de:%.2f\n", areakm22);
        }
		

		else if (pib < pib2){
			printf("ganhou no pib com um pib de:%.2f\n", pib2);
		} 
		else if (pib > pib){
			printf("perdeu no pib com um pib de:%.2f\n", pib2);
		}
		

		else if (pontos < pontos2){
			printf("ganhou nos pontos com:%.2d%s\n", pontos2, "pontos turisticos\n");
		}
		else if (pontos > pontos2) {
			 printf("perdeu nos pontos com:%.2d%s\n", pontos2, "pontos turisticos\n");
		}
		
		break;

	case 'p':


		//aqui esta uma breve interação com o usuário.

		
		printf("##### OI VAMOS COMEÇAR A CADSTRAR AS CARTAS PARA COMEÇAR O JOGO ######\n\n");
		
		//printf e uma função que permite ao programa exibir dados na tela.

	//aqui está um bloco de comando onde o usuário injetara dados no programa.
	//printf e uma função que permite ao programa exibir dados na tela.
	//scanf e uma função que permite ao usuário injetar dados no programa.

	//BLOCO DE COMANDOS.

		printf("escolha uma letra de A ate H para representar a sua carta/estado \n");
		scanf("%s", letra);

		printf("agora escolha um numero de 1 a 4 para formar o codigo da sua carta \n");
		scanf("%s", codigo);

		printf("agora escolha o nome da sua cidade \n");
		scanf("%s", nome);

		printf("agora escreva a quantidade de moradores da sua cidade \n");
		scanf("%d", &populacao);

		printf("agora escreva o tamaho da sua cidade em km² \n");
		scanf("%f", &areakm2);
		
		printf("A densidade demografica da sua cidade e:%.2f%s\n",denssidade = populacao/areakm2, "hab / km²\n");
		
		printf("agora escreva o pib/produto interno bruto da sua cidade \n");
		scanf("%f", &pib);

		printf("agora escreva a quantidade de pontos turistricos da sua cidade \n");
		scanf("%d", &pontos);

		//printf e uma função que permite ao programa exibir dados na tela.
		//scanf e uma função que permite ao usuário injetar dados no programa.

		//aqui esta uma breve interação com o usuário onde eu faço o uso da função printf("").

		printf("#### MUITO BEM AQUI ESTAO AS INFORMAÇOES DA SUA PRIMEIRA CARTA ####\n\n");
		
		//resposta do programa ao usuário.

		printf("### CARTA NUMERO 1 ####\n\n");
		
		printf("A letar da cidade e: %s \n", letra);
		printf("O codigo da cidade e: %s%d%s \n", letra, 0, codigo);
		printf("O nome da cidade e: %s \n", nome);
		printf("A populaçao da sua cidade e: %d \n", populacao);
		printf("A area da sua cidade em metros quadrados e: %.2f%s \n", areakm2, "km²");
		printf("A decidede demografica e:%.2f%s\n", denssidade = populacao / areakm2, "hab / km²");
		printf("O pib da sua cidade e: %.2f%s \n", pib, "bilhões de reais");
		printf("A quantidade de pontos turisticos da sua cidade e: %d \n", pontos);

		//TODOS OS COMENTÁRIOS ANTERIORES VISTOS SE APLICAM A ESSA NOVA PARTE DO CÓDIGO.



		printf("##### AGORA VAMOS CADASTRAR A SEGUNDA CARTA ######\n\n");
		


		printf("escolha uma letra de A ate H para representar a sua carta/estado\n");
		scanf("%s", letra2);

		printf("agora escolha um numero de 1 a 4 para formar o codigo da sua carta \n");
		scanf("%s", codigo2);

		printf("agora escolha o nome da sua cidade \n");
		scanf("%s", nome2);

		printf("agora escreva a quantidade de moradores da sua cidade \n");
		scanf("%d", &populacao2);

		printf("agora escreva o tamaho da sua cidade em km² \n");
		scanf("%f", &areakm22);
		
		printf("a densidade demografica da sua cidade e:%.2f%s\n", denssidade2 = populacao2/areakm22, "hab/km²\n");

		printf("agora escreva o pib/produto interno bruto da sua cidade \n");
		scanf("%f", &pib2);

		printf("agora escreva a quantidade de pontos turistricos da sua cidade \n");
		scanf("%d", &pontos2);


		printf("#### MUITO BEM , AQUI ESTAO AS INFORMAÇOES DA SUA SEGUNDA CARTA \n\n");
	


		printf("##### CARTA NUMERO 2 ######\n\n");
	


		printf("A letra da cidade e: %s \n", letra2);
		printf("O codigo da cidade e: %s%d%s \n", letra2, 0, codigo2);
		printf("O nome da cidade e: %s \n", nome2);
		printf("A populaçao da sua cidade e: %d \n", populacao2);
		printf("A area da sua cidade em metros quadrados e: %.2f%s \n", areakm22, "km²");
		printf("A decidede demografica e:%.2f%s\n", denssidade2 = populacao2 / areakm22, "hab/km²");
		printf("O pib da sua cidade e: %.2f%s \n", pib2, "bilhões de reais");
		printf("A quantidade de pontos turisticos da sua cidade e: %d \n", pontos2);

		// aqui você tem a parte lógica do programa onde é responsável por dar a resposta correta para o usuário.
		
		// aqui está sendo usado lógica de comparação para determinar qual carta é a vencedora.

		printf("                               \n");
		if (populacao2 + areakm22 + pib2 + pontos2 + denssidade2 == populacao + areakm2 + pib + pontos + denssidade) {
			printf("##### AS DUAS CARTAS TEM O MESMO PODER #######\n");
		}
		else if (denssidade2 < denssidade || populacao2 + areakm22 + pib2 + pontos2 > populacao + areakm2 + pib + pontos) {
			printf("#### CARTA %s GANHOU ####\n",nome2);
		}
		else {
			printf("##### CARTA %s GANHOU ####\n",nome);
		}


		printf("\n");
		printf("%s", nome);
		printf("\n");

		// nessa parte uso if eslse para fazer comparações de dados para assim mostrar as informações ao usuário.

		if (populacao > populacao2){
			printf("GANHOU NA POPULAÇAO\n");
		}
		else if (populacao == populacao2){
			printf("EMPATOU NA POPULAÇOA \n");
		}
		else {
			printf("PERDEU NA POPULAÇAO\n");
		}


		if (denssidade < denssidade2){
			printf("GANHOU NA DENSSIDADE\n");
		}
		else if (denssidade == denssidade2){
			printf("EMPATOU NA DENSSIDADE\n");
		}
		else {
			printf("PERDEU NA DENSSIDADE\n");
		}


		if (areakm2 > areakm22){
			printf("GANHOU NA AREA QUADRADA\n");
		}
		else if (areakm2 == areakm22){
			printf("EMPATOU NA AREA KM2\n");
		}
		else {
			printf("PERDEU NA AREA QUADRADA\n");
		}


		if (pib > pib2){
			printf("GANHOU NO PIB\n");
		}
		else if (pib == pib2){
			printf("EMPATOU NO PIB\n");
		}
		else {
			printf("PERDEU NO PIB\n");
		}


		if (pontos > pontos2){
			printf("GANHOU NOS PONTOS TURISTICOS\n");
		}
		else if (pontos == pontos2){
			printf("EMPATOU NOS PONTOS\n");
		}
		else {
			printf("PERDEU NOS OPONTOS TURISTICOS\n");
		}



		printf("\n");
		printf("%s", nome2);
		printf("\n");

		if (populacao < populacao2){
			printf("GANHOU NA POPULAÇAO\n");
		}
		else if (populacao == populacao2){
			printf("EMPATOU NA POPULAÇAO\n");
		}
		else {
			printf("PERDEU NA POPULAÇAO\n");
		}


		if (denssidade > denssidade2){
			printf("GANHOU NA DENSSIDADE\n");
		}
		else if (denssidade == denssidade2){
			printf("EMPATOU NA DENSSIDADE\n");
		}
		else {
			printf("PERDEU NA DENSSIDADE\n");
		}


		if (areakm2 < areakm22){
			printf("GANHOU NA AREA QUADRADA\n");
		}
		else if (areakm2 == areakm22){
			printf("EMPATOU NA AREA KM2\n");
		}
		else {
			printf("PERDEU NA AREA QUADRADA\n");
		}


		if (pib < pib2){
			printf("GANHOU NO PIB\n");
		}
		else if (pib == pib2){
			printf("EMPATOU NO PIB\n");
		}
		else {
			printf("PERDEU NO PIB\n");
		}


		if (pontos < pontos2){
			printf("GANHOU NOS PONTOS TURISTICOS\n");
		}
		else if (pontos == pontos2){
			printf("EMPATOU NOS PONTOS\n");
		}
		else {
			printf("PERDEU NOS PONTOS TURISTICOS\n");
		}

		// break faz parte da estrutura switch e serve para parar a execução do programa quando ele completa uma tarefa assim não executando os comandos subsequentes.
		break;

		// case tambem faz parte da estrutura switch e  usada para armazenar um caso ou uma "condiçao".
	case 'c':
		printf("#### CONFIGURAÇOES DO JOGO ####\n");
		break;

	case 's':
		printf(" ##### SAINDO DO GAMER #####\n");
		break;

		// default é o else da estrutura switch onde sua função é executar uma outra via para o programa caso as outras vias não sejam a escolhida pelo usuário.
	default:
		printf("ERRO NO JOGO, VERIFIQUE SE CARACTER QUE VOCE DIGITOU ESTA MINUSCULA PARA O JOGO CONTINUAR!!!\n");
	}
    
	return 0;
  
    }
