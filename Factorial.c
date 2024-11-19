#include <stdio.h>
int factorial(int n);
int main()
{
    int sayi;
    printf("Bir sayi giriniz:");
    scanf("%d", &sayi);
    printf("%d", factorial(sayi));

    return 0;
}
int factorial(int n)
{
    int fact = 1;
    for (; n > 0; n--)
    {
        fact *= n;
    }
    return fact;
}
