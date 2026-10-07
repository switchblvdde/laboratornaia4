#define _CRT_SECURE_NO_DEPRECATE	
#include <stdio.h>
#include <locale.h>	
int main() {
    setlocale(LC_ALL, ".UTF8");
    int a, b, res,h;
    printf("Уровень голода Вани ");
    scanf("%d", &a);
    printf("Уровень голода Пети ");
    scanf("%d", &b);
    printf("Условие для 4 частей: %d\n",(a%2)==0+(b%2==0)==1);
    system("pause");
    return 0;
}
