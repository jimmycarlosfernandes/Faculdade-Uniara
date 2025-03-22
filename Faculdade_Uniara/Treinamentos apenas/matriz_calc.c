#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

#define LIN 4
#define COL 4


    void escrever_matriz(float x[LIN][COL]){
        
        int i, j;
        
        for (i = 0; i < LIN; i++){
            for (j = 0; j < COL; j++){
                x[i][j] = (rand()%90) * 1.13;
            }
        }
    }


    void imprimir_matriz(float x[LIN][COL]){

        int i, j;
        
        for (i = 0; i < LIN; i++){
            for (j = 0; j < COL; j++){
                printf("%6.2f  ", x[i][j]);
            }
            printf("\n");
        }
    }

    
    void soma_linha (float x[LIN][COL], float y[2][3]){

        int i;
        float soma = 0.0;

        printf("\nValores da Soma da Primeira Linha: ");
        
        for (i= 0; i < LIN; i++){
            soma += x[0][i];
            printf("%6.2f  ", x[0][i]);
        }

        printf("=  %6.2f", soma);
        y[1][0] = soma;
    }


    void ultima_coluna (float x[LIN][COL], float y[2][3]){
            
        int i;
        float soma = 0.0;

        printf("\nValores da Soma da Ultima Coluna: ");
        
        for (i= 0; i < COL; i++){
            soma += x[i][COL -1];
            printf("%6.2f  ", x[i][COL -1]);
        }
        printf("=  %6.2f", soma);
        y[1][1] = soma;
    }


    void soma_tudo (float x [LIN][COL], float y[2][3]){

        int i, j;
        float soma = 0.0;

            printf ("\nValores da Soma Total: ");
        
        for (i=0;i<LIN;i++){
            for (j=0;j<COL;j++){
                soma += x[i][j];
                printf("%6.2f  ", x[i][j]);
            }
        }
        printf("=  %6.2f   ", soma);
        y[2][0] = soma;
    }


    void diagonal (float x[LIN][COL], float y[2][3]){

        int i;
        float valor_diagonal = 0.0;
        printf ("\nValores da Diagonal: ");
        
        for (i = 0; i < LIN; i++){
            valor_diagonal += x[i][i];
            printf("%6.2f  ", x[i][i]);
        }
        printf("=  %6.2f   ", valor_diagonal);
        y[0][0] = valor_diagonal;
    }


    void diagonal_inversa (float x[LIN][ COL], float y[2][3]){
        
        int i,j;
        float valor_diagonal_inversa = 0.0;

        printf ("\nValores da Diagonal Inversa: ");
    
        for (i = 0; i < LIN; i++){
            
            printf("%6.2f  ", x[i][COL -i -1]);
            valor_diagonal_inversa += x[i][COL -i -1];
        }
        printf("=  %6.2f   ", valor_diagonal_inversa);
        y[0][1] = valor_diagonal_inversa;
    }
    
        void printa_matriz_2 (float y[2][3]){
            
            int i,j;
            printf("\n\nValores Guardados em outra Matriz:  ");

            for(i = 0; i < 3; i++){
                for(j = 0; j < 2; j++){
                    printf("%6.2f  ", y[i][j]);  
                }
            }
        }

    int main(){

        srand(time(NULL));
        float m[LIN][COL];
        float guarda_valores[2][3] = {
            {0,0,0},
            {0,0,NAN}
        };

        escrever_matriz(m);
        imprimir_matriz(m);
        soma_linha(m, guarda_valores);
        ultima_coluna(m, guarda_valores);
        soma_tudo(m, guarda_valores);
        diagonal(m, guarda_valores);
        diagonal_inversa(m, guarda_valores);
        printa_matriz_2(guarda_valores);
        return 0;
    }










