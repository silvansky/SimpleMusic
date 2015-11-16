#include <math.h>

// stereo, set channels to 2

double wave1(t)
{
	return sin(t*.9);
}

double wave2(t)
{
	return sin(t*0.901);
}

double wave3(t)
{
	return cos(t*0.899);
}

double wave4(t)
{
	return -sin(t*0.2255/2);
}

main(t)
{
	for (t=0;;t++)
	{
		// left
		putchar((int)(
			20*wave1(t) + 20*wave2(t) + 9*log(t*2.)*wave3(t+5) + 30*wave4(t)
		));

		// right
		putchar((int)(
			5*wave1(t) - 9*log(t*2.)*wave3(t) + 30 * wave4(t) + (t>>12)
		));
	}
}
