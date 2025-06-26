#include <stdio.h>

int sum(int a ,int b) {
    if (a==b) {
        return a;

    } else {
        return b+sum(a,b-1);
    }
}
int main() {
    int num1;
    int num2;
    printf("Nhap so ngguyen thu nhat: \n");
    scanf("%d",&num1);
    printf("nhap so nguyen thu hai \n:");
    scanf("%d",&num2);

    int lower=(num1<num2) ? num1 : num2;
    int greater=(num1>num2) ? num1 : num2;
    if (num1>0 && num2>0) {
        int total=sum(lower,greater);
        printf("%d",total);
    }else {
        printf("Khong hop le ");
    }

}