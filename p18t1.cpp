#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,tmp;
    int f[105]={0},num[105]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&tmp);
        f[tmp]++;
    }
    for(int j=0;j<101;j++){
        if(j>num[f[j]]) num[f[j]]=j;
    }
    for(int k=1;k<101;k++){
        if(num[k]>0) printf("%d %d\n",num[k],k);
    }
    system("pause");
    return 0;
}