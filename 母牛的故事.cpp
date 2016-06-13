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

#define SIZE 56

long long dp[SIZE] = {0};

int main(void)
{
    int ncases = 0;

	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 3;
	dp[4] = 4;

	for (int i = 5; i <= SIZE-1; ++i) {
		dp[i] = dp[i - 1] + dp[i - 3];
	}

    while (scanf("%d", &ncases) && ncases != 0)
    {
	    printf("%lld\n", dp[ncases]);
    }
    return 0;
}
