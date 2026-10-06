#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    float v[5];
    int i, posMaior = 0, posMenor = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &v[i]);
    }

    for (i = 1; i < 5; i++)
    {
        if (v[i] > v[posMaior])
        {
            posMaior = i;
        }
        if (v[i] < v[posMenor])
        {
            posMenor = i;
        }
    }

    printf("\nPosição do maior valor: %d\n", posMaior);
    printf("Posição do menor valor: %d\n", posMenor);

    return 0;
}
