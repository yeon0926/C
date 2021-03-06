#include <stdio.h>
#include <assert.h> /* assert함수를 정의하는 헤더 파일*/

main()
{
	FILE *fp;

	fp=fopen("yesdata", "r");
	/*fp가 참이므로 아무 일도 하지 않고 다음 문장을 실행한다. */
	assert(fp);
	printf("tesdata exist\n");
	fclose(fp); /* fp 닫음*/

	fp=fopen("nodata", "r"); /*nodata 없으므로 NULL 반환*/
	/*fp가 거짓이므로 오류 메세지 출력, 코어 덤프하고 종료 */
	assert(fp);
	/*이후 문장 실행되지 않음*/
	printf("tesdata exist\n");
	fclose(fp);

	exit(0);
}
