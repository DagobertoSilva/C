#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int numeroDeBits;
    int *vetorBits;
    int decimal = 0;

    printf("Digite quantos bits o numero tem\n");
    scanf("%d", &numeroDeBits); // informando quantos bits tem o número em binário

    vetorBits =(int *) malloc(sizeof(int) * numeroDeBits); // alocando memória para o tamanho do número

    printf("Digite bit a bit(0 ou 1)  da esquerda para direita\n");
    for(int i = 0; i < numeroDeBits; i++){
        printf("Digite o bit:");
        scanf("%d", &vetorBits[i]);
        if((vetorBits[i] != 1) && (vetorBits[i] != 0)){ // verificação, se for digitado valores diferentes de 0 e 1, o programa finaliza
            printf("ERROR digite apenas 0 ou 1 ");
            return 0;
        }

    }

    int novoi = (numeroDeBits - 1);
    int j = 0;
    for(int i = novoi; i >= 0; i--){
        decimal += (pow(2,j) * vetorBits[i]);    // convertendo o numero binário em decimal -> decimal = decimal + 2^j * valorDoBit(0 ou 1)
        j++;
    }


    printf("O numero em binario: ");
     for(int i = 0; i < numeroDeBits; i++){ //percorrendo o vetor com os bits
        printf("%d", vetorBits[i]);
    }
    printf("\n");
    printf("Seu equivalente em decimal: %d", decimal); //mostrando o valor em decimal do binário digitado

    free(vetorBits); // liberando a memória usada para armazenar os bits

}
