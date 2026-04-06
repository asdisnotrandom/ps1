#include "push_swap.h"

static int	find_min(t_stx *a)
{
	t_stx	*min;
	int		move;
	t_stx	*tmp;

	move = 0;
	min = a;
	tmp = a;
	while (tmp)
	{
		if (tmp->val < min->val)
			min = tmp;
		tmp = tmp->next;
	}
	while (a != min)
	{
		move++;
		a = a->next;
	}
	return (move);
}

void	ft_selection(t_stx **a, t_stx **b, t_cnt *cnt)
{
	int	move;
	int	rra_s;

	while ((*a)->next)
	{
		move = find_min(*a);
		rra_s = cnt->a_cnt - move;
		if ((cnt->a_cnt + 1) / 2 >= move)
		{
			while (move--)
				ra(a, cnt);
		}
		else
		{
			while (rra_s--)
				rra(a, cnt);
		}
		pb(a, b, cnt);
	}
	while (*b)
		pa(a, b, cnt);
}
