#include "main.h"
/**
 *get endianness - checks the endianness
 *Return: 0 if edianness is big and 1 if little
 */
 int get_endianness(void)
 {
	 int s = 1;
	 char *byte_ptr = (char *)&num;
	 
	 if (*byte_ptr == 1)
	 {
		 return (1);
	 }
	 else
	 {
		 return (0);
	 }
 }
 