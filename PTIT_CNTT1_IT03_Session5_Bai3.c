#include <stdio.h>

int factorielle(int n) {
    if (n==1) {
        return 1;
    } else {
        return n*factorielle(n-1);
    }
}

int main() {
    int number;
    printf("Nhap so nguyen duong : ");
    scanf("%d",&number);

    if (number>0) {
        int product =factorielle(number);
        printf("%d",product);
    } else {
        printf("Khong hop le ");
    }
}