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
		printf("Deseja repetir algum passo? \nDigite: \n1 para repetir a TRAJETÓRIA \n2 para repetir as CARACTERÍSTICAS \n3 para SAIR.\n");
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
	printf("<<<<Trajetória para pegar a folha>>>>\n\n");
	printf("Tempo total: 2 minutos\n\n");
	printf("<<Caminho de ida>>\n\n");
	Sleep(tempo1);
	printf("1 -> A partir do ponto de partida virei 90º à esquerda e caminhei reto por mais ou menos 10 metros.\n\n");
	Sleep(tempo1);
	printf("2 -> Logo em seguida, virei 90º à direita e caminhei reto por mais ou menos 25 metros. Até ficar alinhado com o início da praça.\n\n");
	Sleep(tempo1);
	printf("3 -> Virei novamente 90º à direita, subindo na pequena rampa de concreto. Caminhei por mais 5 metros, até ficar em frente à sede da INOVA.\n\n");
	Sleep(tempo1);
	printf("4 -> Procurei por uma planta arbusteira com flores vermelhas e retirei uma folha.\n\n");
	Sleep(tempo1);
	printf("<<Caminho de volta>>\n\n");
	Sleep(tempo1);
	printf("5 -> Após retirar a folha, segui pelo sentido contrário ao que vim e virei na primeira direita (mais ou menos 3 metros após a sede da INOVA).\n\n");
	Sleep(tempo1);
	printf("6 -> Segui por 15 metros, até não encontrar mais caminho a frente e virei à esquerda.\n\n");
	Sleep(tempo1);
	printf("7 -> Andei reto por mais 10 metros e virei à direita.\n\n");
	Sleep(tempo1);
	printf("8 -> Caminhei até encontrar a primeira entrada a direita.\n\n");
	Sleep(tempo1);
	printf("9 -> Segui reto até ficar em frente à 3ª porta (laboratório 6).\n\n");
	Sleep(tempo1);
	printf("<<<<FIM DA TRAJETÓRIA>>>>");
	printf("\n");
	return;
}

void mostrarDetalhesFolha(int tempo1, int tempo2){
	printf("\n");
	printf("<<<<Características da folha>>>>\n\n");
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
	printf("1 -> Responsável pela fotossíntese da planta\n\n");
	Sleep(tempo1);
	printf("2 -> Realiza a transpiração, ajudando no equilíbrio hídrico da planta\n\n");
	Sleep(tempo1);
	printf("3 -> Produz hormônios que ajuda no desenvolvimento da planta\n\n");
	Sleep(tempo1);
	printf("4 -> Armazena nutrientes para a planta\n\n");
	Sleep(tempo1);
	printf("<<<<FIM DAS CARACTERÍSTICAS DA FOLHA>>>>\n");
	
	
	return;
	
}
