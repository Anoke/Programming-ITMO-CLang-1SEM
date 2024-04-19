#include <stdio.h>
#define min_value 1 // минимальное значение
#define max_value 10 // максимальное значение

int main() {
    int a,result;
    printf("Write the number: ");
    scanf("%d", &a); // запрос с консоли числа
    result = min_value<=a && max_value>=a;// определение попадает ли число в область допустимых значений
    printf("number %d in range %d...%d : %s",a,min_value,max_value,result ? "Yes":"No");// если попадает "Yes", иначе "No"

    int b;
    scanf("%d",&b);// запрос числа с консоли
    printf("%d",(b>>1)%2);// проверка значения бита
    return 0;
}