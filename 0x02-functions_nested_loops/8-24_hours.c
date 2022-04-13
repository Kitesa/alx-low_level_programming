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

for (time = 0; time <= 23; time++)
{
for (sec = 0; sec < 60; sec++)
{
_putchar(time / 10 + '0');
_putchar(time % 10 + '0');
_putchar(':');
_putchar(sec / 10 + '0');
_putchar(sec % 10 + '0');
_putchar('\n');
}
}
}

