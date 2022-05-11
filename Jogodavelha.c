#include <stdio.h>
#include <stdlib.h>
int main(){
  int a,b,l,c,x,op;
  char jogo[3][3];
  char jog1[20],jog2[20];

  do{
    for(a=0;a<3;a++){
      for(b=0;b<3;b++){
        jogo[a][b]=' ';
      }
    }
    printf("JOGO DA VELHA\n\n");
    printf("Nome do Jogador 1: ");
    scanf("%s",&jog1);
    printf("Nome do Jogador 2: ");
    scanf("%s",&jog2);
    fflush(stdin);
    printf("\nDigite primeiro a linha desejada (de 0 a 2) e depois digite a coluna desejada (de 0 a 2)");
    printf("\n\n");
    printf("   0   1   2\n");
    for(a=0;a<3;a++){
      printf("%d  ",a);
      for(b=0;b<3;b++){
        if(b<2){
          printf("%c | ",jogo[a][b]);
        }
        else{
          printf("%c ",jogo[a][b]);
        }
      }
      if(a<2){
        printf("\n  -----------");
      }
      printf("\n");
    }
    
    for(x=0;x<9;x++){
    	if(x%2==0){
      		printf("\n%s, escolha a linha: ",jog1);
		    scanf("%d",&l);
		    printf("%s, escolha a coluna: ",jog1);
		    scanf("%d",&c);
		    fflush(stdin);
		    if(l==0&&c==0||l==0&&c==1||l==0&&c==2||l==1&&c==0||l==1&&c==1||l==1&&c==2||l==2&&c==0||l==2&&c==1||l==2&&c==2){
				if(jogo[l][c]=='X'||jogo[l][c]=='O'){
			    	printf("\nPosicao ja preenchida\n\n");
			    	x--;
				}
				else{
					jogo[l][c]='X';
					system("cls");
				}
			}
			else{
				printf("\nPosicao invalida\n\n");
				x--;
			}
  		}
  		else{
	  		printf("\n%s, escolha a linha: ",jog2);
	      	scanf("%d",&l);
	      	printf("%s, escolha a coluna: ",jog2);
	      	scanf("%d",&c);
	      	fflush(stdin);
	      	if(jogo[l][c]=='X'||jogo[l][c]=='O'){
		    	printf("\nPosicao ja preenchida\n\n");
		    	x--;
			}
			else{
				jogo[l][c]='O';
				system("cls");
			}
	    }	
      printf("   0   1   2\n");
      for(a=0;a<3;a++){
        printf("%d  ",a);
        for(b=0;b<3;b++){
          if(b<2){
            printf("%c | ",jogo[a][b]);
          }
          else{
            printf("%c ",jogo[a][b]);
          }
        }
        if(a<2){
          printf("\n  -----------");
        }
        printf("\n");
      }
      if(jogo[0][0]=='X'&&jogo[0][1]=='X'&&jogo[0][2]=='X'||jogo[1][0]=='X'&&jogo[1][1]=='X'&&jogo[1][2]=='X'||jogo[2][0]=='X'&&jogo[2][1]=='X'&&jogo[2][2]=='X'||jogo[0][0]=='X'&&jogo[1][0]=='X'&&jogo[2][0]=='X'||jogo[0][1]=='X'&&jogo[1][1]=='X'&&jogo[2][1]=='X'||jogo[0][2]=='X'&&jogo[1][2]=='X'&&jogo[2][2]=='X'||jogo[0][0]=='X'&&jogo[1][1]=='X'&&jogo[2][2]=='X'||jogo[0][2]=='X'&&jogo[1][1]=='X'&&jogo[2][0]=='X'){
        printf("\n%s ganhou!",jog1);
        x=9;
      }
      else if(jogo[0][0]=='O'&&jogo[0][1]=='O'&&jogo[0][2]=='O'||jogo[1][0]=='O'&&jogo[1][1]=='O'&&jogo[1][2]=='O'||jogo[2][0]=='O'&&jogo[2][1]=='O'&&jogo[2][2]=='O'||jogo[0][0]=='O'&&jogo[1][0]=='O'&&jogo[2][0]=='O'||jogo[0][1]=='O'&&jogo[1][1]=='O'&&jogo[2][1]=='O'||jogo[0][2]=='O'&&jogo[1][2]=='O'&&jogo[2][2]=='O'||jogo[0][0]=='O'&&jogo[1][1]=='O'&&jogo[2][2]=='O'||jogo[0][2]=='O'&&jogo[1][1]=='O'&&jogo[2][0]=='O'){
        printf("\n%s ganhou!",jog2);
        x=9;
      }
    }
    if(x==10){
    	printf(" OTIMO JOGO!");
	}
	else if(x==9){
		printf("\nVELHA");
	}
    printf("\n\nDeseja jogar novamente? Digite [1] caso Sim e [Qualquer tecla] caso Nao -> ");
    scanf("%d",&op);
    fflush(stdin);
    system("cls");
  }while(op==1);
}
