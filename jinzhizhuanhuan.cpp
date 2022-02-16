#include <stdio.h>
#include <stdlib.h>
int main(){
    int x=0,y=0;
    scanf("%d",&x);
    int a[100]={0},cnt=0,jz=3; //jz的值为k则把10进制转为k进制，k<10
    while (x>0)
    {
        a[cnt++]=x%jz;
        x=x/jz;
    }
    for (int i = cnt-1; i >= 0; i--)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}