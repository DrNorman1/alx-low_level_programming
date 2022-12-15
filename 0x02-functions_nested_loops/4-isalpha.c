#include "main.h"





	/**
	 * _isalpha - Chekcs if a character is alphabetic.
	 * @c: The character to be chekced.
	 * Return: 1 if the character is letter, lowrcase or uppercase , 0 otheriwse
	 */

	int _isalpha(int c)

	{

		return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

	}


