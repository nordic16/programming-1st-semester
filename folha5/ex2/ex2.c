#include <stdio.h>
#include <string.h>
#define SIZE 11

int is_palindrome(const char[]);
void reverse(char[]);

int main(void) {
    char str[SIZE];

    printf("String with max %d characters: ", SIZE - 1);
    scanf("%s", str);
   
    if (is_palindrome(str)) {
        printf("\"%s\" Is a palindrome!\n", str);
    
    } else {
        printf("\"%s\" Is not a palindrome!\n", str);
    }  
}


int is_palindrome(const char str[]) {
    char buf[SIZE];
    strcpy(buf, str);

    reverse(buf);

    return !strcmp(buf, str);
}


void reverse(char str[]) {
    int i, pos;
    char tmp;
    size_t len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        /* (SIZE -1) avoids also printing \0 */
        pos = (len - 1) - i;
        tmp = str[i];
        str[i] = str[pos];
        str[pos] = tmp;
    }
}
