#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
        
    int m[10][10], mat[9] = {2, 0, 2, 1, 1, 0, 0, 3, 4}, alt[3], i, j;
    int total = 0, win = 0, lose = 0, con1, con2, con3, op1, op2, op3;
    char entrada;
    
    srand(time(0));
    
    for(;;){
        printf("Deseja Jogar: Ss/Nn: ");
        scanf(" %c", &entrada);
        if(entrada == 'N' || entrada == 'n'){
            break;
        }else{
            for(i = 0; i < 3; i++){
                alt[i] = (rand() % (9 - 0 + 1)) + 0;
                switch(alt[i]){
                    case 2:
                    case 0:
                    case 1:
                    case 3:
                    case 4:
                    break;
                    default: i--;
                }
            }
            
            con1 = 0;
            con2 = 0;
            con3 = 0;
            for(i = 0; i < 10; i ++){
                for(j = 0; j < 10; j ++){
                    m[i][j] = (rand() % (9 - 0 + 1)) + 0;
                    if(alt[0] == m[i][j]){
                        con1 += 1;
                    }
                    if(alt[1] == m[i][j]){
                        con2 += 1;
                    }
                    if(alt[2] == m[i][j]){
                        con3 += 1;
                    }
                }
            }
    
            printf("\n\nMatriz gerada: ");
            for(i = 0; i < 10; i ++){
                printf("\n");
                printf("\n");
                for(j = 0; j < 10; j ++){
                    printf("  %d  ", m[i][j]);
                }
            }
    
            printf("\n\n");
            printf("\nMatrícula: ");
            for(i = 0; i < 9; i++){
                printf(" %d ", mat[i]);
            }
    
    
            printf("\n\nVetor aleatório da matrícula: ");
            for(i = 0; i < 3; i++){
                printf(" %d ", alt[i]);
            }
            
            printf("\n\nInforme quantas vezes o número %d aparece na matriz: ", alt[0]);
            scanf("%d", &op1);
            printf("Informe quantas vezes o número %d aparece na matriz: ", alt[1]);
            scanf("%d", &op2);
            printf("Informe quantas vezes o número %d aparece na matriz: ", alt[2]);
            scanf("%d", &op3);
    
            if(op1 == con1 && op2 == con2 && op3 == con3){
                printf("\n\t\t---->  ACERTOU TODOS <----");
                win += 1;
                total += 1;
            }else{
                printf("\n\t\t----> NÃO ACERTOU TODOS <----");
                lose += 1;
                total += 1;
            }
        }
        printf("\n\n\n");
    }
    
    if(total != 0){
        printf("\n\n\t\tRESULTADO DO JOGO:");
        printf("\n--> VOCÊ JOGOU %d PARTIDA(S). GANHOU %d E PERDEU %d.", total, win, lose);
        printf("\n------------ESPERO QUE TENHA SE DIVERTIDO!-------");
    }else{
        printf("\nA CORAGEM É ALGO ESCASSO NOS DIAS DE HOJE. DESISTIU SEM TENTAR!!!");
    }
}