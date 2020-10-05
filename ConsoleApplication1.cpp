#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Russian");
    int* a;  // указатель на массив
    int i, n, sp, sn, c0, cp, cn;
    printf("Введите размер массива: ");
    scanf_s("%d", &n);
    a = (int*)malloc(n * sizeof(int));   // Выделение памяти
    printf("Введите элементы массива: ");
    for (i = 0; i < n; i++)
    {
        scanf_s("%d", &a[i]);
    }
    sp = 0; sn = 0; c0 = 0; cp = 0; cn = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] > 0) { sp = sp + a[i]; cp++; }
        else if (a[i] < 0) { sn = sn + a[i]; cn++; }
        else { c0++; };
    }
    printf("Сумма положительных элементов массива: %d", sp);
    printf("\nКоличество положительных элементов массива: %d", cp);
    printf("\nСумма отрицательных элементов массива: %d", sn);
    printf("\nКоличество отрицательных элементов массива: %d", cn);
    printf("\nКоличество элементов массива равных нулю: %d", c0);
    return 0;
}
