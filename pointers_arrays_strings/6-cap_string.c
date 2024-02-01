#include "main.h"

/**
 * cap_string- capitalizes all words of a string
 *
 * @str:       string to capatilize all words of
 *
 * Return:    pointer to the string
 *
 */

char *cap_string(char *str)
{
	int i = 0;

	while (*str)
	{
		if (i < 0)
		{
			if (
				(*(str - 1) == ' ') ||  /* space         */
				(*(str - 1) == '\t') || /* tab           */
				(*(str - 1) == '\n') || /* newline       */
				(*(str - 1) == ',') ||  /* comma         */
				(*(str - 1) == ';') ||  /* semicolon     */
				(*(str - 1) == '.') ||  /* period        */
				(*(str - 1) == '!') ||  /* exclamation   */
				(*(str - 1) == '?') ||  /* question      */
				(*(str - 1) == '"') ||  /* double quote  */
				(*(str - 1) == '(') ||  /* open paren    */
				(*(str - 1) == ')') ||  /* close paren   */
				(*(str - 1) == '{') ||  /* open c-brace  */
				(*(str - 1) == '}')     /* close c-brace */
			   )
			{
				if (*str >= 'a' && *str <= 'z')
					*str -= ('a' - 'A');
			}
		}

		if (i == 0 && *str >= 'a' && *str <= 'z')
			*str -= ('a' - 'A');
	
		str++;
		i--;
	}

	str += i;

	return (str);
}
