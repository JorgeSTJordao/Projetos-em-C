#include <stdio.h>
// O jogo não utiliza strings X ou O, mas -1 para você e 1 para o oponente
/* Para indicar a posição que você vai jogar, devemos realizar pelos índices da matriz. 
Ex: ao jogar no primeiro quadrado, será indicado pelas coordenadas (0, 0)*/

int terminar(int num, int mat[3][3]){
    int linha, coluna, totn = 0;
    if(mat[0][0] == num && mat[0][1] == num && mat[0][2] == num)
        return totn = 3;
    else {
        if(mat[1][0] == num && mat[1][1] == num && mat[1][2] == num)
            return totn = 3;
        else {
            if(mat[2][0] == num && mat[2][1] == num && mat[2][2] == num)
                return totn = 3;
            else {
                if(mat[0][0] == num && mat[1][0] == num && mat[2][0] == num)
                    return totn = 3;
                else {
                    if(mat[0][1] == num && mat[1][1] == num && mat[2][1] == num)
                        return totn = 3;
                    else {
                        if(mat[0][2] == num && mat[1][2] == num && mat[2][2] == num)
                            return totn = 3;
                        else {
                            if(mat[0][0] == num && mat[1][1] == num && mat[2][2] == num)
                                return totn = 3;
                            else {
                                if(mat[0][2] == num && mat[1][1] == num && mat[2][0] == num)
                                    return totn = 3;
                            }
                        }
                    }
                }
            }
        }
    }
}
int main(){
    int mat[3][3], linha, coluna, contagem, tot=0, resultado;
    for(linha =0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            mat[linha][coluna] = 0;
            printf("%d ", mat[linha][coluna]);
        }
    printf("\n");
    }

    for(contagem = 1; contagem <= 9; contagem+=0){
        if(contagem % 2 != 0){
            printf("\nSUA VEZ!\n");
            printf("Digite o numero da linha e coluna: ");
            scanf("%d %d", &linha, &coluna);
            system("cls");
            if(mat[linha][coluna] == 0){
                mat[linha][coluna] = -1;
                contagem++;
                resultado = terminar(-1, mat);
                if (resultado == 3){
                    printf("VOCE GANHOU!\n\n");
                    contagem = 10;
                }
                for (linha = 0; linha < 3; linha++){
                    for(coluna = 0; coluna < 3; coluna++){
                        printf("%d ", mat[linha][coluna]);
                    }
                printf("\n");
                }
            } else {
                printf("Posicao invalida. Jogue novamente!\n");
            }
        } else {
            printf("\nVEZ DO OPONENTE!\n");
            printf("Digite o numero da linha e coluna: ");
            scanf("%d %d", &linha, &coluna);
            system("cls");
            if(mat[linha][coluna] == 0){
                mat[linha][coluna] = 1;
                contagem++;
                resultado = terminar(1, mat);
                if (resultado == 3){
                    printf("O OPONENTE GANHOU!\n\n");
                    contagem = 10;
                }
                for (linha = 0; linha < 3; linha++){
                    for(coluna = 0; coluna < 3; coluna++){
                        printf("%d ", mat[linha][coluna]);
                    }
                printf("\n");
                }
            } else{
                printf("Posicao invalida. Jogue novamente!\n");
            }
        }
    }
    return 0;
}