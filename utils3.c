#include "push_swap.h"

int	find_biggest(t_docket *stack)
{
	int	biggest;
	int	i;

	biggest = 0;
	i = 1;
	while (i <= stack->size_b)
	{
		if (stack->b[biggest] < stack->b[i])
		biggest = i;
		i++;
	}
	return (biggest);
}

void	control_pb(t_docket *stack, int first, int last, int l)
{
	while (stack->size_a != -1)
	{
		if (stack->a[0] >= stack->lim[first] && stack->a[0] <= stack->lim[last])
		{
			pb(stack);
			if (last <= l - 1)
			{
				first++;
				last++;
			}
		}
		else if (stack->a[0] < stack->lim[first])
		{
			pb(stack);
			rb(stack, "rb\n");
			if (last <= l - 1)
			{
				first++;
				last++;
			}
		}
		else if ((stack->a[0] > stack->lim[last]))
			ra(stack, "ra\n");
	}
}