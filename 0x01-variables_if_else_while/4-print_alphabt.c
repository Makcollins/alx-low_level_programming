#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x= 'a';
    for (x = 'a'; x <= 'z'; x++)
    {
    	if (x!='q' && x!='e')
        putchar(x);
       
    }
    	
    putchar('\n');
    return 0;
}
