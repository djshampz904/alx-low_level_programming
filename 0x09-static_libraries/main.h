#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * _islower - checks for lowercase character
 * @c: character to check
 *
 * Return: 1 if c is lowercase, otherwise 0
 */
int _islower(int c);

/**
 * _isalpha - checks for alphabetic character
 * @c: character to check
 *
 * Return: 1 if c is a letter (lowercase or uppercase), otherwise 0
 */
int _isalpha(int c);

/**
 * _abs - computes the absolute value of an integer
 * @n: integer to compute absolute value of
 *
 * Return: absolute value of n
 */
int _abs(int n);

/**
 * _isupper - checks for uppercase character
 * @c: character to check
 *
 * Return: 1 if c is uppercase, otherwise 0
 */
int _isupper(int c);

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: character to check
 *
 * Return: 1 if c is a digit, otherwise 0
 */
int _isdigit(int c);

/**
 * _strlen - computes the length of a string
 * @s: string to compute length of
 *
 * Return: length of s
 */
int _strlen(char *s);

/**
 * _puts - writes the string s to stdout
 * @s: string to write
 */
void _puts(char *s);

/**
 * _strcpy - copies the string pointed to by src, including the null byte,
 * to the buffer pointed to by dest
 * @dest: buffer to copy string to
 * @src: string to copy
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src);

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: integer value of string
 */
int _atoi(char *s);

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to append
 *
 * Return: pointer to resulting string dest
 */
char *_strcat(char *dest, char *src);

/**
 * _strncat - concatenates two strings, using at most n bytes from src
 * @dest: string to append to
 * @src: string to append
 * @n: maximum number of bytes from src to use
 *
 * Return: pointer to resulting string dest
 */
char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy - copies a string, using at most n bytes
 * @dest: buffer to copy string to
 * @src: string to copy
 * @n: maximum number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: 0 if s1 and s2 are the same,
 * otherwise an integer less than 0 if s1 is less than s2,
 * or an integer greater than 0 if s1 is greater than s2.
 */

int _strcmp(char *s1, char *s2);

/**

_memset - fills memory with a constant byte.
@s: pointer to memory area to fill.
@b: constant byte to fill memory area with.
@n: number of bytes to fill.
Return: pointer to memory area @s.
*/
char *_memset(char *s, char b, unsigned int n);

/**

_memcpy - copies memory area.
@dest: pointer to destination memory area.
@src: pointer to source memory area.
@n: number of bytes to copy.
Return: pointer to destination memory area @dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n);

/**

_strchr - locates a character in a string.
@s: pointer to string to search in.
@c: character to search for.
Return: pointer to the first occurrence of character @c in string @s,
*/

char *_strchr(char *s, char c);

/**

_strspn - gets the length of a prefix substring.
@s: pointer to string to search in.
@accept: pointer to string containing characters to match.
Return: number of bytes in the initial segment of @s which consist
*/

unsigned int _strspn(char *s, char *accept);

/**

_strpbrk - searches a string for any of a set of bytes.
@s: pointer to string to search in.
@accept: pointer to string containing characters to match.
Return: pointer to the first occurrence in @s of any of the bytes
*/

char *_strpbrk(char *s, char *accept);

/**

_strstr - locates a substring.
@haystack: pointer to string to search in.
@needle: pointer to substring to search for.
Return: pointer to the first occurrence of substring @needle in
*/

char *_strstr(char *haystack, char *needle);

#endif
