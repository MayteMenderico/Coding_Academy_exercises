#include <stdio.h>


int my_strcmp(char *str1, char *str2) {
    int difference = 0;
    for(int i = 0; str1[i] != '\0'; i++) {
        if(str1[i] != str2[i]) {
            difference = str2[i] - str1[i];
        }
    }
    return difference;
}

int main() {
    printf("%d\n", my_strcmp("this", "th2"));
}