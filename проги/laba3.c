#include <stdio.h>

int main() {
    int a,b,c;
    printf("Write the number in 8 numeral system: ");
    scanf("%o",&a);
    printf("In 10 numeral system ");
    printf("%d\n",a);
    printf("%o << 1 = %o\n",a, a << 1);

    printf("%o == %d\n",a,~a+1);

    printf("Write the number in 8 numeral system: ");
    scanf("%o", &b);
    c = a & b;
    printf("%o",c);
    return 0;
}