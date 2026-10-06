#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int A[6] = {1, 0, 5, -2, -5, 7};
    int soma, i;

    soma = A[0] + A[1] + A[5];
    printf("Soma de A[0], A[1] e A[5]: %d\n", soma);

    A[4] = 100;

    printf("\nValores do vetor A:\n");
    for (i = 0; i < 6; i++)
    {
        printf("%d\n", A[i]);
    }

    return 0;
}
