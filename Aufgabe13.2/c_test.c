// Bocher Diedrich Sandmeier

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

// EnumTypename == Arrowstatus
typedef enum
{
  ARROW_LEFT,
  ARROW_RIGHT,
  ARROW_BOTH,
  ARROW_NONE
} ArrowStatus;

const static struct 
{
	ArrowStatus value;
	const char *str;}
	convArrowStatus[] =
	{
		{ARROW_LEFT, "ARROW_LEFT"},
		{ARROW_RIGHT,"ARROW_RIGHT"},
		{ARROW_BOTH, "ARROW_BOTH"},
		{ARROW_NONE, "ARROW_NONE"}
};
	
const char* ArrowStatus2String(int index) 
{
    return convArrowStatus[index].str;
}

int string2ArrowStatus(const char *s)
{
	int i;
	for (i = 0; i < sizeof(convArrowStatus) / sizeof(convArrowStatus[0]); i++)
	{
		if (!strcmp(s, convArrowStatus[i].str)) // 0: match
			return (int) convArrowStatus[i].value;
	}	
	return -1;
}

void ArrowStatus_test(void)
{
	int idx;
	const char* s;
	for (idx = 0; idx < 4; idx++) // idx max value has to be adjusted for each typedef
	{
		s = ArrowStatus2String(idx);
		int value = string2ArrowStatus(s);
		assert(value != -1 && (ArrowStatus) value == idx);
	}
}

int main()
{
	ArrowStatus_test();
	
	return (EXIT_SUCCESS);
}
