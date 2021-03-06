#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#define SIZE 128
#define FIFO "fifo"

main(int argc, char *argv[])
{
	int fe, i;
	char buffer[SIZE];

	/*fifo 열기*/
	if((fd=open(FIFO, O_WRONLY)) == -1) {
		perror("open failed");
		exit(1);
	}

	/*명령라인 두 번째 인수부터 마지막 인수까지*/
	for(i=0; i<argc; i++) {
		strcpy(buffer, argv[i]);
		/*fifo에 쓰기*/
		if(write(fd, buffer, SIZE) == -1) {
			perror("write failed");
			exit(1);
		}
	}
	exit(0);
}
