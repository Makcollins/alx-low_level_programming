#include <stdio.h>
#include <stdlib.h>

int main()
{
int x= '0';
int y= '0';
 for (x = '0'; x <='9' ; x++)
 {
    	for (y='0'; y<='9'; y++)
	{
    		putchar(x);
    		putchar(y);
    		putchar(',');
    		putchar('\t');
		y++;	
	}
						        
							       
    }
	        
        putchar('\n');
	    return 0;
}
