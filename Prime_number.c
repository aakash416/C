/******************************************************************************
Write a program to print the nth prime number after a given number m.

Example 1: Given prime number m=3 and n=5. The program should print the 5th prime number afer 3
Given input
3
5
Expected output
17
*******************************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
    int n, c = 0, i, l = 0;
    int m;
    scanf("%d", &m);
    m = m + 1;
    scanf("%d", &n);
    while (c != n)
    {
        int count = 0;
        for (i = 2; i <= sqrt(m); i++)
        {
            if (m % i == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            c++;
            l = m;
        }
        m = m + 1;
    }
    printf("%d ", l);
    return 0;
}
