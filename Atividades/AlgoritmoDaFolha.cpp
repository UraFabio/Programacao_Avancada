#include <stdio.h>
#include <locale.h>
#include <windows.h>

void mostrarCaminho(int tempo1, int tempo2);
void mostrarDetalhesFolha(int tempo1, int tempo2);


int main(){
	int tempo1 = 1000, tempo2 = 1500, resposta;
	setlocale(LC_ALL, "Portuguese");
	
	printf("----------Algoritmo da Folha-------------\n");
	printf("\n");
	
	mostrarCaminho(tempo1, tempo2);
	printf("----------------------------------------\n");
	Sleep(tempo2);
	mostrarDetalhesFolha(tempo1, tempo2);
	printf("----------------------------------------\n");
	
	while(1){
		printf("Deseja repetir algum passo? \nDigite: \n1 para repetir a TRAJET�RIA \n2 para repetir as CARACTER�STICAS \n3 para SAIR.\n");
		printf(">>");
		scanf("%d", &resposta);
		if(resposta == 1){
			mostrarCaminho(tempo1, tempo2);
		}else if(resposta == 2){
			mostrarDetalhesFolha(tempo1, tempo2);
		}else{
			return 0;	
		}
	}
	
}

void mostrarCaminho(int tempo1, int tempo2){
	printf("\n");
	printf("<<<<Trajet�ria para pegar a folha>>>>\n\n");
	printf("Tempo total: 2 minutos\n\n");
	printf("<<Caminho de ida>>\n\n");
	Sleep(tempo1);
	printf("1 -> A partir do ponto de partida virei 90� � esquerda e caminhei reto por mais ou menos 10 metros.\n\n");
	Sleep(tempo1);
	printf("2 -> Logo em seguida, virei 90� � direita e caminhei reto por mais ou menos 25 metros. At� ficar alinhado com o in�cio da pra�a.\n\n");
	Sleep(tempo1);
	printf("3 -> Virei novamente 90� � direita, subindo na pequena rampa de concreto. Caminhei por mais 5 metros, at� ficar em frente � sede da INOVA.\n\n");
	Sleep(tempo1);
	printf("4 -> Procurei por uma planta arbusteira com flores vermelhas e retirei uma folha.\n\n");
	Sleep(tempo1);
	printf("<<Caminho de volta>>\n\n");
	Sleep(tempo1);
	printf("5 -> Ap�s retirar a folha, segui pelo sentido contr�rio ao que vim e virei na primeira direita (mais ou menos 3 metros ap�s a sede da INOVA).\n\n");
	Sleep(tempo1);
	printf("6 -> Segui por 15 metros, at� n�o encontrar mais caminho a frente e virei � esquerda.\n\n");
	Sleep(tempo1);
	printf("7 -> Andei reto por mais 10 metros e virei � direita.\n\n");
	Sleep(tempo1);
	printf("8 -> Caminhei at� encontrar a primeira entrada a direita.\n\n");
	Sleep(tempo1);
	printf("9 -> Segui reto at� ficar em frente � 3� porta (laborat�rio 6).\n\n");
	Sleep(tempo1);
	printf("<<<<FIM DA TRAJET�RIA>>>>");
	printf("\n");
	return;
}

void mostrarDetalhesFolha(int tempo1, int tempo2){
	printf("\n");
	printf("<<<<Caracter�sticas da folha>>>>\n\n");
	Sleep(tempo1);
	printf("<<RNFs>>\n\n");
	Sleep(tempo1);
	printf("1 -> Cor: Verde\n\n");
	Sleep(tempo1);
	printf("2 -> Comprimento: +-3 cm\n\n");
	Sleep(tempo1);
	printf("3 -> Largura: +-1 cm\n\n");
	Sleep(tempo1);
	printf("4 -> Maturidade: jovem\n\n");
	Sleep(tempo1);
	printf("5 -> Formato: oval\n\n");
	Sleep(tempo2);
	printf("<<RFs>>\n\n");
	Sleep(tempo1);
	printf("1 -> Respons�vel pela fotoss�ntese da planta\n\n");
	Sleep(tempo1);
	printf("2 -> Realiza a transpira��o, ajudando no equil�brio h�drico da planta\n\n");
	Sleep(tempo1);
	printf("3 -> Produz horm�nios que ajuda no desenvolvimento da planta\n\n");
	Sleep(tempo1);
	printf("4 -> Armazena nutrientes para a planta\n\n");
	Sleep(tempo1);
	printf("<<<<FIM DAS CARACTER�STICAS DA FOLHA>>>>\n");
	
	
	return;
	
}
