#include <math.h>

// stereo, set channels to 2

double wave1(t)
{
	return sin(t);
}

double wave2(t)
{
	return sin(t*1.001);
}

double wave3(t)
{
	return cos(.4*t);
}

double wave4(t)
{
	return -sin(t/1.5);
}

main(t)
{
	for (t=0;;t++)
	{
		// left
		putchar((int)(
			20*wave1(t) + 20*wave2(t) + 9*log(t*2.)*wave3(t) + 18 * sin(t / 0.001) * wave4(t)
		));
		// right
		putchar((int)(
			20*wave1(t) - 9*log(t*2.)*wave3(t) + 18 * sin(t / 0.1) * wave4(t*10) + (t>>12)
		));
	}
}