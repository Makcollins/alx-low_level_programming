#include <stdio.h>
#include <stdlib.h>

int main()
{
		int x= '0';
			int y= '0';
				int z= '0';
					int p= '0';
					    for (x = '0'; x <='9' ; x++)
						        {
								    	for (y='0'; y<='9'; y++)
												{
																for (z='0'; z<='9'; z++)
																				{
																									for (p='0'; p<='9'; p++)
																														{
																																			putchar(x);
																																							putchar(y);
																																											putchar(' ');
																																															putchar(z);
																																																			putchar(p);
																																																							putchar(',');	
																																																											putchar(' ');
																																																															}
																												}
																			
																		}
										
									    }
					        
					        putchar('\n');
						    return 0;
}
