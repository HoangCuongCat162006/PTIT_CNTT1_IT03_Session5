#include <stdio.h>

int sum(int arr[] , int n) {
    if (n==0) {
        return 0;
    } else {
        return arr[n-1]+sum(arr,n-1);
    }
}
int main() {
    int n;
    printf("Nhap so luong phan tu cua mang : ");
    scanf("%d",&n);

    int arr[n];
    for (int i=0;i<n;i++) {
        printf("Nhap gia tri arr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
    int total=sum(arr,n);
    printf("%d",total);

}