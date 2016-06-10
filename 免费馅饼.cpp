#include <iostream>
#include <string>
#include <set>
#include <map>
#include <vector>
#include <stack>
#include <queue>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int a[100001][12];
int f[100001][12];

int maximum3(int a, int b, int c) {
    int max = 0;

    if (a > max)
        max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;

    return max;
}

int maximum2(int a, int b){
    return a > b ? a : b;
}

int main(void)
{
    int ncases = 0;

    while (scanf("%d", &ncases) && ncases != 0)
    {
        memset(a, 0, sizeof(a));
        memset(f, 0, sizeof(f));
        int x = 0;
        int T = 0;
        int maxTime = 0;

        for (int i = 0; i < ncases; ++i)
        {
            scanf("%d %d", &x, &T);
            a[T][x] += 1;
            if (T > maxTime)
            {
                maxTime = T;
            }
        }

        f[1][4] = a[1][4];
        f[1][5] = a[1][5];
        f[1][6] = a[1][6];
        int ans = 0;
        for (int i = 2; i <= maxTime; ++i)
        {
            for (int j = 0; j < 11; ++j)
            {
                f[i][j] = f[i - 1][j];
                if(j > 0)
                    f[i][j] = max(f[i][j], f[i - 1][j - 1]);
                if(j < 10)
                    f[i][j] = max(f[i][j], f[i - 1][j + 1]);
                f[i][j] += a[i][j];
            }
        }

        for(int i = 0; i < 11; ++i)
            ans = max(ans, f[maxTime][i]);
        printf ("%d\n", ans);
    }

    return 0;
}
