#include "push_swap.h"

static void	insert_index(int *stmp, t_stx **a, t_cnt *cnt)
{
	int	i;
	t_stx	*temp;
	int		j;

	i = 0;
	while (i < cnt->a_cnt)
	{
		temp = *a;
		j = 0;
		while (j < cnt->a_cnt)
		{
			if (stmp[i] == temp->val)
				temp->index = i;
			j++;
			temp = temp->next;
		}
		i++;
	}
}
static void	bubble_index(int *stmp, t_cnt *cnt)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < cnt->a_cnt - 1)
	{
		j = 0;
		while (j < cnt->a_cnt -1)
		{
			if (stmp[j] > stmp[j+1])
			{
				temp = stmp[j + 1];
				stmp[j + 1] = stmp[j];
				stmp[j] = temp;
			}
			j++;
		}
		i++;
	}
}
static int	index_param(t_stx **a, t_cnt *cnt)
{
	t_stx	*temp;
	int		*stmp;
	int		i;
	int		x;

	x = 1;
	stmp = (int *)malloc(cnt->a_cnt * sizeof(int));
	if (stmp == NULL)
		free_exit(a, NULL);
	i = 0;
	temp = *a;
	while (temp)
	{
		stmp[i] = temp->val;
		temp = temp->next;
		i++;
	}
	bubble_index(stmp, cnt);
	insert_index(stmp, a, cnt);
	while (x * x < cnt->a_cnt)
		x++;
	free(stmp);
	return(x);
}

void	chunk_sort(t_stx **a, t_stx **b, t_cnt *cnt)
{
	t_stx	*temp;
	int		i;
	int		j;
	int		range;

	i = 0;
	range = index_param(a, cnt);
	while (cnt->a_cnt)
	{
		
	}
}
