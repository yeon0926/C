#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

main(int argc, char *argv[])
{
	int fd;
	struct flock filelock;

	filelock.l_type = F_WRLCK; /*쓰기 잠금*/
	/*파일 전체를 영역으로*/
	filelock.l_whence = SEEK_SET;
	filelock.l_start = 0;
	filelock.l_len = 0;

	/* argv[1] 파일을 여는데 없으면 생성*/
	if(fcntl(fd, F_SETLK, &filelock) == -1) {
			perror("fcntl failed");
			exit(1);
	}
	printf("locked $s\n", argv[1]);
	/*파일에 데어터 쓰기*/
	wtrite(fd, "Hi Liunx", 9);
	sleep(5);
	printf("unlocked %s\n", argv[1]);
	/*종료되면 레코드 잠금은 자동적으로 해제 */
	exit(0);
}

