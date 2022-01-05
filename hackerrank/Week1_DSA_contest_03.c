#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char input[100];
    gets(input);
    for(int i=0;input[i]!=NULL;i++)
    {
        if(input[i]==',')
        input[i]='\n';
    }
    printf("%s",input);
    return 0;
}
