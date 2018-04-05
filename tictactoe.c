#include <stdio.h>
#include <string.h>
#include <stdlib.h>
        
	int jogo(char *A1, char *B1, char *C1, char *A2, char *B2, char  *C2, char *A3, char *B3, char *C3, int *jogador){
		printf( "		   A          B        C			\n");		
		printf( " 			#           #	  \n");	
		printf( " 		  	#           #	  \n");	
		printf( " 1                  %c   #     %c     #   %c  \n", *A1, *B1, *C1);		
		printf( "			#           #	  \n");
		printf( "			#           #	  \n");	
		printf( "              	##############################	 \n");	
		printf( "			#           #	  \n");	
		printf( "			#           #	  \n");
        printf( "                    %c   #     %c     #   %c  \n", *A2, *B2, *C2);	
		printf( " 2			#           #	  \n");	
		printf( "			#           #	  \n");	
		printf( "               ###############################	\n");	
		printf( "			#           #		\n");	
		printf( "			#           #		\n");
        printf( "                    %c   #     %c     #   %c  \n", *A3, *B3, *C3);	
		printf( " 3			#           #		\n");	
		printf( " 			#           #		\n");	

                if((*A1 != ' ' && *A1 == *B1 && *B1 == *C1) || (*A1 != ' ' && *A1 == *A2 && *A2 == *A3) || (*A1 != ' ' && *A1 == *B2 && *B2 == *C3) || (*A3 != ' ' && *A3 == *B2 && *B2 == *C1) || (*B1 != ' ' && *B1 == *B2 && *B2 == *B3) || (*A2 != ' ' && *A2 == *B2 && *B2 == *C2) || (*A3 != ' ' && *A3 == *B3 && *B3 == *C3) || (*C1 != ' ' && *C1 == *C2 && *C2 == *C3)){
                printf( " FIM DE JOGO!!!, JOGADOR %d GANHOU!!! \n", *jogador );
                exit(0);
                }else{
		return 0;
	        }
        }

        char escolha_jogador(int *jogador){
                if(*jogador==1){
                   *jogador=2;
                   return 'X';
                }else{ 
                   *jogador=1;
                   return 'O';
                }
          }    

         /* void teste_escolha(char posicao, char *local){
                if(strcmp(escolha, posicao) == 0){
		   *local = escolha_jogador(&jogador);
                jogo(A1, B1, C1, A2, B2, C2, A3, B3, C3);
		}
        } */ 
	
              int main(){
		char A1, B1, C1, A2, B2, C2, A3, B3, C3;
                int jogador;
		A1 = ' ';
		B1 = ' ';
		C1 = ' ';
		A2 = ' ';
		B2 = ' ';
		C2 = ' ';
		A3 = ' ';
		B3 = ' ';
		C3 = ' ';
                jogador = 1;
		char escolha[3];
		printf( "Bem vindo, deseja jogar contra a máquina ou contra outro jogador?\n" );
		printf( "Esta será a base, decore as casas de A a B e 1 a 3\n"	); 
		printf( "%c", jogo(&A1, &B1, &C1, &A2, &B2, &C2, &A3, &B3, &C3, &jogador));		
		printf( " Ótimo, vamos começar! Começando pelo jogador 1, ele também será o X. \n" );
		printf( " Você deve dizer a posição que deseja jogar usando os números e as letras, exemplo: B1, C2, A3. \n" );
                printf( " E Lembre-se que pode digitar > S < para sair do jogo a qualquer momento\n " );
                while(escolha!="S"){
		printf( "Jogador%d, digite sua jogada!\n", jogador );
                scanf("%s", escolha);
                
                
if(strcmp(escolha, "A1") == 0){
                printf( "Escolheu A1.\n" );
		   A1 = escolha_jogador(&jogador);
                jogo(&A1, &B1, &C1, &A2, &B2, &C2, &A3, &B3, &C3, &jogador);
		}
		else if(strcmp(escolha, "B1") == 0){
		   B1 = escolha_jogador(&jogador);
                jogo(&A1, &B1, &C1, &A2, &B2, &C2, &A3, &B3, &C3, &jogador);
		}
		else if(strcmp(escolha, "C1") == 0){
		   C1 = escolha_jogador(&jogador);
                jogo(&A1, &B1, &C1, &A2, &B2, &C2, &A3, &B3, &C3, &jogador);
		}
		else if(strcmp(escolha, "A2") == 0){
		   A2 = escolha_jogador(&jogador);
                jogo(&A1, &B1, &C1, &A2, &B2, &C2, &A3, &B3, &C3, &jogador);
		}
		else if(strcmp(escolha, "B2") == 0){
		   B2 = escolha_jogador(&jogador);
                jogo(&A1, &B1, &C1, &A2, &B2, &C2, &A3, &B3, &C3, &jogador);
		}
		else if(strcmp(escolha, "C2") == 0){
		   C2 = escolha_jogador(&jogador);
                jogo(&A1, &B1, &C1, &A2, &B2, &C2, &A3, &B3, &C3, &jogador);
		}
		else if(strcmp(escolha, "A3") == 0){
		   A3 = escolha_jogador(&jogador);
                jogo(&A1, &B1, &C1, &A2, &B2, &C2, &A3, &B3, &C3, &jogador);
		}
		else if(strcmp(escolha, "B3") == 0){
		   B3 = escolha_jogador(&jogador);
                jogo(&A1, &B1, &C1, &A2, &B2, &C2, &A3, &B3, &C3, &jogador);
		}
		else if(strcmp(escolha, "C3") == 0){
		   C3 = escolha_jogador(&jogador);
                jogo(&A1, &B1, &C1, &A2, &B2, &C2, &A3, &B3, &C3, &jogador);
		}else if(strcmp(escolha, "S") == 0){
                   exit(0);
                }else{
		   printf( "Esta não é uma posição válida. %s\n", escolha);
		}
	

              
	        }	
        return 0;
}
