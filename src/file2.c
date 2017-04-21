#include <stdio.h>
#include <string.h>

int func()
{
	printf("[%s]:line:%d\n", __func__, __LINE__);
	return 0;
}
