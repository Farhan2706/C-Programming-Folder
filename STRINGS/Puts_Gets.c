#include <stdio.h>
#include <string.h>

int main()
{

    char str[50];
    // scanf("%s",str);  // Only First word will be considered.
    printf("Input : ");
    //gets(str); // Entire Sentence Can be input.
    scanf("%[^\n]s",str);  // For entire Sentence. we write--> "%[^\n]s"
    printf("Output : ");
    printf("%s\n", str); // In printf we write '\n' to print in next line. but puts automatically do this.
    puts("Output : ");
    puts(str); // It automatically put '\n'. means print input in next line automatically.

    return 0;
}