#include <stdio.h>

int main() {
    
    int torre = 0, rainha = 0, bispo;
    int andarcasas, jogador1, jogador2;
    do{
        printf("\n");
        printf("Escolha qual peça mexera.\n");
        printf("1-Rainha\n");
        printf("2-Torre\n");
        printf("3-Bispo\n");
        printf("0-Sair\n");
        printf("\n");
        printf("Digite sua Escolha: ");
        scanf("%d",&jogador1);
        
    switch (jogador1){
            case 1:
                printf("Digite quantas casas andar: ");
                scanf("%d",&andarcasas);
                printf("\n");
                if(andarcasas<=0 ||andarcasas>7){
                    printf("falha no Movimento\n");
                }else{
                    while (rainha <andarcasas){
                        printf("Cima\n");
                        rainha++;
                    }
                }
                rainha = 0;
                break;
            case 2:
                printf("\n Quer movimentar a Torre para qual direcao?\n");
                printf("1-Esquerda\n");
                printf("2-Direita\n");
                printf("Digite sua Escolha: ");
                scanf("%d",&jogador2);
                switch (jogador2){
                    case 1:
                        printf("Digite quantas casas andar para Esquerda: ");
                        scanf("%d",&andarcasas);   
                        printf("\n");
                        if(andarcasas<=0 ||andarcasas>7){
                            printf("falha no Movimento.\n");
                            break;
                        }
                        do{
                            printf("Esquerda\n");
                            torre++;
                        }while(torre<andarcasas);
                        break;
                    case 2:
                        printf("Digite quantas casas andar para direita: ");
                        scanf("%d",&andarcasas);   
                        printf("\n");
                        if(andarcasas<=0 ||andarcasas>7){
                            printf("falha no Movimento\n");
                            break;
                        }
                        do{
                            printf("Direita\n");
                            torre++;
                        }while(torre<andarcasas);
                        break;
                    default:
                        printf("Opcao Invalida\n");
                        break;
                }
                torre = 0;
                break;
            case 3:
                          printf("Digite quantas casas andar: ");
                scanf("%d",&andarcasas);
                printf("\n");
                if(andarcasas<=0 ||andarcasas>7){
                    printf("falha no Movimento!!");
                    break;
                }
                for (bispo = 0; bispo < andarcasas; bispo++){
                    printf("Cima Esquerda\n");
                }
                break;
            default:
                break;
        }
    }while(jogador1!=0);

    return 0;
}
