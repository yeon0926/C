#include <stdio.h>
main()
{
	char ch;

	printf("Input charactier ==> ");
	scanf("%c", &ch);
	/* ch에 저장된 내용이 소문자면 */
	if((ch>='a') && (ch<='z'))
		/*대문자로 변환 */
		ch = ch -'a' + 'A';
	printf("%c\n", ch);
}
