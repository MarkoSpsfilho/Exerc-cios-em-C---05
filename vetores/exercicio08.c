#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int v[6], i;

    for (i = 0; i < 6; i++)
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("\nValores na ordem inversa:\n");
    for (i = 5; i >= 0; i--)
    {
        printf("%d\n", v[i]);
    }

    return 0;
}
