// C program to create a folder

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void main()
{
	int check;
	char* dirname = "geeskforgeeks";


	check = mkdir(dirname);

	// check if directory is created or not
	if (!check)
		printf("Directory created\n");
	else {
		printf("Unable to create directory\n");
		exit(1);
	}

	getch();

	system("dir");
	getch();
}
