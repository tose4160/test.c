#include <stdio.h>
#include <gmp.h>//需要安装GMP库才能用
int main()
{
	mpz_t t = 1;
	mpz_init(t);
	mpz_set_ui(t, 1);
	for (int i = 1; i <= 100; i++)
	{
		mpz_mul_ui(t, t, i);
	}
	gmp_printf("%Zd\n", t);
	mpz_clear(t);
	return 0
}