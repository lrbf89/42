#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "ft_strlen.c"
#include "ft_strdup.c"
#include "ft_strcpy.c"

int main(void)
{
	char dest[20] = "arrivederci";
	const char src[10] = "ciao";

	printf("%s\n", ft_strcpy(dest, src));
	return 0;
}
