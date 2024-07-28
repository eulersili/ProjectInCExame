/*
Crie um programa em c, desenhe com astéristico (*) a
letra S e B numa matriz 5x5.
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]){ // 1
	int i, j,opcao,vet[5][5],t, f, ma[5][5],soma, soma2, soma3, soma4, soma5, soma6, soma7, somo=0,somafinal=0, r, s;
	char mat[5][5];
	float num, decimetro, centimetro, milimetro;

	do{ // 2
		printf("\nMenu:\n1-Ver a letra S\n2-Ver a letra U\n3-Ver a letra S e U\n4-Ver a soma das margens\n5-Ver o rectangulo\n6-Conversao de metros para decimetros, centimetros e milimetros\n7-Sair\n");
		printf("\nDigite a sua opcao:\n");
		scanf("%d", &opcao);
		switch(opcao){ // 3
			case 1:
			    system("cls");
			    sleep(1);

                // Desenhando a letra "S"
				printf("Desenhando a letra S...\n\n");
                for(i=0; i<5; i++){ // 4
                    for(j=0; j<5; j++){ // 5
                    vet[i][j] = '*';

                    if(i== 0 && j == 0){
                        printf(" ");
                    }
                    if(i== 0 && j== 1){
                        printf("\t");
                        sleep(1);
                    }
                    if(i== 0 && j== 2){
                        printf("  %c", vet[i][j]);

                    }
                    if(i== 0 && j== 3){
                        printf("    %c", vet[i][j]);
                    }
                    if(i== 0 && j== 4){
                        printf("\n\n");
                    }
                    if(i== 1 && j== 0){
                        printf(" ");
                        sleep(1);
                    }
                    if(i== 1 && j== 1){
                        printf("\t%c", vet[i][j]);
                    }
                    if(i== 1 && j == 2){
                        printf(" ");
                    }
                    if(i== 1 && j== 3){
                        printf(" ");
                    }
                    if(i==1 && j== 4){
                        printf("\n\t");
                    }
                    if(i==2 && j==0){
                        printf(" ");
                    }
                    if(i== 2 && j== 1){
                        printf(" ");
                        sleep(1);
                    }
                    if(i== 2 && j== 2){
                        printf("%c", vet[i][j]);
                    }
                    if(i== 2 && j== 3){
                        printf("   %c", vet[i][j]);
                    }
                    if(i==2 && j== 4){
                        printf("\n");
                    }
                    if(i== 3 && j== 0){
                        printf("  ");
                    }
                    if(i== 3 && j== 1){
                        printf(" ");
                    }
                    if(i== 3 && j==2){
                        printf(" ");
                        sleep(1);
                    }
                    if(i== 3 && j== 3){
                        printf("\n\t       %c", vet[i][j]);
                    }
                    if(i== 3 && j== 4){
                        printf(" ");
                    }
                    if(i==4 && j== 0){
                        printf("  ");
                        sleep(1);
                    }
                    if(i== 4 && j== 1){
                        printf("\n\t%c", vet[i][j]);
                    }
                    if(i== 4 && j== 2){
                        printf("   %c", vet[i][j]);
                    }
                    if(i==4 && j== 3){
                        printf(" ");
                    }
                    if(i== 4 && j== 4){
                        printf(" ");
                    }
                }
            }
            break;

                // Desenhando a letra "U"
			case 2:
			    system("cls");
                sleep(1);
				printf("Desenhando a letra U....\n\n");

                for(r= 0; r<5; r++){
                    for(s=0 ;s<5; s++){
                        mat[r][s]= '*';
                        if(r== 0 && s== 0){
                            printf("%c   ", mat[r][s]);
                        }
                        if(r == 0 && s < 4){
                            printf(" ");
                        }
                        if(r == 0 && s== 4){
                            printf("%c", mat[r][s]);
                            sleep(1);
                        }
                        if(r == 1 && s == 0){
                            printf("\n%c   ", mat[r][s]);
                        }
                        if(r == 1 && s < 4){
                            printf(" ");
                        }
                        if(r == 1 && s == 4){
                            printf("%c", mat[r][s]);
                            sleep(1);
                        }
                        if(r == 2 && s==0){
                            printf("\n%c   ", mat[r][s]);
                        }
                        if(r == 2 && s < 4){
                            printf(" ");
                        }
                        if(r== 2 && s == 4){
                            printf("%c", mat[r][s]);
                            sleep(1);
                        }
                        if(r== 3 && s== 0){
                            printf("\n%c   ", mat[r][s]);
                        }
                        if(r == 3 && s < 4){
                            printf(" ");
                        }
                        if(r == 3 && s == 4){
                            printf("%c",mat[r][s]);
                            sleep(1);
                        }
                        if(r == 4 && s == 1){
                            printf("\n  %c", mat[r][s]);
                        }
                        if(r== 4 && s==2){
                            printf(" %c",mat[r][s]);
                        }
                        if(r== 4 && s== 3){
                            printf(" %c",mat[r][s]);
                        }
                    }
                }
                break;
            default:
                printf("");
                break;
        } // 3
	} // 2
    return 0;
} // 1
