/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
int _putchar(int c);
int _islower(int c);
int r;

    r = test_islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}