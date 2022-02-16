#include <bits/stdc++.h>

using namespace std;
int a[100];
void QSort(int l,int r){
    if(l>=r) return;
    int i=l,j=r;
    int pivot=a[l];
    while(i<j){
        while(i<j && a[j]>=pivot) j--;
        if(i<j) a[i++]=a[j];
        while(i<j && a[i]<pivot) i++;
        if(i<j) a[j--]=a[i];
    }
    a[i]=pivot;
    QSort(l,i-1);
    QSort(i+1,r);
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    QSort(0,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}