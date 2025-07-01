#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

     char ch;
    char str[100];
    char sentence[100];

    // Read character
    scanf("%c", &ch);

    // Read string (without spaces)
    scanf("%s", str);

    // Read full sentence (with spaces)
    scanf("\n"); // to consume the leftover newline character
    scanf("%[^\n]%*c", sentence);

    // Print outputs
    printf("%c\n", ch);
    printf("%s\n", str);
    printf("%s\n", sentence);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}