#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    float v[5], maior, menor, soma = 0, media;
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &v[i]);
        soma = soma + v[i];
    }

    maior = v[0];
    menor = v[0];

    for (i = 1; i < 5; i++)
    {
        if (v[i] > maior)
        {
            maior = v[i];
        }
        if (v[i] < menor)
        {
            menor = v[i];
        }
    }

    media = soma / 5;

    printf("\nValores lidos:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%.2f\n", v[i]);
    }

    printf("\nMaior valor: %.2f\n", maior);
    printf("Menor valor: %.2f\n", menor);
    printf("Média dos valores: %.2f\n", media);

    return 0;
}
