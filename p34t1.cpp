#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,x;
    char s[105];
    scanf("%d%d",&n,&x);
    int cnt=0;
    while(n>0){
        int w=(n%x);
        if(w<10) s[cnt++]=w+'0';
        else s[cnt++]=(w-10)+'a';
        n = n/x;
    }
    for(int i=cnt-1;i>=0;i--){
        printf("%c",s[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}