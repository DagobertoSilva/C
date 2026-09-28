#include <stdio.h>
#include <locale.h>
#include <stdlib.h> // biblioteca para usar a função exit usada para parar o código em caso de divisão por zero

//----------------- FUNÇÕES DE SOMA, SUBTRAÇÃO, MULTIPLICAÇÃO E DIVISÃO -----------------
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

int CalcularExpressao(){
    int opcao;
    int  calculos = 0;
    float Resultado = 0;
    float Numero1;
    float Numero2;
 do{
      
    
    
    printf("\n");
    printf("\n========================================\n");
    printf("\t CALCULADORA DE EXPRESSAO PASSO A PASSO \t\n");
    printf("\t RESULTADO =  %.2f\t\n", Resultado);
    printf("========================================\n");
    printf("\n");

    //-----------------------------------MENU-----------------------------------
    printf("1. Soma \n2. Subtracao \n3. Multiplicacao \n4. Divisao \n5. Sair DA CALCULADORA DE EXPRESSAO \n\n");
    printf("ESCOLHA UMA OPCAO: ");
    scanf("%d", &opcao);

    if(opcao == 5){
        printf("VOCE SAIU DA CALCULADORA DE EXPRESSAO!!!\nATE O PROXIMO CALCULO :^)\n");
        return 0;   
    }else{
        if(calculos == 0){

            switch (opcao){
            case 1:
                Resultado = Soma();
                printf("RESULTADO: %.2f", Resultado);
                calculos++;
                break;
            
            case 2:
                Resultado = Subtracao();
                printf("RESULTADO: %.2f", Resultado);
                calculos++;
                break;

            case 3:
                Resultado = Multiplicacao();
                printf("RESULTADO: %.2f", Resultado);
                calculos++;
                break;

            case 4:
                printf("DIGITE O PRIMEIRO NUMERO: ");
                scanf("%f", &Numero1);
                printf("DIGITE O SEGUNDO NUMERO: ");
                scanf("%f", &Numero2);

                if (Numero2 == 0){
                    printf("ERROR DIVISAO POR ZERO\n");
                    Resultado = 0;
                    calculos = 0;
                }else{
                    Resultado = Numero1 / Numero2;
                    printf("RESULTADO: %.2f", Resultado);
                    calculos++;
                }

                break;

            default:
                printf("OPCAO INVALIDA, SELECIONE OPCAO ENTRE AS VALIDAS\n");
                break;
            }
        }else{
            switch (opcao){
                case 1:
                    printf("RESULTADO ACUMULADO = %.2f\n\n", Resultado);
                    printf("DIGITE UM NUMERO PARA SER SOMADO: ");
                    scanf("%f", &Numero1);
                    Resultado = Resultado + Numero1;
                    printf("RESULTADO: %.2f", Resultado);
                    calculos++;
                    break;
                
                case 2:
                    printf("RESULTADO ACUMULADO = %.2f\n\n", Resultado);
                    printf("DIGITE UM NUMERO PARA SER SUBTRAIDO: ");
                    scanf("%f", &Numero1);
                    Resultado = Resultado - Numero1;
                    printf("RESULTADO: %.2f", Resultado);
                    calculos++;
                    break;

                case 3:
                    printf("RESULTADO ACUMULADO = %.2f\n\n", Resultado);
                    printf("DIGITE UM NUMERO PARA SER MULTIPLICADO: ");
                    scanf("%f", &Numero1);
                    Resultado = Resultado * Numero1;
                    printf("RESULTADO: %.2f", Resultado);
                    calculos++;
                    break;

                case 4:
                    printf("RESULTADO ACUMULADO = %.2f\n\n", Resultado);
                    printf("DIGITE O PRIMEIRO NUMERO PARA DIVIDIR: ");
                    scanf("%f", &Numero1);

                    if (Numero1 == 0){
                    printf("ERROR DIVISAO POR ZERO\n");
                    Resultado = 0;
                    calculos = 0;
                    }else{
                        Resultado = Resultado / Numero1;
                        printf("RESULTADO: %.2f", Resultado);
                        calculos++;
                    }

                    break;

                default:
                    printf("OPCAO INVALIDA, SELECIONE OPCAO ENTRE AS VALIDAS\n");
                    break;
            }
        }   
    }
        
    } while (opcao != 5);
    
    return Resultado;
}

int main(){
    int opcao;
    float Resultado;
    float Numero1;
    float Numero2;

    setlocale(LC_ALL, "Portuguese");
   do{
      
    
    
    printf("\n");
    printf("\n========================================\n");
    printf("\t CALCULADORA EM C \t\n");
    printf("========================================\n");
    printf("\n");

    //-----------------------------------MENU-----------------------------------
    printf("1. Soma \n2. Subtracao \n3. Multiplicacao \n4. Divisao \n5. Calcular expressao \n6. Sair \n\n");
    printf("ESCOLHA UMA OPCAO: ");
    scanf("%d", &opcao);

    if(opcao == 6){
        printf("VOCE SAIU DA CALCULADORA!!!\nATE O PROXIMO CALCULO :^)\n\n\n");
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
               
            printf("DIGITE O PRIMEIRO NUMERO: ");
            scanf("%f", &Numero1);
            printf("DIGITE O SEGUNDO NUMERO: ");
            scanf("%f", &Numero2);

            if (Numero2 == 0){
            printf("ERROR DIVISAO POR ZERO\n");
            
            }else{
                Resultado = Numero1 / Numero2;
                printf("RESULTADO: %.2f", Resultado);
            }
            

            break;

            case 5:
               Resultado = CalcularExpressao();

            break;

        default:
            printf("OPCAO INVALIDA, SELECIONE OPCAO ENTRE AS VALIDAS\n");
            break;
        }
    }
    } while (opcao != 6);

    

    return 0;
}