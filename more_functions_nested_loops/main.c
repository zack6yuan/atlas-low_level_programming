#include "main.h"
#include <stdio.h>

int main() {
    char myChar = '5'; 

    if (_isdigit(myChar)) {
        printf("The character is a digit.\n");
    } else {
        printf("The character is not a digit.\n");
    }

    return 0;
}

