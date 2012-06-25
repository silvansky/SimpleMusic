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
	return cos(.344*t);
}

double wave4(t)
{
	return -sin(M_PI / t);
}

main(t)
{
	for (t=0;;t++)
	{
		// left
		putchar((int)(
			20*wave1(t) - 20*wave2(t) + 9*log(t*2.)*wave3(t) + 18 * sin(t / 0.001) * wave4(t*2) + (t>>23|t^4|t-1) % 25
		));
		// right
		putchar((int)(
			20*wave1(t+1000) - 9*log(t*0.2)*wave3(t>>11) + 18 * sin(t / 0.1) * wave4(t*10) + 20 * t * atan(pow(t, M_E))
		));
	}
}