#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int v[10], i, pares = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &v[i]);

        if (v[i] % 2 == 0)
        {
            pares++;
        }
    }

    printf("\nQuantidade de valores pares: %d\n", pares);

    return 0;
}
