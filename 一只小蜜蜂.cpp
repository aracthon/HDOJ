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

#define SIZE 51

long long dp[SIZE] = {0};

int main(void)
{
    int ncases = 0;
	scanf("%d", &ncases);

	dp[1] = 1;
	dp[2] = 1;

    while (ncases --)
    {
	    int mstart = 0;
	    int mend   = 0;
	    scanf("%d %d", &mstart, &mend);

	    for (int i = 3; i <= 50; ++i) {
		    dp[i] = dp[i - 1] + dp[i - 2];
	    }

	    printf("%lld\n", dp[mend-mstart+1]);
    }
    return 0;
}
