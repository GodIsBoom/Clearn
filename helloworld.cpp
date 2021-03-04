#include <stdio.h>
#include <stdlib.h>

void swap(int *a);

void swap(int *a)
{
    int temp;
    temp = *a;
    *a = *(a + 1);
    *(a + 1) = temp;
    printf("&a=%d,&b=%d \n", a, a + 1);
}

int main()
{
    // printf("hello! \n");
    int a[10];
    a[0] = 10;
    a[1] = 30;
    swap(a);
    printf("now,a=%d,b=%d \n", a[0], a[1]);

    system("pause");

    return 0;
}