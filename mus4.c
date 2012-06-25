#include <math.h>

main(t)
{
    for(t=0;;t++)
	putchar(
		(int)(sin(t/100.) * (t>>5)) + (t%1000|t>>16) - (int)(log(t))
		);
}
