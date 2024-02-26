#include <stdio.h>

void func(int n)
{
    if (n > 0)
    {
        printf("%d\n", n);
        func(n - 1);
    }
}

void mxn(int m, int n)
{
    if (n > 0)
    {
        printf("%d * %d = %d\n", m, n, m*n);
        mxn(m, n - 1);
    }
}

void fatorial(int n, int f)
{
    if (n > 0)
    {
        f *= n;
        fatorial(n - 1, f);
    }
    else
    {
        printf("%d\n", f);
    }
}


int main()
{
    func(3);
    mxn(3, 3);
    return 0;
}