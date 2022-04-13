#include "main.h"
/**
 * jack_bauer - print time
 *
 * Return: zero after completion
 *
 */
void jack_bauer(void)
{
int time;
int sec;

for (time = 0; time < 23; time++)
{
for (sec = 0; sec < 60; sec++)
{
if (time < 10)
{
_putchar('0');
_putchar(time);
_putchar(':');
_putchar('0'+ sec);
}
else
{
_putchar(time);
_putchar(sec);
}
}
}
}

