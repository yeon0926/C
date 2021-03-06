#include <stdio.h>

main(int argc, char argv[])
{
	FILE *write_fp;
	char buffer[256];

	/*argv[i] 프로세스를 샐행하고 쓰기용 파이프를 생성*/
	if((write_fp = popen(argv[1], "w")) == NULL) {
		perror("popen failed");
		exit(1);
	}

	sprintf(buffer, "Linux C Programmin");
	/*buffer에 저장된 데이터를 파이프에 씀
	  파이프에 쓴 데이터는 argv[1]명령어의 입력으로 전달 */
	fprintf(write_fp, buffer);

	/*wtrite_fp 파이프를 닫음*/
	pclose(write_fp);
	exit(0);
}
