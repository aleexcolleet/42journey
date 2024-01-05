#include "libft.h"

/**************************************************************
*						FT_TOUPPER:							  *
*	La función ft_toupper convierte un carácter en minúscula  *
*	a su equivalente en mayúscula si es una letra minúscula.  *
*	De lo contrario, devuelve el mismo carácter.              *
*															  *
*	Argumentos:												  *
*	c: El carácter que se convertirá a mayúscula si es una    *
*	   letra minúscula.										  *
*															  *
*	Devuelve: El carácter convertido a mayúscula o el mismo   *
*	carácter si no es una letra minúscula.					  *
*															  *
\*************************************************************/

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return (c -= 32);
    return (c);
}

/*
int main(void)
{
    int c = 'z';
    printf("la letra es: %c", ft_toupper(c));
    return (0);
}*/