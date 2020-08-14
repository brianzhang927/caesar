#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>


int main(int argc, string argv[])
{
    if (argc != 2)      //check valid command-line argument
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    for (int i = 0, n = strlen(argv[1]); i < n; i++)        //check valid command-line argument
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }


    int k = atoi(argv[1]);      //convert string to int

    string plaintext = get_string("plaintext: ");
    printf("ciphertext: ");


    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        if (plaintext[i] >= 'a' && plaintext[i] <= 'z')
        {
            printf("%c", (((plaintext[i] - 'a') + k) % 26) + 'a');      //print converted lowercase
        }
        else if (plaintext[i] >= 'A' && plaintext[i] <= 'Z')
        {
            printf("%c", (((plaintext[i] - 'A') + k) % 26) + 'A');      //print converted uppercase
        }
        else
        {
            printf("%c", plaintext[i]);     //print other without converting
        }
    }
    printf("\n");
}