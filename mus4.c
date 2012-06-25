#include <math.h>

main(t)
{
    for(t=0;;t++)
	putchar(
		(int)(sin(t/100.) * (t>>7)) + (t%542|t>>14) - (int)(log(t))
		);
}
