Task 2.txt
Who has access
A
System properties
Type
Text
Size
679 bytes
Storage used
679 bytes
Location
0x06-pointers_arrays_strings
Owner
Antony Bahati
Modified
12:03 AM by Antony Bahati
Opened
9:18 PM by me
Created
12:05 AM
No description
Viewers can download
#include "main.h"
/**
*  _strncpy - C function that copies a string, including the
*  terminating null byte, using at most an inputted number of bytes.
*  If the length of the source string is less than the maximum byte number,
*  the remainder of the destination string is filled with null bytes.
*  Works identically to the standard library function `strncpy`.
*@dest: buffer storing the string copy
*@src:the source string
*@n:max nummber of byte copied
*Return: returns
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
