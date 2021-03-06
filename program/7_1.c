#include <stdio.h>
#define DAY 365 /*매크로 DAY 정의 */
#define TIME 24 /*매크로 TIME정의 */
#define MINUTE 60 /*매크로 MINUTE */
#define SECOND 60 /*매크로 SECOND */

main()
{
	long int sec;
	/*매크로를 이용해 전처리하면 해당 문자열로 바뀐다, */
	sec = DAY*TIME*MINUTE*SECOND;
	printf("one year is %1d second\n", sec);
}
