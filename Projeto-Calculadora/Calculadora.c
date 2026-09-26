#include <stdio.h>
#include <locale.h>

int Soma(){
    float Numero1;
    float Numero2;
        printf("DIGITE O PRIMEIRO NUMERO: ");
        scanf("%f", &Numero1);
        printf("DIGITE O SEGUNDO NUMERO: ");
        scanf("%f", &Numero2);
        return Numero1 + Numero2;
        
}

int Subtracao(){
    float Numero1;
    float Numero2;
        printf("DIGITE O PRIMEIRO NUMERO: ");
        scanf("%f", &Numero1);
        printf("DIGITE O SEGUNDO NUMERO: ");
        scanf("%f", &Numero2);
        return Numero1 - Numero2;
        
}

int Multiplicacao(){
    float Numero1;
    float Numero2;
        printf("DIGITE O PRIMEIRO NUMERO: ");
        scanf("%f", &Numero1);
        printf("DIGITE O SEGUNDO NUMERO: ");
        scanf("%f", &Numero2);
        return Numero1 * Numero2;
        
}

int Divisao(){
    float Numero1;
    float Numero2;
        printf("DIGITE O PRIMEIRO NUMERO: ");
        scanf("%f", &Numero1);
        printf("DIGITE O SEGUNDO NUMERO: ");
        scanf("%f", &Numero2);

        if (Numero2 == 0){
            printf("ERROR DIVISAO POR ZERO\n");
            return 0;
        }
        return Numero1 / Numero2;
        
}

int main(){
    int opcao;
    float Resultado;

    setlocale(LC_ALL, "Portuguese");
   do{
      
    
    
    printf("\n");
    printf("\n========================================\n");
    printf("\t CALCULADORA EM C \t\n");
    printf("========================================\n");
    printf("\n");

    printf("1. Soma \n2. Subtracao \n3. Multiplicacao \n4. Divisao \n5. Sair \n\n");
    printf("ESCOLHA UMA OPCAO: ");
    scanf("%d", &opcao);

    if(opcao == 5){
        printf("VOCE SAIU DA CALCULADORA!!!\nATE O PROXIMO CALCULO :^)\n");
        return 0;   
    }else{

        switch (opcao){
        case 1:
            Resultado = Soma();
            printf("RESULTADO: %.2f", Resultado);

            break;
        
        case 2:
            Resultado = Subtracao();
            printf("RESULTADO: %.2f", Resultado);

            break;

        case 3:
            Resultado = Multiplicacao();
            printf("RESULTADO: %.2f", Resultado);

            break;

        case 4:
            Resultado = Divisao();
            printf("RESULTADO: %.2f", Resultado);

            break;

        default:
            printf("OPCAO INVALIDA, SELECIONE OPCAO ENTRE AS VALIDAS\n");
            break;
        }
    }
    } while (opcao != 5);

    return 0;
}