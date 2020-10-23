#include <stdio.h>

void main()
{
	int campo[10][4], i, j, esc, fase1=0, fase2=0, fase3=0;
	char passo[10][4];

	printf("\n Soldado! Sua missao e atravessar este campo minado!");
	printf("\n Digite 1 para responder: Sim senhor!\n");
	printf(" Digite 0 para fugir!\t");
	while(esc!=1 && esc!=0)
	{
		scanf("%i",&esc);
		printf("\n\n Responde direito soldado! 1 ou 0!\t");
	}
	system("cls");
	
	if(esc==1)
	{		
	do
	{
		do
		{
			campo[0][1] = 1;
			campo[0][2] = 0;
			campo[0][3] = 0;
			campo[1][1] = 0;
			campo[1][2] = 1;
			campo[1][3] = 0;
			campo[2][1] = 0;
			campo[2][2] = 0;
			campo[2][3] = 1;
			campo[3][1] = 0;
			campo[3][2] = 0;
			campo[3][3] = 1;
			campo[4][1] = 0;
			campo[4][2] = 1;
			campo[4][3] = 0;
			campo[5][1] = 1;
			campo[5][2] = 0;
			campo[5][3] = 0;
			campo[6][1] = 0;
			campo[6][2] = 1;
			campo[6][3] = 0;
			campo[7][1] = 0;
			campo[7][2] = 0;
			campo[7][3] = 1;
			campo[8][1] = 0;
			campo[8][2] = 0;
			campo[8][3] = 1;
			campo[9][1] = 1;
			campo[9][2] = 0;
			campo[9][3] = 1;
		
			for(i=0;i<=10;i++)
			{
				for(j=1;j<=3;j++)
				{
					passo[i][j] = ' ';
				}
			}
				
			for(i=0;i<=9;i++)
			{
				printf("\t\tFase 1!");
				printf("\n\n Voce precisa dar 10 passos para atravessar cada um dos campos minados!");
				printf("\n\n Escolha onde pisar apertando 1, 2 ou 3!\n");
				printf("\n \t  1   2   3   4   5   6   7   8   9   10\n");
				printf("\t=========================================\n");
				printf("1\t| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", passo[0][1], passo[1][1], passo[2][1], passo[3][1], passo[4][1], passo[5][1], passo[6][1], passo[7][1], passo[8][1], passo[9][1]);
				printf("\t=========================================\n");
				printf("2\t| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", passo[0][2], passo[1][2], passo[2][2], passo[3][2], passo[4][2], passo[5][2], passo[6][2], passo[7][2], passo[8][2], passo[9][2]);
				printf("\t=========================================\n");
				printf("3\t| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", passo[0][3], passo[1][3], passo[2][3], passo[3][3], passo[4][3], passo[5][3], passo[6][3], passo[7][3], passo[8][3], passo[9][3]);
				printf("\t=========================================\n");
				printf("\nDigite qual area deseja pisar: ");
				scanf("%i",&j);
		
				if(campo[i][j]==1)
				{
					system("cls");
					passo[i][j] = 'X';
					printf("\t\tFase 1!");
					printf("\n\n Voce precisa dar 10 passos para atravessar cada um dos campos minados!");
					printf("\n\n Escolha onde pisar apertando 1, 2 ou 3!\n");
					printf("\n \t  1   2   3   4   5   6   7   8   9   10\n");
					printf("\t=========================================\n");
					printf("1\t| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", passo[0][1], passo[1][1], passo[2][1], passo[3][1], passo[4][1], passo[5][1], passo[6][1], passo[7][1], passo[8][1], passo[9][1]);
					printf("\t=========================================\n");
					printf("2\t| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", passo[0][2], passo[1][2], passo[2][2], passo[3][2], passo[4][2], passo[5][2], passo[6][2], passo[7][2], passo[8][2], passo[9][2]);
					printf("\t=========================================\n");
					printf("3\t| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", passo[0][3], passo[1][3], passo[2][3], passo[3][3], passo[4][3], passo[5][3], passo[6][3], passo[7][3], passo[8][3], passo[9][3]);
					printf("\t=========================================\n");
					printf("\n\tPisou na mina! Faleceu!\n");
					printf("\nDigite 1 para jogar mais uma vez a primeira fase ou 0 para encerrar: ");
					scanf("%i",&esc);
					system("cls");
					break;
				}
				else if(campo[i][j]==0)
				{
					passo[i][j] = 'O';
					fase1++;
					system("cls");
				}
				else if(j>3||j<1)
				{
					printf("\n\nVoce pisou fora do campo! (apenas os numeros 1, 2 e 3 sao validos)");
					printf("\n\nDigite 1 para jogar mais uma vez a primeira fase ou 0 para encerrar: ");
					scanf("%i",&esc);
					system("cls");
					break;
				}
			}
		}
		while(esc==1);
	
		if(fase1>9)
		{
			do
			{
				campo[0][1] = 0;
				campo[0][2] = 0;
				campo[0][3] = 1;
				campo[1][1] = 1;
				campo[1][2] = 0;
				campo[1][3] = 0;
				campo[2][1] = 1;
				campo[2][2] = 0;
				campo[2][3] = 1;
				campo[3][1] = 0;
				campo[3][2] = 1;
				campo[3][3] = 1;
				campo[4][1] = 0;
				campo[4][2] = 1;
				campo[4][3] = 0;
				campo[5][1] = 0;
				campo[5][2] = 1;
				campo[5][3] = 0;
				campo[6][1] = 0;
				campo[6][2] = 0;
				campo[6][3] = 1;
				campo[7][1] = 1;
				campo[7][2] = 1;
				campo[7][3] = 0;
				campo[8][1] = 0;
				campo[8][2] = 1;
				campo[8][3] = 1;
				campo[9][1] = 0;
				campo[9][2] = 1;
				campo[9][3] = 0;

				for(i=0;i<=10;i++)
				{
					for(j=1;j<=3;j++)
					{
						passo[i][j] = ' ';
					}
				}

				for(i=0;i<=9;i++)
				{
					printf("\t\tFase 2!");
					printf("\n\n Voce precisa dar 10 passos para atravessar cada um dos campos minados!");
					printf("\n\n Escolha onde pisar apertando 1, 2 ou 3!\n");
					printf("\n \t  1   2   3   4   5   6   7   8   9   10\n");
					printf("\t=========================================\n");
					printf("1\t| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", passo[0][1], passo[1][1], passo[2][1], passo[3][1], passo[4][1], passo[5][1], passo[6][1], passo[7][1], passo[8][1], passo[9][1]);
					printf("\t=========================================\n");
					printf("2\t| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", passo[0][2], passo[1][2], passo[2][2], passo[3][2], passo[4][2], passo[5][2], passo[6][2], passo[7][2], passo[8][2], passo[9][2]);
					printf("\t=========================================\n");
					printf("3\t| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", passo[0][3], passo[1][3], passo[2][3], passo[3][3], passo[4][3], passo[5][3], passo[6][3], passo[7][3], passo[8][3], passo[9][3]);
					printf("\t=========================================\n");
					printf("\nDigite qual area deseja pisar: ");
					scanf("%i",&j);

					if(campo[i][j]==1)
					{
						system("cls");
						passo[i][j] = 'X';
						printf("\t\tFase 2!");
						printf("\n\n Voce precisa dar 10 passos para atravessar cada um dos campos minados!");
						printf("\n\n Escolha onde pisar apertando 1, 2 ou 3!\n");
						printf("\n \t  1   2   3   4   5   6   7   8   9   10\n");
						printf("\t=========================================\n");
						printf("1\t| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", passo[0][1], passo[1][1], passo[2][1], passo[3][1], passo[4][1], passo[5][1], passo[6][1], passo[7][1], passo[8][1], passo[9][1]);
						printf("\t=========================================\n");
						printf("2\t| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", passo[0][2], passo[1][2], passo[2][2], passo[3][2], passo[4][2], passo[5][2], passo[6][2], passo[7][2], passo[8][2], passo[9][2]);
						printf("\t=========================================\n");
						printf("3\t| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", passo[0][3], passo[1][3], passo[2][3], passo[3][3], passo[4][3], passo[5][3], passo[6][3], passo[7][3], passo[8][3], passo[9][3]);
						printf("\t=========================================\n");
						printf("\n\tPisou na mina! Faleceu!\n");
						printf("\nDigite 1 para jogar mais uma vez a segunda fase ou 0 para encerrar: ");
						scanf("%i",&esc);
						system("cls");
						break;
					}
					else if(campo[i][j]==0)
					{
						passo[i][j] = 'O';
						fase2++;
						system("cls");
					}
						else if(j>3||j<1)
					{
						printf("\n\nVoce pisou fora do campo! (apenas os numeros 1, 2 e 3 sao validos)");
						printf("\n\nDigite 1 para jogar mais uma vez a primeira fase ou 0 para encerrar: ");
						scanf("%i",&esc);
						system("cls");
						break;
					}
				}			
			}
			while(esc==1);

			if(fase2>9)
			{	
				do
				{
					campo[0][1] = 0;
					campo[0][2] = 1;
					campo[0][3] = 1;
					campo[1][1] = 1;
					campo[1][2] = 0;
					campo[1][3] = 1;
					campo[2][1] = 1;
					campo[2][2] = 1;
					campo[2][3] = 0;
					campo[3][1] = 1;
					campo[3][2] = 1;
					campo[3][3] = 0;
					campo[4][1] = 1;
					campo[4][2] = 0;
					campo[4][3] = 1;
					campo[5][1] = 0;
					campo[5][2] = 1;
					campo[5][3] = 1;
					campo[6][1] = 1;
					campo[6][2] = 0;
					campo[6][3] = 1;
					campo[7][1] = 1;
					campo[7][2] = 1;
					campo[7][3] = 0;
					campo[8][1] = 1;
					campo[8][2] = 1;
					campo[8][3] = 0;
					campo[9][1] = 1;
					campo[9][2] = 1;
					campo[9][3] = 0;

					for(i=0;i<=10;i++)
					{
						for(j=1;j<=3;j++)
						{
							passo[i][j] = ' ';
						}
					}
				
					for(i=0;i<=9;i++)
					{
						printf("\t\tFase 3!");
						printf("\n\n Voce precisa dar 10 passos para atravessar cada um dos campos minados!");
						printf("\n\n Escolha onde pisar apertando 1, 2 ou 3!\n");
						printf("\n \t  1   2   3   4   5   6   7   8   9   10\n");
						printf("\t=========================================\n");
						printf("1\t| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", passo[0][1], passo[1][1], passo[2][1], passo[3][1], passo[4][1], passo[5][1], passo[6][1], passo[7][1], passo[8][1], passo[9][1]);
						printf("\t=========================================\n");
						printf("2\t| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", passo[0][2], passo[1][2], passo[2][2], passo[3][2], passo[4][2], passo[5][2], passo[6][2], passo[7][2], passo[8][2], passo[9][2]);
						printf("\t=========================================\n");
						printf("3\t| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", passo[0][3], passo[1][3], passo[2][3], passo[3][3], passo[4][3], passo[5][3], passo[6][3], passo[7][3], passo[8][3], passo[9][3]);
						printf("\t=========================================\n");
						printf("\nDigite qual area deseja pisar: ");
						scanf("%i",&j);

						if(campo[i][j]==1)
						{
							system("cls");
							passo[i][j] = 'X';
							printf("\t\tFase 3!");
							printf("\n\n Voce precisa dar 10 passos para atravessar cada um dos campos minados!");
							printf("\n\n Escolha onde pisar apertando 1, 2 ou 3!\n");
							printf("\n \t  1   2   3   4   5   6   7   8   9   10\n");
							printf("\t=========================================\n");
							printf("1\t| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", passo[0][1], passo[1][1], passo[2][1], passo[3][1], passo[4][1], passo[5][1], passo[6][1], passo[7][1], passo[8][1], passo[9][1]);
							printf("\t=========================================\n");
							printf("2\t| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", passo[0][2], passo[1][2], passo[2][2], passo[3][2], passo[4][2], passo[5][2], passo[6][2], passo[7][2], passo[8][2], passo[9][2]);
							printf("\t=========================================\n");
							printf("3\t| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", passo[0][3], passo[1][3], passo[2][3], passo[3][3], passo[4][3], passo[5][3], passo[6][3], passo[7][3], passo[8][3], passo[9][3]);
							printf("\t=========================================\n");
							printf("\n\tPisou na mina! Faleceu!\n");
							printf("\nDigite 1 para jogar mais uma vez a ultima mase ou 0 para encerrar: ");
							scanf("%i",&esc);
							system("cls");
							break;
						}
					else if(campo[i][j]==0)
					{
						passo[i][j] = 'O';
						fase3++;				
						system("cls");
					}
					else if(j>3||j<1)
					{
						printf("\n\nVoce pisou fora do campo! (apenas os numeros 1, 2 e 3 sao validos)");
						printf("\n\nDigite 1 para jogar mais uma vez a primeira fase ou 0 para encerrar: ");
						scanf("%i",&esc);
						system("cls");
						break;
					}
				}
			}
			while(esc==1);
		
				if(fase3>9)
				{
					printf("\n 2 palavras pra voce soldado!\n\tPara bens!");
					printf("\n\n\tDigite 1 para jogar novamente e 0 para encerrar: ");
					scanf("%i",&esc);
					system("cls");
				}
			}
		}
	}
	while(esc==1);
	}
	else if(esc==0)
	{
		system("cls");
		printf("\n\n\tFoi preso no quartel!\n\n");
	}
}
