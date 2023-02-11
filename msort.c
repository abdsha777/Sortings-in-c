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

void merge(int a[],int low ,int mid,int high){
    int t[high+1];
    int i,j,k;
    k=low;
    i=low;
    j=mid+1;
    while(i<=mid && j<=high) {
        if(a[i]<a[j]){
            t[k]=a[i];
            i++;k++;
        }
        else{
            t[k]=a[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
        t[k]=a[i];
        i++;k++;
    }
    while(j<=high){
        t[k]=a[i];
        j++;k++;
    }
    for(int l = low; l <= high; l++){
        a[l]=t[l];
    }
}

void msort(int a[],int low,int high) {
    if(low<high){
        int mid = (low+high)/2;
        msort(a,low,mid);
        msort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}

int main(){
    int a[]={11,2,23,141,15};
    int n=sizeof(a)/sizeof(a[0]);
    int t;
    parr(a,n);
    msort(a,0,n-1);
    parr(a,n);
    return 0;
}