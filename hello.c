
#include <stdio.h>
#include<cs50.h>
int main(void)
{
    char string[1000000];
    printf("What is your name?\n");
    //get user's name
    scanf("%s",string);
    //print greeting 
    printf("Hello, %s\n",string);
    return 0;
}
