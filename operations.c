#include "push_swap.h"

void	chosen_alg(t_stx **a, t_stx **b, t_cnt *cnt)
{
	if (cnt->op == 2)
		ft_selection(a, b, cnt);
	else if (cnt->op == 3)
		chunk_sort(a, b, cnt);
	else if (cnt->op == 4)
		radix_sort(a, b, cnt);
	else if (cnt->op == 5 || cnt->op == 6)
	{
		if (cnt->disorder < 0.2)
			ft_selection(a, b, cnt);
		else if (cnt->disorder >= 0.2 && cnt->disorder < 0.5)
			chunk_sort(a, b, cnt);
		else if (cnt->disorder >= 0.5)
			radix_sort(a, b, cnt);
	}
	if (cnt->bench == 1)
		ft_bench(cnt);
}