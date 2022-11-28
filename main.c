#include <stdio.h>
#include <stdlib.h>

#include "my_string.h"

int main()
{
	unsigned count = 0;

	const char *str1 = "Hello";
	const char *str2 = "Hel\0lo";
	const char str3[] = "Imperativ";

	if (5 == my_strlen(str1))
		count++;
	if (3 == my_strlen(str2))
		count++;
	if (9 == my_strlen(str3))
		count++;

	char *str4 = my_strcpy(str1);
	char *str5 = my_strcpy("Parameter string returned as a copy on the heap.");

	if (my_strlen(str4) == 5 && str4[4] =='o')
		count++;
	if (my_strlen(str5) == 48 && str5[20] =='u')
		count++;

	free(str4);
	free(str5);

	if (my_strcmp(str1, str2) > 0)
		count++;
	if (my_strcmp("alma", "korte") < 0)
		count++;
	if (my_strcmp("alma", "alma") == 0)
		count++;
	if (my_strcmp("alma", "almafa") < 0)
		count++;

	printf("%d / 9\n", count);
	if (9 == count)
		printf("All tests passed\n");
	else
		printf("Some tests failed\n");

	return 0;
}
