#include <bits/stdc++.h>

using namespace std;

int main(){
    int num[6]={1,2,4,7,15,34};
    queue<int> q;
    q.push(3);
    q.push(11);
    q.push(9);
    while(!q.empty()){
        cout << q.front()<<endl;
        q.pop();
    }
    sort(num,num+6);
    int pos1=lower_bound(num,num+6,7)-num;
    int pos2=upper_bound(num,num+6,7)-num;
    cout << pos1 <<" "<<num[pos1]<<endl;
    cout << pos2 << " " << num[pos2]<< endl;
    system("pause");
    return 0; 
}