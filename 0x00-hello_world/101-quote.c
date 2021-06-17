#include <unistd.h>

/**
* main - returns words with a write function instead of printf or puts
*          
*
* Return: in this case 1 instead of the usual 0.
*/

int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
