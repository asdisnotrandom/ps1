#include "push_swap.h"

void sortto_5(t_stx **a, t_cnt *cnt)
{
	if (cnt->a_cnt == 2)
	{
		if ((*a)->val > (*a)->next->val)
			sa(a, cnt);
	}
	else if (cnt->a_cnt == 3)
	{
		if ((*a)->val > (*a)->next->val)
			sa(a, cnt);
		if ((*a)->next->val > (*a)->next->next->val)
			sa(a, cnt);
		if ((*a)->val > (*a)->next->val)
			sa(a, cnt);
	}
	else if (cnt->a_cnt <= 5)
	{
		
	}
}

