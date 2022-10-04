#include <stdio.h>
#include <stdlib.h>

void main()
{
   

    int operacao;
    float n1, n2, resultado;
    char controle;

    

    do{
        do
        {
            printf("\nSelecione a operação que deseja fazer:\n");
            printf("1. Adição\n2. Subtração\n3. Divisão\n4. Multiplicação\n5. Raiz quadrada\n6. Potência\n\n");
            scanf("%d", &operacao);

            if(operacao > 6 || operacao < 1)
            {
                printf("\nValor inválido, digite um valor válido.\n\n");
            }
        } while(operacao > 6 || operacao < 1);

        if (operacao == 6)
        {
            printf("\nDigite a base da potenciação: ");
            scanf("%f", &n1);
            printf("\nDigite o expoente da potenciação ");
            scanf("%f", &n2);
        }
        else if (operacao == 5)
        {
            printf("\nDigite o valor a ser usado na raiz quadrada: ");
            scanf("%f", &n1);
        }
        else
        {
            do
            {
                printf("\nEscolha o primeiro valor para a operação: ");
                scanf("%f", &n1);
                printf("\nEscolha o segundo valor para a operação: ");
                scanf("%f", &n2);

                if (operacao == 3 && n2 == 0)
                {
                    printf("\nNão é possível dividir nenhum valor por 0, tente novamente.\n");
                }
            } while(operacao == 3 && n2 == 0);
        }

        switch(operacao)
        {
            case 1:
                resultado = n1+n2;
                break;
            case 2:
                resultado = n1-n2;
                break;
            case 3:
                resultado = n1/n2;
                break;
            case 4:
                resultado = n1*n2;
                break;
            case 5:
                resultado = sqrt(n1);
                break;
            case 6:
                resultado = pow(n1, n2);
                break;
        }

        printf("\nO resultado da operação é: %.02f \n\n", resultado);

        printf("Pressione 0 para sair ou qualquer tecla para reiniciar: \n\n");
        scanf(" %c", &controle);
    } while(controle != '0');
}