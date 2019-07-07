#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

int main(int argc, string argv[])
{

    //Make sure there is only one command line argument
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    //Convert user input string to int
    int k = atoi(argv[1]);


    // key is a non-negative integer 
    if (k < 0)
    {
       printf("Usage: ./caesar key\n");
        return 1;
    }
    else
    {
        char *plaintext;
        plaintext=(char*)calloc(1000000,sizeof(char));
        
        
        //input string
        printf("plaintext : ");
        scanf("%[^\n]s",plaintext);

        //print cipher text
        printf("ciphertext: ");

        for (int i = 0, n = strlen(plaintext); i < n; i++)
        {

            //Encrypt lower case
            if islower(plaintext[i])
            {
                printf("%c", (((plaintext[i] + k) - 97) % 26) + 97);
            }
            //encrypt upper case
            else if isupper(plaintext[i])
            {
                printf("%c", (((plaintext[i] + k) - 65) % 26) + 65);
            }
            //print all other characters
            else
            {
                printf("%c", plaintext[i]);
            }
        }

        printf("\n");

        return 0;
    }
}
