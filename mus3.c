#include <math.h>

// magic

main(t)
{
    for(t=0;;t++)
	putchar(
		(int)((cos(t/14.) * (t>>2)) + (t%1000|t>>16) - (int)(log(t>>1)))
		);
}
