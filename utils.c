#include "push_swap.h"

int count_inputs(char *str) 
{
    int input = 0;
    int check = 1; 
    char *c = str;

    while (*c != '\0') 
	{
        if (*c == ' ') 
		{
            check = 1;
        } 
		else if (check)
		{
            input++;
            check = 0;
        }
        c++;
    }

    return input;
}

int num_of_args(int ac, char **str) 
{
    int count = 0;
    char **s = str + 1;

    while (ac-- > 1) 
	{
        count += count_inputs(*s++);
    }

    return count;
}

int check_max(char *str) 
{
    int digit_count = 0;
    char *c = str;

    while (*c != '\0') 
	{
        if (*c >= '0' && *c <= '9') 
		{
            digit_count++;
        }
        c++;
    }

    return digit_count;
}



