#include <stdio.h>
int main()
{
    void england();
    england();
    return 0;
}

void england()
{
    printf("You are in England\n");
    void australia();
    australia();
    return;
}
#include <stdio.h>

void australia()
{
    printf("You are in Australia\n");
    return;
}