#include <bits/stdc++.h>

using namespace std;
struct node{
    int year;
    int month;
    int day;
}p;
int f[13]={0,31,28,31,30,31,30,31,30,30,31,30,31};
int main(){
    while(scanf("%d%d%d",&p.year,&p.month,&p.day) != EOF){
        if((p.year%400 == 0) || ( (p.year%4 == 0) && (p.year%100 != 0) ) ){
            f[2]=29;
        }
        else f[2]=28;
        if(p.month<1 || p.month>12 ){
            printf("Input Error!\n");
            continue;
        }
        if(p.day<1 || p.day>f[p.month]){
            printf("Input Error!\n");
            continue;
        }
        int ans=p.day;
        for(int i=1;i<p.month;i++){
            ans +=f[i];
        }
        printf("%d\n",ans);
    }
    return 0;
}