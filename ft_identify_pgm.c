#include "ft_contrast.h"

int	ft_identify_pgm(char *input, int *res_x, int *res_y)
{
	int		fdi;
	char	  	*line;
	int		index;

	index = 0;
	fdi = ft_open_file(input);
	if (fdi >= 0 && res_x && res_y)
	{
		get_next_line(fdi, &line);
		if (!ft_strequ(line, "P2"))
			return (-1);
		while (!ft_isdigit(*line))
		{
			if(get_next_line(fdi, &line) == -1)
				return (-1);
		}
		*res_x = ft_atoi(line);
		while (ft_isdigit(line[index]))
			++index;
		*res_y = ft_atoi(line + index);
		if (*res_x && *res_y)
			return (1);
	}
	return (-1);
}
