#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    float notas[15], soma = 0, media;
    int i;

    for (i = 0; i < 15; i++)
    {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma = soma + notas[i];
    }

    media = soma / 15;

    printf("\nMédia geral: %.2f\n", media);

    return 0;
}
