#include <stdio.h>
#include <stdlib.h>
int main(){
    //VSCode空白模板
    int n;
    scanf("%d",&n);
    int a[100][100]={0};
    int x=0,y=-1,num=1;
    while(num <= n*n)
    {
        while (y < n-1 && a[y+1][x] == 0)
        {
            a[++y][x] = num++;
        }
        while(x < n-1 && a[y][x+1] == 0){
            a[y][++x] = num++;
        }
        while(y > 0 && a[y-1][x] == 0){
            a[--y][x] = num++;
        }
        while(x > 1 && a[y][x-1] == 0){
            a[y][--x] = num++;
        }
        // num++;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%02d ",a[i][j]);
        }
        printf("\n");
    }
    // printf("%d,%d\n",x,y);
    system("pause");
    return 0;
}