#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>


using namespace std;
int Tower[101][101];
int sum[101][101];

int smax(int a, int b)
{
    return a > b ? a : b;
}

int main(void)
{
    int cases = 0;
    scanf("%d", &cases);



    while (cases --)
    {
        for (int l = 0; l < cases; ++l) {
            sum[0][l] = 0;
            sum[l][0] = 0;
        }

        int nrows = 0;
        scanf("%d", &nrows);

        for (int i = 1; i <= nrows; ++i)
        {
            for (int j = 1; j <= i; ++j)
            {
                scanf("%d", &Tower[i][j]);
            }
        }

        sum[1][1] = Tower[1][1];
        sum[0][0] = 0;

        for (int i = 1; i <= nrows; ++i)
        {
            for (int j = 1; j <= i; ++j)
            {
                sum[i][j] = smax((Tower[i][j] + sum[i-1][j-1]), (Tower[i][j] + sum[i-1][j]));
            }
        }

        int maximum = 0;

        for (int k = 1; k <= nrows; ++k)
        {
            if(sum[nrows][k] > maximum)
                maximum = sum[nrows][k];
        }

        printf("%d\n", maximum);
    }
    return 0;
}
