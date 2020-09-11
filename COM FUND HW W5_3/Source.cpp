#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

void isPalindrome(char* string);

int main(){
    char str[1000] ;
    printf("Enter string : ");
    scanf("%s", str);
    isPalindrome(str);
    return 0;
}

void isPalindrome(char* string){
    char* ptr, * rev;
    ptr = string;
    while (*ptr != '\0') {
        ++ptr;
    }
    --ptr;
    for (rev = string; ptr >= rev;) {
        if (*ptr == *rev) {
            --ptr;
            rev++;
        }
        else
            break;
    }
    if (rev > ptr) {
        printf("%s is Palindrome",string);
    }
    else {
        printf("%s is not a Palindrome", string);
    }
}