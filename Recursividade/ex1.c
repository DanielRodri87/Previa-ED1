// Implementar a soma recursiva de um
// vetor de inteiros.

#include <stdio.h>

int soma(int *v, int n)
{
    if (n > 0)
    {
        return v[n - 1] + soma(v, n - 1);
    }
    else
    {
        return 0;
    }
}

int main()
{
    int v[] = {1, 2, 3, 4, 5};
    printf("%d\n", soma(v, 5));
    return 0;
}