#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    float v[10], somaPositivos = 0;
    int i, negativos = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o número %d: ", i + 1);
        scanf("%f", &v[i]);

        if (v[i] < 0)
        {
            negativos++;
        }
        if (v[i] > 0)
        {
            somaPositivos = somaPositivos + v[i];
        }
    }

    printf("\nQuantidade de números negativos: %d\n", negativos);
    printf("Soma dos números positivos: %.2f\n", somaPositivos);

    return 0;
}
