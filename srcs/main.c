#include <stdio.h>
#include "ft_printf.h"

int		main()
{
	int p = 0;
	char *jee = NULL;
	short s = 1276;
	signed char sc = +1;

	ft_printf("        : {yellow}hello{eoc}\n");
	printf("printf  : hello\n");

	ft_printf("       c: {yellow}%-5c{eoc}\n", 'c');
	printf("printf c: %-5c\n", 'c');

	ft_printf("       s: {yellow}%10.3s{eoc}\n", "kalle");
	printf("printf s: %10.3s\n", "kalle");

	ft_printf("       p: {yellow}%-16p{eoc}\n", &p);
	printf("printf p: %-16p\n", &p);

	ft_printf("       p: {yellow}%10p{eoc}\n", jee);
	printf("printf p: %10p\n", jee);

	ft_printf("       d: {yellow}%-+10.6hd{eoc}\n", s);
	printf("printf d: %-+10.6hd\n", s);

	ft_printf("       i: {yellow}%-06.3hhi{eoc}\n", sc);
	printf("printf i: %-6.3hhi\n", sc);

	ft_printf("       o: {blue}%#018.15lo{eoc}\n", 8512345678);
	printf("printf o: %#018.15lo\n", 8512345678);

	ft_printf("       u: {yellow}%017.lu{eoc}\n", 8512345678);
	printf("printf u: %017.lu\n", 8512345678);
	
	ft_printf("       x: {yellow}%x{eoc}\n", -12);
	printf("printf x: %x\n", -12);

	ft_printf("       X: {yellow}%##017lX{eoc}\n", 123456789012);
	printf("printf X: %##017lX\n", 123456789012);

	ft_printf("       f: {yellow}% 10.5f{eoc}\n", 999.99994509);
	printf("printf f: % 10.5f\n", 999.99994509);

	ft_printf("{yellow}joujou%c,%d,jepajee%d,\n%%hawehe%s{eoc}", 'z', 20, 12, "\noujee\n");

	ft_printf("       o: {bright blue}%#018.15lo{eoc}\n{yellow}%#018.15lo{eoc}\n", 8512345678, 8512345678);
	printf("printf o: %#018.15lo\n", 8512345678);
}
