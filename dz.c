#define _CRT_SECURE_NO_DEPRECATE	
#include <stdio.h>
#include <locale.h>	
int main(void) {
    //setlocale(LC_ALL, "Russian");
    int a, b, res,h;
    printf("Уровень голода Вани ");
    scanf("%d", &a);
    printf("Уровень голода Пети ");
    scanf("%d", &b);
    h = (a % 2 == 0) + (b % 2 == 0 );
    res = (h == 1) * 4 + (h != 1) * 6;
    printf("Делим пиццу на %d частей", res);
    system("pause");
    return 0;
}