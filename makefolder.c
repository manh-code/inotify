// C program to create a folder
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void main()
{
	int check;
	//khoitaofolder
	char* dirname = "makefolder";


	check = mkdir(dirname, 0777);

	// kiem tra folder da duoc khoi tao hay chua
	if (!check)
		printf("Directory created\n");
	else {
		printf("Unable to create directory\n");
		exit(1);
	}

	system("dir");
	exit(0);
}
