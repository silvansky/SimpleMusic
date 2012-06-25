#include <math.h>

// airplain?

main(t)
{
    for(t=0;;t++)
	putchar(
		(int)(sin(t/10.) * (t>>5)) + (t%1000|t>>16) - (int)(log(t))
		);
}
