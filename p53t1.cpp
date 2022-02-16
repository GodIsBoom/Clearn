#include <bits/stdc++.h>

using namespace std;
bool cmp(int a,int b){
    if(a%2 == b%2) return a<b;
    else return (a%2)>(b%2);
}
int main(){
    int a[1005]={0};
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}