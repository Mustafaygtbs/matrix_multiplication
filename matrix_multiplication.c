#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r1, c1;
    int r2, c2;

    printf("Lutfen birinci matirisin boyutlarini giriniz:");
    scanf("%d%d", &r1, &c1);

    printf("Lutfen ikinci matirisin boyutlarini giriniz:");
    scanf("%d%d", &r2, &c2);

    if (c1 != r2)
    {
        printf("Bu matrisler carpilamaz!!!");

        return 0;
    }

    int X[10][10];
    int Y[10][10];

    printf("Lutfen birinci matrisin degerlerini giriniz:");

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("X[%d,%d] indexindeki elemani giriniz.", i, j);
            scanf("%d", &X[i][j]);
        }
    }
    printf("Lutfen ikinci matrisin degerlerini giriniz:");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("Y[%d,%d ]indexindeki elemani giriniz.", i, j);
            scanf("%d", &Y[i][j]);
        }
    }
    printf("X matrisi:\n");

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d  ", X[i][j]);
        }
        printf("\n");
    }

    printf("Y matrisi:\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d  ", Y[i][j]);
        }
        printf("\n");
    }
    int sonuc[10][10];

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            sonuc[i][j] = 0;
            for (int k = 0; k < c1; k++)
            {
                sonuc[i][j] += X[i][k] * Y[k][j];
            }
        }
    }

    printf("X ve Y matrisinin carpiminin sonucu:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d\t", sonuc[i][j]);
        }
        printf("\n");
    }
    printf("**********************************\n");

    printf("Program basari ile sonlanmistir.");
    return 0;
}