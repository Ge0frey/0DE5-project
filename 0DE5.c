#include <stdio.h>

int make_it_higher(int n) {
    int result = n + 100 + 20 + 7;
    return result;
}

int main()
{
    int num = 0;
    while (1)
    {
        num = make_it_higher(num);
        printf("Welcome to %04X\n", num);
    }
}