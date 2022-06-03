#include <stdio.h>
#include <string.h>
#include <ctype.h>


char* split_string(char* str, char* tmp) {

    char index = 0;
    static int i = 0;

    if (i >= strlen(str)) return NULL;

    for (; ; i++) {
        if (str[i] == '\0' ||  i >= strlen(str)) {
            return tmp;
        }
        else if (isspace(str[i]) && index == 0) {
            continue;
        }
        else if (isalpha(str[i]) || ispunct(str[i])) {
            tmp[index] = str[i];
            index += 1;
        }
        else {
            tmp[index] = '\0';
            break;
        }
    }

    return tmp;

}

int
main() {

    char buff[100] = "Hello honey    do you want some cookies";
    char tmp[50];
    char ch;

    printf("Char: ");
    ch = getchar();

    while (split_string(buff, tmp) != NULL) {
        if (tmp[strlen(tmp) - 1] == ch )
            printf("%s\n", tmp);
    }

    return 0;

}