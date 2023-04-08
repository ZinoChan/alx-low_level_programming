#include "main.h"

/**
 * flip_bits - num of bits to flip to get from n to another
 * @n: oh baby how I' suppose to know
 * @m: I must confess that I still believe
 * Return: hit me baby one more time
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int hit_me_baby_one_more_time = 0;
	unsigned long int give_me_a_sign = n ^ m;

	while (give_me_a_sign)
	{
		hit_me_baby_one_more_time += (give_me_a_sign & 1);
		give_me_a_sign >>= 1;
	}

	return (hit_me_baby_one_more_time);

}
