#include <stdio.h>

main(int argc, char *argv[])
{
	if(rename(argv[1], argv[2]) == -1) { /*argv[1]을 argv[2]로 이름을 변경*/
		perro("rename failed");
		exit(1);
	}
	printf("rename %s tp %s\n", argv[1], argv[2]);
	exit(0);
}
