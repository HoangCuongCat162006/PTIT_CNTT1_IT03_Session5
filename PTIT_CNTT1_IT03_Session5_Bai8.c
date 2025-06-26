#include <stdio.h>
#include <ctype.h>
#include <string.h>

int toInteger(char *str,int len) {
    if (len==0) {
        return 0;
    } else {
        return toInteger(str,len-1)*10+(str[len-1]-'0');
    }
}
int convertStringtoInt(char *str,int *result) {
    int len = strlen(str);
    if (len ==0) {
        return 0;
    }
    for (int i=0;i<len;i++) {
        if (!isdigit(str[i])) {
            return 0;
        }
    }
    int start=0;
    while (str[start] =='0' && start < len-1) {
        start++;
    }
    *result =toInteger(&str[start],strlen(&str[start]));
    return 1;
}


int main() {
    char input[1000];
    int number;
    printf("Nhap chuoi ki tu so : ");
    scanf("%s",input);
    if (convertStringtoInt(input,&number)) {
        printf("%d \n ",number);
    } else {
        printf("Input khong hop le ");
    }
}