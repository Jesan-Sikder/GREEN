#include <stdio.h>
int main()
{
    int a, b, c, x = 0, y = 0;

    while (scanf("%d", &c) && c != 0)
    {
        int a, b, x = 0, y = 0;

        while (c--)
        {
            scanf("%d %d", &a, &b);
            if (a > b)
            {
                x++;
            }
            else if (a < b)
            {
                y++;
            }
        }
        printf("%d %d\n", x, y);
    }

    return 0;
}