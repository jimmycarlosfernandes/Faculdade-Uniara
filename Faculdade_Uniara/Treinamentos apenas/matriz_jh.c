#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#define LIN 6
#define COL 6

    void popula_matriz(double x[LIN][COL]){
        int i,j;

        for(i = 0; i < LIN; i++){
            for(j = 0; j < COL; j++)
                x[i][j] = (rand()%90) * 1.1;
        }
    }

    void printa_matriz(double x [LIN][COL]){
        int i, j;
        printf("Matriz Principal: \n\n");

        for(i = 0; i < LIN; i++){
            for(j = 0; j < COL; j++){
            printf("%6.2lf ", x[i][j]);  
            }
        printf("\n");
        }
    }

    void maior(double x[LIN][COL]){
        int i, j;
        double maior = x[0][0];
        printf("\n\n");
        printf("Maior numero: ");

        for(i = 0; i < LIN; i++){
            for(j = 0; j < COL; j++){
                if (x[i][j] > maior)
                    maior = x[i][j];
            }
        }
        printf("%6.2lf ", maior);
    }

    void menor (double x[LIN][COL]){
        int i, j;
        double menor = x[0][0];

        printf("\n\n");
        printf("Menor numero : ");

        for(i = 0; i < LIN; i++){
            for(j = 0; j < COL; j++)
                if(x[i][j] < menor)
                    menor = x[i][j];
        }

        printf("%.2lf", menor);
    }

    void diag_1(double x[LIN][COL]){
        int i,j;
        printf("\n\n");
        printf("Diagonal Principal: ");

        for(i = 0; i < LIN; i++){
            for(j = 0; j < COL; j++)
                if(i == j)
                    printf("%6.2lf  ", x[i][j]);
        }
    }

    void diag_2(double x[LIN][COL]){
        int i,j;
        printf("\n\n");
        printf("Diagonal Secundaria: ");

        for(i = 0; i < LIN; i++){
            for(j = 0; j < COL; j++) 
                if(i + j == COL - 1)
                    printf("%6.2lf  ", x[i][j]);
        }
    }

    double soma(double x[LIN][COL]){
        int i, j;
        double soma = 0;
        printf("\n\n");

        for(i = 0; i < LIN; i++){
            for(j = 0; j < COL; j++)
            soma += x[i][j];
        }
        return soma;
    }

    void pares(double x[LIN][COL]){
        int i,j;
        double pares;
        printf("\n\n");
        printf("Numeros Pares da Matriz: ");

        for(i = 0; i < LIN; i++)
            for(j = 0; j < COL; j++){
                if(fmod (x[i][j], 2) == 0.0){
                    printf("%6.2lf  ", x[i][j]);
            }
        }
    }

    void impares(double x[LIN][COL]){
        int i,j;
        printf("\n\n");
        printf("Numeros Impares da Matriz: ");

        for(i = 0; i < LIN; i++)
            for(j = 0; j < COL; j++){
                if(fmod (x[i][j], 2) != 0.0)
                    printf("%6.2lf ", x[i][j]);
            }
    }

    int main (){

        double m[LIN][COL];
        srand(time(0));
        popula_matriz(m);
        printa_matriz(m);
        maior(m);
        menor(m);
        diag_1(m);
        diag_2(m);
        printf("Valor da soma: %6.2lf" ,soma(m));
        pares(m);
        impares(m);

       

        //teste de divisao
        /*
        double x = 37.40, y = 2.0;
        fmod(x,y) == 0.0;
        double resto = fmod(x,y);

        int divis = x / y;
        
        double divis2 = (x * 100) / 2;

        printf("\n\n[%lf] [%d] [%lf]", resto, divis, divis2);
        
        */

        return 0;
    }