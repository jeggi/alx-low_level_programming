#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <elf.h>

/**
 * print_addr - prints the address
 * @ptr: char pointer
 * Return: NULL 
 */
 void print_addr(