#include <stdio.h>
#include <string.h>
#include <stdlib.h>
        
	int jogo(char A1, char B1, char C1, char A2, char B2, char  C2, char A3, char B3, char C3){
		printf( "		   A          B        C			\n");		
		printf( " 			#           #	  \n");	
		printf( " 		  	#           #	  \n");	
		printf( " 1                  %c   #     %c     #   %c  \n", A1, B1, C1);		
		printf( "			#           #	  \n");
		printf( "			#           #	  \n");	
		printf( "              	##############################	 \n");	
		printf( "			#           #	  \n");	
		printf( "			#           #	  \n");
        printf( "                    %c   #     %c     #   %c  \n", A2, B2, C2);	
		printf( " 2			#           #	  \n");	
		printf( "			#           #	  \n");	
		printf( "               ###############################	\n");	
		printf( "			#           #		\n");	
		printf( "			#           #		\n");
        printf( "                    %c   #     %c     #   %c  \n", A3, B3, C3);	
		printf( " 3			#           #		\n");	
		printf( " 			#           #		\n");	
		return 0;
	}

     int preencherjogador1( char escolha[3], char A1, char B1, char C1, char A2, char B2, char C2, char A3, char B3, char C3 ){
                if(strcmp(escolha, "A1") == 0){
                printf( "Escolheu A1.\n" );
		   A1 = 'X';
                jogo(A1, B1, C1, A2, B2, C2, A3, B3, C3);
		}
		else if(strcmp(escolha, "B1") == 0){
		   B1 = 'X';
                jogo(A1, B1, C1, A2, B2, C2, A3, B3, C3);
		}
		else if(strcmp(escolha, "C1") == 0){
		   C1 = 'X';
                jogo(A1, B1, C1, A2, B2, C2, A3, B3, C3);
		}
		else if(strcmp(escolha, "A2") == 0){
		   A2 = 'X';
                jogo(A1, B1, C1, A2, B2, C2, A3, B3, C3);
		}
		else if(strcmp(escolha, "B2") == 0){
		   B2 = 'X';
                jogo(A1, B1, C1, A2, B2, C2, A3, B3, C3);
		}
		else if(strcmp(escolha, "C2") == 0){
		   C2 = 'X';
                jogo(A1, B1, C1, A2, B2, C2, A3, B3, C3);
		}
		else if(strcmp(escolha, "A3") == 0){
		   A3 = 'X';
                jogo(A1, B1, C1, A2, B2, C2, A3, B3, C3);
		}
		else if(strcmp(escolha, "B3") == 0){
		   B3 = 'X';
                jogo(A1, B1, C1, A2, B2, C2, A3, B3, C3);
		}
		else if(strcmp(escolha, "C3") == 0){
		   C3 = 'X';
                jogo(A1, B1, C1, A2, B2, C2, A3, B3, C3);
		}else if(strcmp(escolha, "S") == 0){
                   exit(0);
                }else{
		   printf( "Esta não é uma posição válida. %s\n", escolha);
		}
		return 0;
	}

                 int preencherjogador2( char escolha[3], char A1, char B1, char C1, char A2, char B2, char C2, char A3, char B3, char C3 ){
                        if(strcmp(escolha, "A1") == 0){
                        printf( "Escolheu A1.\n" );
		           A1 = 'O';
                        jogo(A1, B1, C1, A2, B2, C2, A3, B3, C3);
		        }
		        else if(strcmp(escolha, "B1") == 0){
		           B1 = 'O';
                        jogo(A1, B1, C1, A2, B2, C2, A3, B3, C3);
		        }
		        else if(strcmp(escolha, "C1") == 0){
		           C1 = 'O';
                        jogo(A1, B1, C1, A2, B2, C2, A3, B3, C3);
		        }
		        else if(strcmp(escolha, "A2") == 0){
		           A2 = 'O';
                        jogo(A1, B1, C1, A2, B2, C2, A3, B3, C3);
		        }
		        else if(strcmp(escolha, "B2") == 0){
		           B2 = 'O';
                        jogo(A1, B1, C1, A2, B2, C2, A3, B3, C3);
		        }
		        else if(strcmp(escolha, "C2") == 0){
		           C2 = 'O';
                        jogo(A1, B1, C1, A2, B2, C2, A3, B3, C3);
		        }
		        else if(strcmp(escolha, "A3") == 0){
		           A3 = 'O';
                        jogo(A1, B1, C1, A2, B2, C2, A3, B3, C3);
		        }
		        else if(strcmp(escolha, "B3") == 0){
		           B3 = 'O';
                        jogo(A1, B1, C1, A2, B2, C2, A3, B3, C3);
		        }
		        else if(strcmp(escolha, "C3") == 0){
		           C3 = 'O';
                        jogo(A1, B1, C1, A2, B2, C2, A3, B3, C3);
		        }
                        else if(strcmp(escolha, "S") == 0){
                        exit(0);
                        }else{
		           printf( "Esta não é uma posição válida. %s\n", escolha);
		        }
		return 0;
	}
       
	int main(){
		char jogador1, jogador2, A1, B1, C1, A2, B2, C2, A3, B3, C3;
		A1 = ' ';
		B1 = ' ';
		C1 = ' ';
		A2 = ' ';
		B2 = ' ';
		C2 = ' ';
		A3 = ' ';
		B3 = ' ';
		C3 = ' ';
		char escolha[3];
		printf( "Bem vindo, deseja jogar contra a máquina ou contra outro jogador?\n" );
		printf( "Esta será a base, decore as casas de A a B e 1 a 3\n"	); 
		printf( "%c", jogo(A1, B1, C1, A2, B2, C2, A3, B3, C3));		
		printf( " Ótimo, vamos começar! Começando pelo jogador 1, ele também será o X. \n" );
		printf( " Você deve dizer a posição que deseja jogar usando os números e as letras, exemplo: B1, C2, A3. \n" );
                printf( " E Lembre-se que pode digitar > S < para sair do jogo a qualquer momento\n " );
                while(escolha!="S"){
		printf( "Jogador 1, digite sua jogada!\n" );
                scanf("%s", escolha);
                preencherjogador1(escolha, A1, B1, C1, A2, B2, C2, A3, B3, C3);
                printf( "Jogador 2, digite sua jogada!\n" );
                scanf("%s", escolha);
                preencherjogador2(escolha, A1, B1, C1, A2, B2, C2, A3, B3, C3);
	        }	
        return 0;
}
