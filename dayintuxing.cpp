#include <stdio.h>
#include <stdlib.h>
int main(){
    //VSCode空白模板
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = n-i; j > 0 ; j--)  //打印这一行的空格
        {
            printf(" ");
        }
        for (int k = 1; k <= 2*i-1; k++)  //打印这一行的星号
        {
            printf("*");
        }
        printf("\n");
    }
    
    system("pause");
    return 0;
}