#include <bits/stdc++.h>

using namespace std;
int main(){
    map<string,int> dict;
    dict["Tom"]=1;
    dict["Mark"]=1;
    dict["Bob"]=3;

    for(map<string,int>::iterator it=dict.begin();it != dict.end(); ++it){
        cout<< it->first << " is in class " <<it->second<<endl;
    }
    system("pause");
    return 0;
}