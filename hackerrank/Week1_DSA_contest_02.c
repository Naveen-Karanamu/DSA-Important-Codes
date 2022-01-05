#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    char str[100];
    int counter;

    gets(str);

    for (counter = 0; str[counter] != NULL; counter++) {
        if (str[counter] >= 'A' && str[counter] <= 'Z')
            str[counter] = str[counter] + 32; 
        else if (str[counter] >= 'a' && str[counter] <= 'z')
            str[counter] = str[counter] - 32; 
    }

    printf("%s", str);
    return 0;
}