#include <stdio.h>

void printf1ToN(int n) {
    if (n==0)return;

        printf1ToN(n-1);
        printf("%d",n);

}

int main() {
    int n;
    printf("Nhap so nguyen duong : ");
    scanf("%d",&n);

    if (n<=0) {
        printf("NHap so nguyen duong lon hon 0");
        return 1;
    }
    printf("Cac so tu 1 den %d la :",n);
    printf1ToN(n);
    printf("\n");
}