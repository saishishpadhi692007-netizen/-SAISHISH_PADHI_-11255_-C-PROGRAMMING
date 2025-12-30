#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int i, length, isPalindrome = 1;

    printf("Enter a string: ");
    gets(str);  
   
    length = strlen(str);

   
    for (i = 0; i < length; i++) {
        rev[i] = str[length - i - 1];
    }
    rev[i] = '\0'; 
    for (i = 0; i < length; i++) {
        if (str[i] != rev[i]) {
            isPalindrome = 0;
            break;
        }
    }

    
    printf("\nOriginal String : %s", str);
    printf("\nReversed String : %s", rev);

    if (isPalindrome)
        printf("\nResult          : The string is a Palindrome.");
    else
        printf("\nResult          : The string is NOT a Palindrome.");

    return 0;
}