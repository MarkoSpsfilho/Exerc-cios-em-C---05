#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int v[10], i, maior, menor;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    maior = v[0];
    menor = v[0];

    for (i = 1; i < 10; i++)
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

    printf("\nMaior elemento: %d\n", maior);
    printf("Menor elemento: %d\n", menor);

    return 0;
}
