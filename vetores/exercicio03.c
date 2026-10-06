#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    float v[10], q[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o número %d: ", i + 1);
        scanf("%f", &v[i]);
        q[i] = v[i] * v[i];
    }

    printf("\nVetor original:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%.2f\n", v[i]);
    }

    printf("\nVetor dos quadrados:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%.2f\n", q[i]);
    }

    return 0;
}
