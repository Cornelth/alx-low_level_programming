/**
 *print_alphabet_x10 - printing alphabeth 10 times
 *Return: 0
 */

void print_alphabet_x10(void)
{
        int i;

        char let;

        let = 'a';

        for (i = 0; i < 10; i++)
        {
                do {
                        _putchar(let);
                        let++;
                } while (let <= 'z')
        }
        _putchar('\n');

