#include<stdio.h>

void parr(int a[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

void isort(int a[],int n){
    int i,key,j;
    for(i=1;i<n;i++){
        key = a[i];
        j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}

int main(){
    int a[]={11,2,23,141,15};
    int n=sizeof(a)/sizeof(a[0]);
    int t;
    parr(a,n);
    isort(a,n);
    parr(a,n);
    return 0;
}