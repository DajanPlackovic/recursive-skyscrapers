#include <unistd.h>

void	error_out(void)
{
	write(2, "Error", 5);
}
