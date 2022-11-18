#include<stdio.h>
#include<locale.h>

void maiorvalor();

int opcao,matriz[5][5],i,j;
int maior=0;



void adicionar(){
			for(i=0;i<5;i++){
 		for (j=0;j<5;j++){ 
  			printf("ELEMENTOS [%d] [%d]",i,j);
 			scanf("%d",&matriz[i][j]);
						}
				   }
				   maiorvalor();
				}


void remover(){
	int valor;	
			printf("\n\nDigite o valor que deseja remover: ");
			scanf("%d",&valor);
				for(i=0;i<5;i++){
			    	for(j=0;j<5;j++){
					if(valor==matriz[i][j]){
						matriz[i][j]=0;
											}
									}
								}
				}		


void exibir(){
	
			printf("\nEstes foram respectivamente os Valores escolhidos:\n\n\n\n\n");
			for(i=0;i<5;i++){
			 for(j=0;j<5;j++){
						
			printf("\n MATRIZ [%d] [%d] ,%d", i,j,matriz[i][j]);		
							}
							}
			}


void atmaiorvalor(){
	int valorat;
		printf("Digite um valor maior que o valor que quer alterar:");
			scanf("%d", &valorat);
			for(i=0;i<5;i++){
				for(j=0;j<5;j++){
					if(valorat > matriz[i][j]){
				
						printf("valor na posi��o [%d][%d]:%d\n", i,j,matriz[i][j]);
						printf("Digite o novo valor para a posi��o [%d][%d]: ", i, j);
						scanf("%d", &matriz[i][j]);
						printf("Novo valor na posi��o [%d][%d]:%d\n", i,j,matriz[i][j]);
					}
				}
			}
	
	printf("O novo  Valor Digitado �: %d\n\n",valorat);
}

void maiorvalor(){	
	//int maior;				
		for(i=0;i<5;i++){			 
			for(j=0;j<5;j++){			
				if(matriz[i][j]> maior){				
				maior=matriz[i][j];
				printf("%d", maior);	
	}	
		}	
}
}

void exbir1 (){
	printf("Maior: %d", maior);
}

void menorvalor(){
	int menor;
	
			for(i=0;i<5;i++){
			 for(j=0;j<5;j++){
			if(matriz[i][j]< menor){
				menor=matriz[i][j];
			}
  }
}	
printf("O Menor Valor Digitado �: %d\n\n",menor);

}

void atultimo(){
	printf("valor na posi��o [4][4]:%d\n",matriz[4][4]);
	printf("\nDigite o novo valor para a posi��o [4][4]: ");
		scanf("%d", &matriz[4][4]);
	printf("Novo valor na posi��o [4][4]:%d\n",matriz[4][4]);
}

int main(){
	while(0==0){
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("MENU PRINCIPAL\n\n\n");
	printf("1- Adicionar Valores a Matriz.\n");
	printf("2- Remover um Valor Espec�cfico.\n");
	printf("3- Rotinas.\n");
	printf("4- Exibir os Elementos.\n");
		
		
	
			printf("\nDigite a op��o escolhida: \n");
			scanf("%d",& opcao);
			
			
	switch (opcao){
		
		case 1:{
			adicionar();
			break;
				}
					
		case 2:{
			remover();
			break;
				}
				
		case 3:{
			printf("\n \n MENU ROTINAS ESPECIAIS\n\n\n");
			printf("0- Alterar o Maior Elemento da Matriz.\n");
			printf("1- Mostrar o Menor Elemento da Matriz.\n");
			printf("2- Mostrar o Maior Elemento da Matriz.\n");
			printf("3- Alerar Elementos Ultimo Valor da Matriz\n");
			printf("4- Retornar ao Menu Princial.\n");
			printf("5- Fim.\n");
			printf("\nDigite a op��o escolhida: \n\n");
			scanf("%d",& opcao);
			
			switch (opcao){
		
					
			case 0:{
				atmaiorvalor();
				break;
				}
					
			case 1:{
				menorvalor();
				break;
				}

			case 2:{
				exbir1();
				break;
				}				
			case 3:{
				atultimo();
				break;
				}
				
			case 4:{
				printf("Return \n\n\n");
				break;
					}
					
			default :
				printf("Digite outra Op��o!\n\n\n\n\n\n");
			
				break;
						}	
			break;
				}
				
		case 4:{
			exibir();
			break;
		}
	
		case 5:{
		
			printf("*************************************fim*****************************************************");
			break;
			
		}
		default :
			printf("DIGITE OUTRA OP��O!\n\n\n\n\n");
			break;					
	}
	
	
	}
	
	
	return 0;
}
