#include <stdio.h>
#define SIZE 1000 /*매크로 SIZE 정의 */

main()
{
	int num;
	num = SIZE;
	printf("%d\n", num);

#undef SIZE /*매크로 SIZE해제 */
#define SIZE 5000 /*매크로 SIZE 정의 */

	num = SIZE;
	printf("%d\n", num);
}
