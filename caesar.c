#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int i,n;
    if (argc != 2) //checking for a valid key.
    {
        printf("Provide a valid encryption key.\n");
        return 1; //exit with error code 1
    }
    
    else
    {
        printf("Plaintext: ");
        char *p = "aBzZ4!cF";
        int k = atoi(argv[1]);
        
        printf("Ciphertext: ");
        
        for (i = 0, n = strlen(p); i < n; i++)
        {   
            if(isalpha(p[i]))
            {
                if(islower(p[i]))
                    printf("%c",((p[i]-97+k)%26)+97);
                if(isupper(p[i]))
                    printf("%c",((p[i]-65+k)%26)+65);
            }
            else
            {
                printf("%c",p[i]);
            }
            
            
        }
        
        printf("\n");

    }
}