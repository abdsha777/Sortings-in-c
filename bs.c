#include <stdio.h>

int bina(int arr[], int l, int r, int x) {
    if(r>=l){
        int mid = (l+r)/2;
        if(arr[mid]==x){
            return mid;
        }
        if(arr[mid]>x){
            return bina(arr,l,mid-1,x);
        }
        return bina(arr,mid+1,r,x);
    }
    return -1;

}

int main() {
  int arr[] = {2, 3, 4, 10, 22,40};
  int n = sizeof(arr)/ sizeof(arr[0]);
  int x = 10;
  int result = bina(arr, 0, n-1, x);
  (result == -1) ? printf("Element is not present in array")
                 : printf("Element is present at index %d", result);
  return 0;
}
