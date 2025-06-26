#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char* str,int left,int right) {
    if (left>=right) {
        return 1;
    } else if (str[left]!=str[right]) {
        return 0;
    }
    return isPalindrome(str,left+1,right-1);
}
int main() {
    char input[1000];
    printf("Nhap chuoi bat ki :");
    fgets(input,sizeof(input),stdin);
    input[strcspn(input,"\n")]='\0';
    if (isPalindrome(input,0,strlen(input)-1)) {
        printf("palindrome valid\n");
    }else {
        printf("palifrome invalid \n");
    }
}