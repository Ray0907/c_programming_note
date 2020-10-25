#include <stdio.h>
#include <time.h>

int main(void)
{
	time_t current = time(NULL);
	struct tm *ptr;
	char s[37];

	ptr = localtime(&current);
	strftime(s, sizeof(s), "%A, %B, %d, %Y	%I:%M", ptr);
	printf("%s%c\n", s, ptr->tm_hour <= 11 ? 'a' : 'p');
	return 0;
}