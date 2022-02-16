#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    int ans=0;
    while(n){
        ans *= 10;
        ans += (n%10);
        n = n/10;
    }
    cout<<ans<<endl;
    system("pause");
    return 0;
}