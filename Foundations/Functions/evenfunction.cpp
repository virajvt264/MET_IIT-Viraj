#include <cstdio>

extern int Even(int);

int main(void)
{
    int num;

    printf("Enter the number : ");
    scanf("%d", &num);

    printf("The number is Even : %d\n", Even(num));

    return 0;
}