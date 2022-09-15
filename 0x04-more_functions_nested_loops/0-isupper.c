#include "main.h"
#include <ctype.h>
int _isupper(int c)
{
	char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
		'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'}
	
	int size = sizeof(alphabet) / sizeof(alphabet[char])
		
	for (int letter = 0; letter < size; letter++)
	{
		if (c == toupper(alphabet[letter]))
			return (1);
		else
			return (0);
	}
	return (0);
}
