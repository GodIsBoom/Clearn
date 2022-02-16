#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,tmp;
    int a[105]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&tmp);
        a[tmp]++;
    }
    for(int j=0;j<105;j++){
        if(a[j]!=0) printf("%d %d\n",j,a[j]);
    }
    system("pause");
    return 0;
}