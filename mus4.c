#include <math.h>

main(t)
{
    for(t=0;;t++)
	putchar(
		(int)(sin(t/2.1) * (t>>7)) + (t%41|t>>14) - (int)(log(t/0.022))
		);
}
