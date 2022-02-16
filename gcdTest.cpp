#include <stdio.h>
#include <stdlib.h>

int gcd(int a , int b){
    if(b == 0) return a;
    else return gcd(b ,a%b);
}
int main(){
    //VSCode空白模板
    int x,y;
    scanf("%d%d",&x,&y);
    printf("%d\n",gcd(x,y));
    system("pause");
    return 0;
}