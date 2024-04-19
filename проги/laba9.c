#include <stdio.h>
#define LIMIT 499// количество бесплатных минут

int main()
{
    char a[80] = { '\0' } ;// заводим массив символов
    int countNumber = 0, countUpper = 0, countLower = 0;// заводим перемнные, где будут записано количество чисел, прописных и строчных букв

    printf("\n Input line: \n");
    gets(a);// вводим строку

    for (int n = 0; n < sizeof(a) / sizeof(char) - 1; n++)
    {
        if (a[n] >= '0' && a[n] <= '9') countNumber++;// считаем количество цифр
        else
            if (a[n] >= 'A' && a[n] <= 'Z') countUpper++;// считаем количество прописных букв английского алфавита
            else
                if (a[n] >= 'a' && a[n] <= 'z') countLower++;// считаем количество строчных букв английского алфавита
    }

    printf("\n Number = %d \n Upper = %d \n Lower = %d\n\n\n", countNumber, countUpper, countLower);// вывод количества

    int iValue;
    int iValue2;
    int iDuration;
    int iTotal;
    printf("Enter subscription fee:  \n");
    scanf("%d", &iValue);// вводим абонентскую плату
    printf("Enter the cost per minute over the limit: ");
    scanf("%d", &iValue2);// вводим стоимость минуты сверх лимита
    printf("Call duration: ");
    scanf("%d", &iDuration);// вводим длительность звонков

    if(iDuration>LIMIT)// при условии, что длительность звонков превысила лимит выполняется следующее действие,
        iTotal = (LIMIT*iValue+(iDuration-LIMIT)*iValue2);// подсчет итоговой суммы
    else// иначе
        iTotal = iDuration*iValue;// подсчет итоговой суммы

    printf("%d", iTotal);// вывод итоговой суммы

    return 0;
}