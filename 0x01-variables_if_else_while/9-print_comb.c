#include <stdio.h>

int main(void)
{
    int num = 0;
    
    while (num < 10)
    {
        int num2 = num + 1;
        
        while (num2 < 10)
        {
            putchar(num + '0');
            putchar(',');
            putchar(' ');
            putchar(num2 + '0');
            
            if (num != 8 || num2 != 9)
            {
                putchar(',');
                putchar(' ');
            }
            
            num2++;
        }
        
        num++;
    }
    
    putchar('\n');
    
    return 0;
}
