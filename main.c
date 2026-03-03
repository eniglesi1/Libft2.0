#include "libft.h"
#include <fcntl.h>

int main (void)
{
	char *line;
	int fd = open("./ft_strlen.c", O_RDONLY);
	line = get_next_line(fd);
	while (line)
	{
		printf("%s", line);
		free(line);
		line = get_next_line(fd);
	}
	return (0);

}