#include <stdio.h>
#include <string.h>
#include <time.h>

int main(){
    
    char m[10][10], v[5], letra1, letra2, letra3;
    int i, j, q1, q2, q3;
    
    srand(time(0));
    system("clear");
    
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            m[i][j] = (rand() % ('z' - 'a' + 1)) + 'a';
        }
    }
    
    
    for(i = 0; i < 3; i++){
        printf("Informe a %da letra minúscula: ", i+1);
        scanf("%s", &v[i]);
        if(v[i] < 97  || v[i] > 122){
            printf("Caractere inválido!\n\n");
            i--;
        }
    }
    
    letra1 = v[0];
    letra2 = v[1];
    letra3 = v[2];
    
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            if(letra1 == m[i][j]){
                q1 += 1;
            }
            if(letra2 == m[i][j]){
                q2 += 1;
            }
            if(letra3 == m[i][j]){
                q3 += 1;
            }
        }
    }
    
    printf("\nMatriz gerada: ");
    
    for(i = 0; i < 10; i++){
        printf("\n");
        for(j = 0; j < 10; j++){
            printf("%c ", m[i][j]);
        }
    }
    
    printf("\n\nQuantidade de vezes que %c aparece na matriz: %d", v[0], q1);
    printf("\nQuantidade de vezes que %c aparece na matriz: %d", v[1], q2);
    printf("\nQuantidade de vezes que %c aparece na matriz: %d", v[2], q3);
}
