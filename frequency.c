#include <stdio.h>

int main()
{
    char str[] = "development";
    int i, j, count;
    int len = 0;

    
    while(str[len] != '\0')
    {
        len++;
    }

    
    for(i = 0; i < len; i++)
    {
        count = 1;

        
        if(str[i] == '0')
        {
            continue;
        }

        for(j = i + 1; j < len; j++)
        {
            if(str[i] == str[j])
            {
                count++;

                str[j] = '0';
            }
        }

        printf("%c = %d\n", str[i], count);
    }

    return 0;
}