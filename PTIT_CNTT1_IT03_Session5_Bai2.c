#include <stdio.h>

int total(int n) {
    if (n==1) {
        return 1;
    }else {
        return n+total(n-1);
    }
}

int main() {
    int number;
    printf("Nhap 1 so nguyen bat ki :");
    scanf("%d",&number);
    if(number>0) {
        int tong=total(number);
        printf("%d",tong);
    }else {
        printf("Khong hop le. ");
    }
}

