#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int v[8], i, x, y, soma;

    for (i = 0; i < 8; i++)
    {
        printf("Digite o valor da posição %d: ", i);
        scanf("%d", &v[i]);
    }

    printf("Digite a posição X (0 a 7): ");
    scanf("%d", &x);
    while (x < 0 || x > 7)
    {
        printf("Posição inválida! Digite de 0 a 7: ");
        scanf("%d", &x);
    }

    printf("Digite a posição Y (0 a 7): ");
    scanf("%d", &y);
    while (y < 0 || y > 7)
    {
        printf("Posição inválida! Digite de 0 a 7: ");
        scanf("%d", &y);
    }

    soma = v[x] + v[y];

    printf("\nValor na posição %d: %d\n", x, v[x]);
    printf("Valor na posição %d: %d\n", y, v[y]);
    printf("Soma: %d\n", soma);

    return 0;
}
