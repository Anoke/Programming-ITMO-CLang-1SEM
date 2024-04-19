#include <stdio.h> /* подключение заголовочного файла стандартной библиотеки ввода/вывода*/
#include <string.h>// включение информации о строках
int main()
{
    printf("9th task\n");
    char str25[100], *p, a; // заводим строку символов
    gets(str25);// получаем строку
    scanf("%c", &a);// получаем символ для поиска
    p = strrchr(str25, a);// осуществляем поиск в строке последнего вхождения символа
    printf ("Last occurence of %c found at %d \n",a,(p-str25+1));// вывод последнего вхождения
    getchar();

    printf("1st task\n");
    char str1[1022];// заводим две строки
    char str2[1022];

    scanf("%s", str1);// получаем две строки с консоли
    scanf("%s", str2);
    strcat(str1, str2);// выполняем конкатенацию двух строк

    printf("%s\n", str1);// вывод строки после конкатенации

    printf("3rd task\n");
    char string1 [1023];// заводим две строки
    char string2 [1023];

    scanf("%s", string1);// получаем две строки с консоли
    scanf("%s", string2);

    if (strcmp(string1,string2) == 0)// сравниваем две строки
        printf("strings are the same\n");// вывод, если истина
    else
        printf("strings aren't same\n");// вывод, если ложь

    printf("5th task\n");
    char src[1024];// заводим две строки
    char dst[1024];

    scanf("%s", &src);// получаем значение с консоли

    strcpy (dst, src);// копируем строку 1 в строку 2

    printf ("src: %s\n",src);// показательный вывод двух строк

    printf ("dst: %s\n",dst);


    printf("7th task\n");
    char length [255];// заводим строку
    scanf("%s", length);// запрос строки с консоли

    printf ("length of the string '%s' - %d symbols\n", length, strlen (length) );// определяем длину строки и выводим её


    return 0;

}
