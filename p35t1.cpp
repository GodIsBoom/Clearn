#include <bits/stdc++.h>

using namespace std;

int main(){
    char s[100];
    int x,ans=0;
    scanf("%s%d",&s,&x);
    int len = strlen(s);
    for(int i=0;i<len;i++){
        ans *=x;
        if(s[i]>='0'&&s[i]<='9') ans += (s[i]-'0');
        else ans += (s[i]-'a')+10;
    }
    printf("%d\n",ans);
    system("pause");
    return 0;
}