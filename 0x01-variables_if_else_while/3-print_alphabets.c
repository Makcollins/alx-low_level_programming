#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x= 'a';
    for (x = 'a'; x <= 'z'; x++)
    {
        putchar(x);
       
    }
    
    for (x = 'A'; x <= 'Z'; x++)
    {
    	putchar(x);
    }	
    putchar('\n');
    return 0;
}	
