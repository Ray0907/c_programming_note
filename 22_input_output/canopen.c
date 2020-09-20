/* Check whether a file can be opened for reading */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	FILE *fp;

	if(argc != 2) {
		printf("usuage: canopen filename\n");
		exit(EXIT_FAILURE);
	}

	if((fp = fopen(argv[1], "r")) == NULL) {
		printf("%s can't be opened.\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	printf("%s can be opened\n", argv[1]);
	printf("%s's address is %p\n", argv[1], *argv);
	fclose(fp);
	return 0;
}
