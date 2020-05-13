#include <math.h>

// stereo, set channels to 2

double baseFreq = 0.5;

double wave1(t)
{
	return sin(t*baseFreq);
}

double wave2(t)
{
	return sin(t*baseFreq*2);
}

double wave3(t)
{
	return sin(t*baseFreq*3);
}

double wave4(t)
{
	return sin(t*baseFreq*4);
}

main(t)
{
	for (t=0;;t++)
	{
		// left
		putchar((int)(
			21*(wave1(t) + 0.5*wave2(t) + 0.3*wave3(t) + 0.2*wave4(t)) + 9000/exp(t/20000.)*wave4(t) - exp(t/50000.)*wave2(t*.0213)
		));
		// right
		putchar((int)(
			20*(wave1(t)-wave3(t-1)/2) - 9000/exp(t/20000.)*wave3(t) + exp(t/55000.)*wave4(t*.121)
		));
	}
}