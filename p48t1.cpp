#include <bits/stdc++.h>

using namespace std;
int main(){
    char s[100];
    gets(s);
    int len = strlen(s);
    for(int i=0;i<len ;i++){
        if(s[i]>'a' && s[i]<'z'){
            s[i]+=3;
            if(s[i]>'z') s[i]-=26;
        }
        else if(s[i]>'A' && s[i]<'Z'){
            s[i]+=3;
            if(s[i]>'Z') s[i]-=26;
        }
        else continue;
    }
    puts(s);
    system("pause");
    return 0;
}