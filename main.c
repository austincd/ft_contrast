#include "ft_contrast.h"

int	main(int argc, char **argv)
{
	int argument;
	char *input;
	char *output;
	int contrast;

	contrast = 0;
	argument = 1;
	if (argc == 6)
	{
		while (argument <= 5)
		{
			if (ft_strequ(argv[argument], "-f"))
				input = ft_strdup(argv + 1);
			if (ft_strequ(argv[argument], "-c"))
				contrast = ft_atoi(argv + 1);
			if (ft_strequ(argv[argument], "-o"))
				output = ft_strdup(argv + 1);
			argument += 2;
		}
		if (input && output)
			ft_contrast(input, output, contrast);
		else
			ft_putendl("Error, please check params");
	}
	return (1);
}
