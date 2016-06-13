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

#define SIZE 31

long long dp[SIZE] = {0};

int main(void)
{
    int ncases = 0;
	scanf("%d", &ncases);

	dp[1] = 3;
	dp[2] = 7;
	for (int i = 3; i < SIZE; ++i) {
		dp[i] = 2*dp[i - 1] + dp[i - 2];
	}

    while (ncases --)
    {
	    int brokenLines = 0;
	    scanf("%d", &brokenLines);
	    printf("%lld\n", dp[brokenLines]);
    }
    return 0;
}
