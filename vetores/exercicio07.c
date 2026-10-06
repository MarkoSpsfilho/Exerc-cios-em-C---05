#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int v[10], i, maior, posicao;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    maior = v[0];
    posicao = 0;

    for (i = 1; i < 10; i++)
    {
        if (v[i] > maior)
        {
            maior = v[i];
            posicao = i;
        }
    }

    printf("\nVetor:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", v[i]);
    }

    printf("\nMaior elemento: %d\n", maior);
    printf("Posição do maior elemento: %d\n", posicao);

    return 0;
}
