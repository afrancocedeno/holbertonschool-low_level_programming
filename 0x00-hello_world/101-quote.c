 #include <unistd.h>

/**
 * main - entry point funciton.
 *
 * Return: 1 as an error for failure.
 */
int main(void)
{
	/* file descriptor 2 for standard error handling */
	write(STDERR_FILENO,
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
