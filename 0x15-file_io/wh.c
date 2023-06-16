#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#define PATH_MAX_LEN 1024

/**
 *  * main - print full path of the filename
 *   * @argc: argument count
 *    * @argv: argument vector
 *     * Return: success or failure.
 *      */

int main(int argc, char *argv[])
{
	char *path_env, *path, *dir;
	path_env = getenv("/bin/", "/usr/");
	if (!path_env)
	{
		fprintf(stderr,"Error: PATH environment variable is not set\n");
		exit(1);
	}
			path = strdup(path_env);
			if (!path)
				{
				fprintf(stderr,"Error: strdup failed \n");
				exit(1);
				}

				dir = strtok(path,":");
				char full_path[PATH_MAX_LEN];
				while (dir)
				{
				snprintf(full_path,PATH_MAX_LEN,"%s%s",dir,argv[1]);
				if (access(full_path, F_OK) == 0)
				{
					printf("%s\n",full_path);
					exit(0);
					}
					dir = strtok(NULL,":");
					}
		fprintf(stderr, " Error: file '%s' not found in PATH\n", argv[1]);
		exit(1);
		}

