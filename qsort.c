#include<stdio.h>

void parr(int a[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}

int part(int a[],int low, int high){
    int p = a[high];
    int i=low-1;
    for (int j = low; j < high-1; j++)
    {
        if(a[j]<=p){
            i++;
            swap(&a[j], &a[i]);
        }
    }
    swap(&a[i+1], &a[high]);
    return i+1;
}

void quick(int a[],int low,int high){
    if(low<high){
        int p = part(a,low,high);

        quick(a,low,p-1);
        quick(a,p+1,high);
    }
}

int main(){
    int a[]={11,2,23,141,15};
    int n=sizeof(a)/sizeof(a[0]);
    int t;
    parr(a,n);
    quick(a,0,n-1);
    parr(a,n);
    return 0;
}