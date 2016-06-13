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

#define SIZE 1001

int dp[SIZE] = {0};
int value[SIZE] = {0};
int volume[SIZE] = {0};

int main(void)
{
    int ncases = 0;
	scanf("%d", &ncases);

    while (ncases --)
    {
	    memset(dp, 0, sizeof(dp));
	    int nbones = 0;
	    int valueOfBag = 0;
	    scanf("%d %d", &nbones, &valueOfBag);

	    int singleBoneValue = 0;
	    int singleBoneVolume = 0;
	    for (int i = 1; i <= nbones; ++i) {
		    scanf("%d", &singleBoneValue);
		    value[i] = singleBoneValue;
	    }
	    for (int j = 1; j <= nbones; ++j) {
		    scanf("%d", &singleBoneVolume);
		    volume[j] = singleBoneVolume;
	    }

	    for (int i = 1; i <= nbones; ++i) {
		    for (int j = valueOfBag; j >= volume[i]; --j) {
				dp[j] = max(dp[j], dp[j - volume[i]] + value[i]);
		    }
	    }

	    printf("%d\n", dp[valueOfBag]);
    }
    return 0;
}
