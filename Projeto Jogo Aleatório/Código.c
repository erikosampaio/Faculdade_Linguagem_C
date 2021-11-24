#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    
    int a, comeco, aleatorio_jogador, aleatorio_cpu, min = 1, max = 100;
    int placar_computador = 0, placar_jogador = 0, empate = 0;
    
    srand(time(0));
    
    printf("-------------------------------------------------------------------");
    printf("\n-*-*-*-*-*-*-*-*-*-*-* Roleta aleatória -*-*-*-*-*-*-*-*-*-*-*-*-*-");
    printf("\n-------------------------------------------------------------------");
    
    printf("\n\nVocê jogará contra o computador. Consegue superá-lo? BOA SORTE!!!");
    
    
    printf("Vamos lá!");
    printf("\nDigite: ");
    printf("\n\t1 ---> Sortear\n\t2 ---> Desistir\n\tOpção ---> ");
    scanf("%d", &a);
    if(a != 1){
        printf("\nVocê abandonou o jogo no início!!!");
        return 0;
    }

    do{
        aleatorio_jogador = (rand() % (max - min + 1)) + min;
        printf("\n---> Seu número sorteado foi: %d", aleatorio_jogador);
        aleatorio_cpu = (rand() % (max - min + 1)) + min;
        printf("\n---> Computador sorteou o número: %d", aleatorio_cpu);
        if(aleatorio_cpu == aleatorio_jogador){
            printf("\n---> Você e a máquina sortearam números iguais. Ningúem pontua.");
            empate++;
        }else{
            if(aleatorio_jogador > aleatorio_cpu){
                printf("\n---> Você ganhou a rodada!");
                placar_jogador++;
            }else{
                printf("\n---> Computador ganhou a rodada!");
                placar_computador++;
            }
        }
        printf("\n\n\t1 ---> Sortear\n\t2 ---> Finalizar\n\tOpção ---> ");
        scanf("%d", &a);
        while(a != 1 && a != 2){
            printf("\nDigite uma opção válida:");
            printf("\n\t1 ---> Sortear\n\t2 ---> Finalizar\n\tOpção ---> ");
            scanf("%d", &a);
        }
    }while(a == 1);
    
    printf("\n\nTotal de rodadas: %d", placar_computador + placar_jogador + empate);
    printf("\nRodadas ganhas pelo Computador: %d", placar_computador);
    printf("\nRodadas ganhas por você: %d", placar_jogador);
    if(empate > 0){
        printf("\nRodadas com empate: %d", empate);
    }
    if(placar_jogador == placar_computador){
        printf("\n\nVocês incrivelmente empataram.");
        printf("\n\nUm desempate é inevitável. Mostre quem tem mais sorte!!!");
    }else{
        ((placar_computador > placar_jogador) ?
            printf("\n\nA máquina dessa vez te superou.\nDesejamos mais sorte na próxima!!!") :
                printf("\n\nPARABÉNS. Você superou a máquina!!!"));
    }
}